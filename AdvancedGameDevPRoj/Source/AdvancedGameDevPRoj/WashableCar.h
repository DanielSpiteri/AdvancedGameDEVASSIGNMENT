#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Washable.h"
#include "WashableCar.generated.h"

class UStaticMeshComponent;
class UMaterialInstanceDynamic;

UCLASS()
class ADVANCEDGAMEDEVPROJ_API AWashableCar : public AActor, public IWashable
{
	GENERATED_BODY()

public:
	AWashableCar();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* CarMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Washing")
	float MaxDirt = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Washing")
	float CurrentDirt = 100.0f;

	// Name of the scalar parameter inside your material
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Washing|Visual")
	FName CleanAmountParamName = TEXT("CleanAmount");

	// Dynamic material instances (one per material slot)
	UPROPERTY(Transient)
	TArray<UMaterialInstanceDynamic*> CarMIDs;

	// Updates CleanAmount on materials based on CurrentDirt/MaxDirt
	void UpdateMaterialFromCleanPercent(float Clean01);

public:
	// IWashable
	virtual void ApplyWash_Implementation(float Amount) override;
	virtual float GetCleanPercent_Implementation() const override;
	virtual bool IsFullyClean_Implementation() const override;

	// Useful for UI
	UFUNCTION(BlueprintCallable, Category = "Washing")
	float GetCurrentDirt() const { return CurrentDirt; }
};
