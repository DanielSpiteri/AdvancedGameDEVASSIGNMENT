#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BacteriaEnemyCharacter.generated.h"

class UHealthComponent;

UCLASS()
class ADVANCEDGAMEDEVPROJ_API ABacteriaEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ABacteriaEnemyCharacter();
	void AttackPlayer();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

private:
	//enemy health 
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UHealthComponent* Health;

	//combat settings
	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float AttackRange = 150.f;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float AttackDamage = 5.f;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float AttackCooldown = 2.f;

	//timer to manage attack cooldown
	float TimeTilNextAttack = 0.f;

	UPROPERTY(EditDefaultsOnly, Category = "Drops")
	TSubclassOf<AActor> HeartPickupClass;

	UPROPERTY(EditDefaultsOnly, Category = "Drops")
	float HeartDropChance = 0.25f; // 25% chance

	UFUNCTION()
	void HandleDeath();

	UPROPERTY()
	ACharacter* PlayerChar = nullptr;

};
