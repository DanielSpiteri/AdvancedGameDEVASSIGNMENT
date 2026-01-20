#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UpgradeData.h"
#include "WashToolComponent.generated.h"

USTRUCT(BlueprintType)
struct FActiveUpgrade
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<const UUpgradeData> Data = nullptr;

	UPROPERTY(BlueprintReadOnly)
	float TimeRemaining = 0.0f;
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ADVANCEDGAMEDEVPROJ_API UWashToolComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UWashToolComponent();

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Base values
	UPROPERTY(EditAnywhere, Category = "Washing")
	float BaseWashRate = 20.0f; // dirt per second

	UPROPERTY(EditAnywhere, Category = "Washing")
	float BaseSprayRange = 800.0f;

	// Optional resource (charge)
	UPROPERTY(EditAnywhere, Category = "Washing|Charge")
	float MaxCharge = 100.0f;

	UPROPERTY(EditAnywhere, Category = "Washing|Charge")
	float ChargeDrainPerSecond = 10.0f;

	UPROPERTY(VisibleAnywhere, Category = "Washing|Charge")
	float CurrentCharge = 100.0f;

	UPROPERTY(VisibleAnywhere, Category = "Washing")
	bool bIsSpraying = false;

	// Active upgrades
	UPROPERTY(VisibleAnywhere, Category = "Upgrades")
	TArray<FActiveUpgrade> ActiveUpgrades;

	// Cached multipliers
	float WashRateMultiplier = 1.0f;
	float RangeBonus = 0.0f;

	// Internals
	void UpdateUpgrades(float DeltaTime);
	void RecalculateModifiers();
	bool DoSprayTrace(FHitResult& OutHit) const;

public:
	UFUNCTION(BlueprintCallable, Category = "Washing")
	void StartSpray();

	UFUNCTION(BlueprintCallable, Category = "Washing")
	void StopSpray();

	UFUNCTION(BlueprintCallable, Category = "Upgrades")
	void ApplyUpgrade(const UUpgradeData* Upgrade);

	UFUNCTION(BlueprintCallable, Category = "Washing")
	float GetCleanPercentLookingAt() const;

	UFUNCTION(BlueprintCallable, Category = "Washing|Charge")
	float GetChargePercent() const { return (MaxCharge <= 0.0f) ? 1.0f : CurrentCharge / MaxCharge; }

	UFUNCTION(BlueprintCallable, Category = "Upgrades")
	const TArray<FActiveUpgrade>& GetActiveUpgrades() const { return ActiveUpgrades; }
};
