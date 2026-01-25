#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerHUDWidget.generated.h"

class UProgressBar;
class UImage;
class UHealthComponent;

UCLASS()
class ADVANCEDGAMEDEVPROJ_API UPlayerHUDWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	// You can remove NativeConstruct if you want, but this is fine:
	virtual void NativeConstruct() override;

	// call this once after creating the widget
	UFUNCTION(BlueprintCallable)
	void BindToHealth(UHealthComponent* InHealth);

protected:
	// UI bindings (must exist in WBP_PlayerHUD with same names)
	UPROPERTY(meta = (BindWidget))
	UProgressBar* HealthBar;

	UPROPERTY(meta = (BindWidget))
	UImage* DamageFlash;

	FTimerHandle DamageFlashTimer;

	UFUNCTION()
	void EndDamageFlash();

private:
	UPROPERTY()
	UHealthComponent* Health;

	UFUNCTION()
	void HandleHealthChanged(float NewHealth, float Delta);
};
