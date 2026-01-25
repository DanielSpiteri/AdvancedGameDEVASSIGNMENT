#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BacteriaAIController.generated.h"

class ABacteriaEnemyCharacter;
class AAdvancedGameDevPRojCharacter;

UCLASS()
class ADVANCEDGAMEDEVPROJ_API ABacteriaAIController : public AAIController
{
	GENERATED_BODY()

public:
	ABacteriaAIController();

protected:
	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;
	virtual void Tick(float DeltaSeconds) override;

private:
	UPROPERTY()
	ABacteriaEnemyCharacter* Enemy = nullptr;

	UPROPERTY()
	AAdvancedGameDevPRojCharacter* Player = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	float StopDistance = 150.f;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	float RepathInterval = 0.25f;

	float TimeUntilRepath = 0.f;

	void CachePlayer();
};
