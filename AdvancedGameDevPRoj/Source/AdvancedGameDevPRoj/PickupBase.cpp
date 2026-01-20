#include "PickupBase.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "WashToolComponent.h"

APickupBase::APickupBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(Mesh);
	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	Trigger = CreateDefaultSubobject<USphereComponent>(TEXT("Trigger"));
	Trigger->SetupAttachment(Mesh);
	Trigger->InitSphereRadius(60.0f);
	Trigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	Trigger->SetCollisionResponseToAllChannels(ECR_Ignore);
	Trigger->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	Trigger->OnComponentBeginOverlap.AddDynamic(this, &APickupBase::OnTriggerOverlap);
}

void APickupBase::OnTriggerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor || !UpgradeToGrant) return;

	UWashToolComponent* Tool = OtherActor->FindComponentByClass<UWashToolComponent>();
	if (!Tool) return;

	Tool->ApplyUpgrade(UpgradeToGrant);
	Destroy();
}
