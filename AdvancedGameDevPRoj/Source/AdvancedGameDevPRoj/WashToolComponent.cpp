#include "WashToolComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Washable.h"

UWashToolComponent::UWashToolComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UWashToolComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UWashToolComponent::StartSpray()
{
	bIsSpraying = true;
	UE_LOG(LogTemp, Warning, TEXT("StartSpray called"));
}

void UWashToolComponent::StopSpray()
{
	bIsSpraying = false;
	UE_LOG(LogTemp, Warning, TEXT("StopSpray called"));
}

void UWashToolComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!bIsSpraying) return;

	FHitResult Hit;
	if (!DoSprayTrace(Hit)) return;

	AActor* HitActor = Hit.GetActor();
	if (!HitActor) return;

	if (HitActor->GetClass()->ImplementsInterface(UWashable::StaticClass()))
	{
		const float WashPerTick = BaseWashRate * DeltaTime;
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

	return GetWorld()->LineTraceSingleByChannel(OutHit, Start, End, ECC_Visibility, Params);
}
