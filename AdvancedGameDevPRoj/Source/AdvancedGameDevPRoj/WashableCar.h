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

	// Material parameter name (must match your material)
	UPROPERTY(EditAnywhere, Category = "Washing|Visual")
	FName CleanParamName = "CleanAmount";

private:
	UPROPERTY()
	UMaterialInstanceDynamic* CarMID = nullptr;

	void UpdateMaterialCleanAmount();

public:
	// IWashable
	virtual void ApplyWash_Implementation(float Amount) override;
	virtual float GetCleanPercent_Implementation() const override;
	virtual bool IsFullyClean_Implementation() const override;

	UFUNCTION(BlueprintCallable, Category = "Washing")
	float GetCurrentDirt() const { return CurrentDirt; }
};
