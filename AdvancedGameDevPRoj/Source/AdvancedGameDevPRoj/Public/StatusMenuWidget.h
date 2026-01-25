#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StatusMenuWidget.generated.h"

class UTextBlock;

UCLASS()
class ADVANCEDGAMEDEVPROJ_API UStatusMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetPlayerHealth(float Current, float Max);
	void SetEnemyHealth(float Current, float Max);

protected:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* PlayerHealthText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* EnemyHealthText;
};
