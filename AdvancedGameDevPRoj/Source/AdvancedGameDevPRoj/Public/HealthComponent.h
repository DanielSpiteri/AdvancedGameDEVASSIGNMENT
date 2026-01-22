#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

//fires when health changes, provides new health after change and the amount of change (positive or negative)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthChanged, float, NewHealth, float, Delta);
//fires when health reaches zero
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDied);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ADVANCEDGAMEDEVPROJ_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UHealthComponent();

	//max health value
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Health")
	float MaxHealth = 100.f;

	//current health value
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Health")
	float CurrentHealth = 0.f;

	//event called when health changes
	UPROPERTY(BlueprintAssignable, Category = "Health")
	FOnHealthChanged OnHealthChanged;

	//event called when health reaches zero
	UPROPERTY(BlueprintAssignable, Category = "Health")
	FOnDied OnDied;

	UFUNCTION(BlueprintCallable, Category = "Health")
	void TakeDamage(float Amount); //reduces health by Amount

	UFUNCTION(BlueprintCallable, Category = "Health")
	void Heal(float Amount); //increases health by Amount

	UFUNCTION(BlueprintCallable, Category = "Health")
	bool IsDead() const { return bDead; } //returns true if health is zero

	UFUNCTION(BlueprintCallable, Category = "Health")
	void IncreaseMaxHealth(float Amount); //increases max health

	UFUNCTION(BlueprintCallable, Category = "Health")
	void AddHealth(float Amount);  //increases current health without affecting max health


protected:
	virtual void BeginPlay() override;

private:
	bool bDead = false;
	void SetHealth(float NewHealth);
};
