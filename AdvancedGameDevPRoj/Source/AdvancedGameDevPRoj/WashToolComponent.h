#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WashToolComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ADVANCEDGAMEDEVPROJ_API UWashToolComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UWashToolComponent();

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// --- Washing ---
	UPROPERTY(EditAnywhere, Category = "Washing")
	float BaseWashRate = 20.0f; // dirt per second

	UPROPERTY(EditAnywhere, Category = "Washing")
	float SprayRange = 800.0f;

	UPROPERTY(VisibleAnywhere, Category = "Washing")
	bool bIsSpraying = false;

	bool DoSprayTrace(FHitResult& OutHit) const;

	// Multiplier (soap boost etc.)
	UPROPERTY(EditAnywhere, Category = "Washing")
	float WashRateMultiplier = 1.0f;

	// --- Charge / Fuel ---
	UPROPERTY(EditAnywhere, Category = "Charge")
	float MaxCharge = 100.0f;

	UPROPERTY(VisibleAnywhere, Category = "Charge")
	float CurrentCharge = 100.0f;

	UPROPERTY(EditAnywhere, Category = "Charge")
	float ChargeDrainPerSecond = 20.0f; // drains while spraying

	UPROPERTY(VisibleAnywhere, Category = "Washing|UI")
	AActor* CurrentWashTarget = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Washing")
	bool bCountedAsClean = false;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float BacteriaDamage = 10.f;


public:
	// Spray controls
	UFUNCTION(BlueprintCallable, Category = "Washing")
	void StartSpray();

	UFUNCTION(BlueprintCallable, Category = "Washing")
	void StopSpray();

	// Soap boost setter
	UFUNCTION(BlueprintCallable, Category = "Washing")
	void SetWashRateMultiplier(float NewMultiplier);

	// Charge refill (canister pickup)
	UFUNCTION(BlueprintCallable, Category = "Charge")
	void AddCharge(float Amount);

	// --- Getters for UI ---
	UFUNCTION(BlueprintCallable, Category = "Charge")
	float GetChargeNormalised() const;

	UFUNCTION(BlueprintCallable, Category = "Charge")
	float GetCurrentCharge() const;

	// Current wash target (for UI)
	UFUNCTION(BlueprintCallable, Category = "Washing|UI")
	AActor* GetCurrentWashTarget() const { return CurrentWashTarget; }

};
