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
}

void AWashableCar::BeginPlay()
{
	Super::BeginPlay();

	// Create & apply dynamic material instances for every material slot
	if (CarMesh)
	{
		const int32 NumMats = CarMesh->GetNumMaterials();
		CarMIDs.Empty();
		CarMIDs.Reserve(NumMats);

		for (int32 i = 0; i < NumMats; i++)
		{
			UMaterialInstanceDynamic* MID = CarMesh->CreateAndSetMaterialInstanceDynamic(i);
			CarMIDs.Add(MID);
		}
	}

	// Apply initial visual state (starts dirty/brown)
	UpdateMaterialFromCleanPercent(GetCleanPercent_Implementation());
}

void AWashableCar::UpdateMaterialFromCleanPercent(float Clean01)
{
	// Clean01 is 0..1 (0 dirty, 1 clean)
	for (UMaterialInstanceDynamic* MID : CarMIDs)
	{
		if (MID)
		{
			MID->SetScalarParameterValue(CleanAmountParamName, Clean01);
		}
	}
}

void AWashableCar::ApplyWash_Implementation(float Amount)
{
	if (Amount <= 0.0f) return;

	CurrentDirt = FMath::Clamp(CurrentDirt - Amount, 0.0f, MaxDirt);

	const float Clean01 = GetCleanPercent_Implementation();

	// Update material every time dirt changes
	UpdateMaterialFromCleanPercent(Clean01);

	// Optional debug
	if (GEngine)
	{
		const float CleanPct = Clean01 * 100.0f;
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
