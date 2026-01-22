#include "HeartPickup.h"

#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "HealthComponent.h"

AHeartPickup::AHeartPickup()
{
	PrimaryActorTick.bCanEverTick = true;

	Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	SetRootComponent(Collision);
	Collision->InitSphereRadius(40.f);
	Collision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	Collision->SetCollisionResponseToAllChannels(ECR_Ignore);
	Collision->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Collision);
	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AHeartPickup::BeginPlay()
{
	Super::BeginPlay();
	Collision->OnComponentBeginOverlap.AddDynamic(this, &AHeartPickup::OnOverlap);

	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, [this]()
		{bCanPickup = true;}, 1.f, false);


}

void AHeartPickup::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor) return;
	if (!bCanPickup) return;

	UHealthComponent* Health = OtherActor->FindComponentByClass<UHealthComponent>();
	if (!Health) return;

	// Increase max health: 100 -> 110
	Health->IncreaseMaxHealth(MaxHealthIncrease);

	// Heal +20 (clamped to new max)
	Health->AddHealth(HealAmount);

	UE_LOG(LogTemp, Warning, TEXT("Heart pickup: +%.0f MaxHP, +%.0f HP"), MaxHealthIncrease, HealAmount);

	Destroy();
}

