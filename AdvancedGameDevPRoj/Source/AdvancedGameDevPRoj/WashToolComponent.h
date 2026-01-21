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


};
