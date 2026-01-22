#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BacteriaAIController.generated.h"

UENUM()
enum class EBacteriaAIState : uint8
{
	Patrol,
	Chase,
	Attack
};

UCLASS()
class ADVANCEDGAMEDEVPROJ_API ABacteriaAIController : public AAIController
{
	GENERATED_BODY()
	
	public:
	ABacteriaAIController();

	virtual void OnPossess(APawn* InPawn) override;
	virtual void Tick(float DeltaSeconds) override;

	private:
		UPROPERTY(EditDefaultsOnly, Category = "AI")
		float PatrolRadius = 800.f;

		UPROPERTY(EditDefaultsOnly, Category = "AI")
		float ChaseRange = 900.f;

		UPROPERTY(EditDefaultsOnly, Category = "AI")
		float AttackRange = 150.f;

		UPROPERTY(EditDefaultsOnly, Category = "AI")
		float MoveUpdateInterval = 0.4f; //

		EBacteriaAIState State = EBacteriaAIState::Patrol;

		FVector SpawnPoint = FVector::ZeroVector;
		float TimeUntilMovement = 0.f;

		TWeakObjectPtr<class ABacteriaEnemyCharacter> Enemy;
		TWeakObjectPtr<class ACharacter> Player;

		void UpdateState();
		void DoPatrol();
		void DoChase();
		void DoAttack();

		bool GetRandomPatrolPoint(FVector& OutPoint) const;
};
