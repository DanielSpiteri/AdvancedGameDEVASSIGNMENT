#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Washable.generated.h"

UINTERFACE(BlueprintType)
class ADVANCEDGAMEDEVPROJ_API UWashable : public UInterface
{
	GENERATED_BODY()
};

class IWashable
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Washable")
	void ApplyWash(float Amount);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Washable")
	float GetCleanPercent() const;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Washable")
	bool IsFullyClean() const;
};
