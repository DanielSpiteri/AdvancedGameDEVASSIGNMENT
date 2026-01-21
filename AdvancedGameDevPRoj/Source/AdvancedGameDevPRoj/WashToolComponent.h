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
	virtual void TickComponent(
		float DeltaTime,
		ELevelTick TickType,
		FActorComponentTickFunction* ThisTickFunction
	) override;

	UPROPERTY(EditAnywhere, Category = "Washing")
	float BaseWashRate = 20.0f; // dirt per second

	UPROPERTY(EditAnywhere, Category = "Washing")
	float SprayRange = 800.0f;

	UPROPERTY(VisibleAnywhere, Category = "Washing")
	bool bIsSpraying = false;

	bool DoSprayTrace(FHitResult& OutHit) const;

public:
	UFUNCTION(BlueprintCallable, Category = "Washing")
	void StartSpray();

	UFUNCTION(BlueprintCallable, Category = "Washing")
	void StopSpray();

	UPROPERTY(EditAnywhere, Category = "Washing")
	float WashRateMultiplier = 1.0f;

	UFUNCTION(BlueprintCallable, Category = "Washing")
	void SetWashRateMultiplier(float NewMultiplier);


	// --- Charge / Fuel ---
	UPROPERTY(EditAnywhere, Category = "Charge")
	float MaxCharge = 100.0f;

	UPROPERTY(VisibleAnywhere, Category = "Charge")
	float CurrentCharge = 100.0f;

	UPROPERTY(EditAnywhere, Category = "Charge")
	float ChargeDrainPerSecond = 20.0f; // drains while spraying

	UPROPERTY(EditAnywhere, Category = "Charge")
	float ChargeRefillAmount = 50.0f;   // default refill amount (optional)

	// Getters for UI
	UFUNCTION(BlueprintCallable, Category = "Charge")
	float GetChargeNormalised() const { return (MaxCharge <= 0.f) ? 0.f : (CurrentCharge / MaxCharge); }

	UFUNCTION(BlueprintCallable, Category = "Charge")
	float GetCurrentCharge() const { return CurrentCharge; }

	// Refill function for canister pickup
	UFUNCTION(BlueprintCallable, Category = "Charge")
	void AddCharge(float Amount);



};
