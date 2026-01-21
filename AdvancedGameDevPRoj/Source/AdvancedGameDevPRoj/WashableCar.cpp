#include "WashableCar.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/Engine.h"

AWashableCar::AWashableCar()
{
	PrimaryActorTick.bCanEverTick = false;

	CarMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CarMesh"));
	SetRootComponent(CarMesh);
	CarMesh->SetCollisionProfileName(TEXT("BlockAll"));

	// Start dirty
	CurrentDirt = MaxDirt;
}

void AWashableCar::BeginPlay()
{
	Super::BeginPlay();

	// Create dynamic material instance so we can change CleanAmount at runtime
	if (CarMesh)
	{
		UMaterialInterface* BaseMat = CarMesh->GetMaterial(0);
		if (BaseMat)
		{
			CarMID = UMaterialInstanceDynamic::Create(BaseMat, this);
			CarMesh->SetMaterial(0, CarMID);
		}
	}

	UpdateMaterialCleanAmount();
}

void AWashableCar::ApplyWash_Implementation(float Amount)
{
	if (Amount <= 0.0f) return;

	CurrentDirt = FMath::Clamp(CurrentDirt - Amount, 0.0f, MaxDirt);

	UpdateMaterialCleanAmount();

	// Debug clean %
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

void AWashableCar::UpdateMaterialCleanAmount()
{
	if (!CarMID) return;

	// CleanAmount: 0 = fully dirty, 1 = fully clean
	const float CleanAmount = GetCleanPercent_Implementation();
	CarMID->SetScalarParameterValue(CleanParamName, CleanAmount);
}
