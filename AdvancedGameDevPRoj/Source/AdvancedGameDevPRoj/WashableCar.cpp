#include "WashableCar.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"

AWashableCar::AWashableCar()
{
	PrimaryActorTick.bCanEverTick = false;

	CarMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CarMesh"));
	SetRootComponent(CarMesh);
	CarMesh->SetCollisionProfileName(TEXT("BlockAll"));
}

void AWashableCar::ApplyWash_Implementation(float Amount)
{
	if (Amount <= 0.0f) return;

	CurrentDirt = FMath::Clamp(CurrentDirt - Amount, 0.0f, MaxDirt);

	// Optional debug
	if (GEngine)
	{
		const float CleanPct = GetCleanPercent_Implementation() * 100.0f;
		GEngine->AddOnScreenDebugMessage(
			-1, 0.05f, FColor::Green,
			FString::Printf(TEXT("Car Clean: %.1f%%"), CleanPct)
		);
	}
}

float AWashableCar::GetCleanPercent_Implementation() const
{
	if (MaxDirt <= 0.0f) return 1.0f;
	return FMath::Clamp((MaxDirt - CurrentDirt) / MaxDirt, 0.0f, 1.0f);
}

bool AWashableCar::IsFullyClean_Implementation() const
{
	return CurrentDirt <= KINDA_SMALL_NUMBER;
}
