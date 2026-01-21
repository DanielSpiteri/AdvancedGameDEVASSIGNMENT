#include "PickupBase.h"

#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "WashToolComponent.h"
#include "UpgradeData.h"

#include "Engine/Engine.h" // for GEngine debug message

APickupBase::APickupBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(Mesh);
	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	Trigger = CreateDefaultSubobject<USphereComponent>(TEXT("Trigger"));
	Trigger->SetupAttachment(RootComponent);

	Trigger->InitSphereRadius(60.0f);

	// IMPORTANT: allow overlaps
	Trigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	Trigger->SetGenerateOverlapEvents(true);

	// Make it a trigger that overlaps Pawns
	Trigger->SetCollisionObjectType(ECC_WorldDynamic);
	Trigger->SetCollisionResponseToAllChannels(ECR_Ignore);
	Trigger->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	Trigger->OnComponentBeginOverlap.AddDynamic(this, &APickupBase::OnTriggerOverlap);
}

void APickupBase::OnTriggerOverlap(
	UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	// Debug: prove overlap fires
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1, 2.0f, FColor::Green,
			FString::Printf(TEXT("Pickup overlap with: %s"), *GetNameSafe(OtherActor))
		);
	}

	if (!OtherActor || !UpgradeToGrant) return;

	// Player must have WashToolComponent attached
	UWashToolComponent* Tool = OtherActor->FindComponentByClass<UWashToolComponent>();
	if (!Tool) return;

	//Tool->ApplyUpgrade(UpgradeToGrant);

	Destroy();
}
