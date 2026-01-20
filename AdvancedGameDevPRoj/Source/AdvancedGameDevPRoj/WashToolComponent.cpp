#include "WashToolComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Washable.h"

UWashToolComponent::UWashToolComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UWashToolComponent::BeginPlay()
{
	Super::BeginPlay();
	CurrentCharge = MaxCharge;
	RecalculateModifiers();
}

void UWashToolComponent::StartSpray()
{
	if (CurrentCharge <= 0.0f) return;
	bIsSpraying = true;
}

void UWashToolComponent::StopSpray()
{
	bIsSpraying = false;
}

void UWashToolComponent::ApplyUpgrade(const UUpgradeData* Upgrade)
{
	if (!Upgrade) return;

	// Instant upgrades (e.g. charge refill)
	if (Upgrade->Duration <= 0.0f)
	{
		if (Upgrade->ChargeBonus != 0.0f)
		{
			CurrentCharge = FMath::Clamp(CurrentCharge + Upgrade->ChargeBonus, 0.0f, MaxCharge);
		}
		return;
	}

	FActiveUpgrade NewUp;
	NewUp.Data = Upgrade;
	NewUp.TimeRemaining = Upgrade->Duration;
	ActiveUpgrades.Add(NewUp);

	RecalculateModifiers();
}

void UWashToolComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UpdateUpgrades(DeltaTime);

	if (!bIsSpraying) return;

	// Drain charge
	if (MaxCharge > 0.0f)
	{
		CurrentCharge = FMath::Clamp(CurrentCharge - ChargeDrainPerSecond * DeltaTime, 0.0f, MaxCharge);
		if (CurrentCharge <= 0.0f)
		{
			StopSpray();
			return;
		}
	}

	FHitResult Hit;
	if (!DoSprayTrace(Hit)) return;

	AActor* HitActor = Hit.GetActor();
	if (!HitActor) return;

	if (HitActor->GetClass()->ImplementsInterface(UWashable::StaticClass()))
	{
		const float WashPerTick = BaseWashRate * WashRateMultiplier * DeltaTime;
		IWashable::Execute_ApplyWash(HitActor, WashPerTick);
	}
}

void UWashToolComponent::UpdateUpgrades(float DeltaTime)
{
	bool bChanged = false;

	for (int32 i = ActiveUpgrades.Num() - 1; i >= 0; --i)
	{
		ActiveUpgrades[i].TimeRemaining -= DeltaTime;
		if (ActiveUpgrades[i].TimeRemaining <= 0.0f)
		{
			ActiveUpgrades.RemoveAt(i);
			bChanged = true;
		}
	}

	if (bChanged)
	{
		RecalculateModifiers();
	}
}

void UWashToolComponent::RecalculateModifiers()
{
	WashRateMultiplier = 1.0f;
	RangeBonus = 0.0f;

	for (const FActiveUpgrade& Up : ActiveUpgrades)
	{
		if (!Up.Data) continue;
		WashRateMultiplier *= Up.Data->WashRateMultiplier;
		RangeBonus += Up.Data->RangeBonus;
	}
}

bool UWashToolComponent::DoSprayTrace(FHitResult& OutHit) const
{
	AActor* Owner = GetOwner();
	if (!Owner) return false;

	ACharacter* CharOwner = Cast<ACharacter>(Owner);
	if (!CharOwner) return false;

	// Try to find a camera component on the character
	UCameraComponent* Cam = CharOwner->FindComponentByClass<UCameraComponent>();
	if (!Cam) return false;

	const FVector Start = Cam->GetComponentLocation();
	const FVector End = Start + (Cam->GetForwardVector() * (BaseSprayRange + RangeBonus));

	FCollisionQueryParams Params;
	Params.AddIgnoredActor(Owner);
	return GetWorld()->LineTraceSingleByChannel(OutHit, Start, End, ECC_Visibility, Params);
}

float UWashToolComponent::GetCleanPercentLookingAt() const
{
	FHitResult Hit;
	if (!DoSprayTrace(Hit)) return -1.0f;
	AActor* HitActor = Hit.GetActor();
	if (!HitActor) return -1.0f;

	if (HitActor->GetClass()->ImplementsInterface(UWashable::StaticClass()))
	{
		return IWashable::Execute_GetCleanPercent(HitActor);
	}
	return -1.0f;
}
