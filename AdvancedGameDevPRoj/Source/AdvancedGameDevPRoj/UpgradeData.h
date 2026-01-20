#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UpgradeData.generated.h"

UENUM(BlueprintType)
enum class EUpgradeType : uint8
{
	SoapBoost UMETA(DisplayName = "Soap Boost"),
	RangeBoost UMETA(DisplayName = "Range Boost"),
	ChargeRefill UMETA(DisplayName = "Charge Refill")
};

UCLASS(BlueprintType)
class ADVANCEDGAMEDEVPROJ_API UUpgradeData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Upgrade")
	EUpgradeType Type = EUpgradeType::SoapBoost;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Upgrade")
	FText DisplayName;

	// If Duration <= 0, treat as instant (e.g., charge refill)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Upgrade")
	float Duration = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Upgrade")
	float WashRateMultiplier = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Upgrade")
	float RangeBonus = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Upgrade")
	float ChargeBonus = 0.0f;
};
