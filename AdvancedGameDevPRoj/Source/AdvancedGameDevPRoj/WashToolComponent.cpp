#include "WashToolComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "AdvancedGameDevPRojCharacter.h"
#include "StatusMenuWidget.h"
#include "Camera/CameraComponent.h"
#include "BacteriaEnemyCharacter.h"
#include "HealthComponent.h"
#include "Washable.h"

UWashToolComponent::UWashToolComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UWashToolComponent::BeginPlay()
{
	Super::BeginPlay();
	CurrentCharge = MaxCharge;

}

void UWashToolComponent::StartSpray()
{

	if (CurrentCharge <= 0.f)
	{
		UE_LOG(LogTemp, Warning, TEXT("StartSpray blocked: out of charge"));
		bIsSpraying = false;
		return;
	}

	bIsSpraying = true;
	UE_LOG(LogTemp, Warning, TEXT("StartSpray called"));
}

void UWashToolComponent::StopSpray()
{
	bIsSpraying = false;
	UE_LOG(LogTemp, Warning, TEXT("StopSpray called"));
}

void UWashToolComponent::TickComponent(
	float DeltaTime,
	ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!bIsSpraying) return;

	// Drain charge while spraying
	CurrentCharge -= ChargeDrainPerSecond * DeltaTime;
	CurrentCharge = FMath::Clamp(CurrentCharge, 0.f, MaxCharge);

	if (CurrentCharge <= 0.f)
	{
		UE_LOG(LogTemp, Warning, TEXT("Charge empty -> stopping spray"));
		StopSpray();
		return;
	}

	FHitResult Hit;
	if (!DoSprayTrace(Hit)) return;

	AActor* HitActor = Hit.GetActor();
	if (!HitActor) return;

	// 1) If it's bacteria, damage it (independent of Washable)
	if (ABacteriaEnemyCharacter* Bacteria = Cast<ABacteriaEnemyCharacter>(HitActor))
	{
		if (UHealthComponent* EnemyHealth = Bacteria->FindComponentByClass<UHealthComponent>())
		{
			// Optional: make it per-second so it's consistent with spraying
			EnemyHealth->TakeDamage(BacteriaDamage);

			if (AAdvancedGameDevPRojCharacter* PlayerChar =
				Cast<AAdvancedGameDevPRojCharacter>(GetOwner()))
			{
				PlayerChar->UpdateEnemyHealthUI(
					EnemyHealth->GetCurrentHealth(), 50.f);
			}


			UE_LOG(LogTemp, Warning, TEXT("Wash tool damaged bacteria for %f"), BacteriaDamage * DeltaTime);
		}

		UE_LOG(LogTemp, Warning, TEXT("Hitting bacteria: DPS=%f"), BacteriaDamage);

	}

	// 2) If it's washable, wash it
	if (HitActor->GetClass()->ImplementsInterface(UWashable::StaticClass()))
	{
		UE_LOG(LogTemp, Warning, TEXT("[WashTool] Base=%f Mult=%f FinalPerSec=%f"),
			BaseWashRate, WashRateMultiplier, BaseWashRate * WashRateMultiplier);

		const float WashPerTick = (BaseWashRate * WashRateMultiplier) * DeltaTime;
		IWashable::Execute_ApplyWash(HitActor, WashPerTick);
	}

}

bool UWashToolComponent::DoSprayTrace(FHitResult& OutHit) const
{
	AActor* Owner = GetOwner();
	if (!Owner) return false;

	ACharacter* CharOwner = Cast<ACharacter>(Owner);
	if (!CharOwner) return false;

	UCameraComponent* Cam = CharOwner->FindComponentByClass<UCameraComponent>();
	if (!Cam) return false;

	const FVector Start = Cam->GetComponentLocation();
	const FVector End = Start + (Cam->GetForwardVector() * SprayRange);

	FCollisionQueryParams Params;
	Params.AddIgnoredActor(Owner);

	return GetWorld()->LineTraceSingleByChannel(
		OutHit,
		Start,
		End,
		ECC_Visibility,
		Params
	);
}

void UWashToolComponent::SetWashRateMultiplier(float NewMultiplier)
{
	WashRateMultiplier = FMath::Max(0.0f, NewMultiplier);
	UE_LOG(LogTemp, Warning, TEXT("WashRateMultiplier set to: %f"), WashRateMultiplier);
}


void UWashToolComponent::AddCharge(float Amount)
{
	if (Amount <= 0.f) return;

	const float Old = CurrentCharge;
	CurrentCharge = FMath::Clamp(CurrentCharge + Amount, 0.f, MaxCharge);

	UE_LOG(LogTemp, Warning, TEXT("Charge refilled: %f -> %f"), Old, CurrentCharge);
}


float UWashToolComponent::GetChargeNormalised() const
{
	return (MaxCharge <= 0.f) ? 0.f : (CurrentCharge / MaxCharge);
}

float UWashToolComponent::GetCurrentCharge() const
{
	return CurrentCharge;
}
