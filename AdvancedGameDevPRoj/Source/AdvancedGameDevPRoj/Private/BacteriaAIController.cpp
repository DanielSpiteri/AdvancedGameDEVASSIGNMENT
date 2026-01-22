#include "BacteriaAIController.h"

#include "BacteriaEnemyCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "GameFramework/Character.h"

ABacteriaAIController::ABacteriaAIController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ABacteriaAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	Enemy = Cast<ABacteriaEnemyCharacter>(InPawn);
	SpawnPoint = InPawn ? InPawn->GetActorLocation() : FVector::ZeroVector;

	Player = UGameplayStatics::GetPlayerCharacter(this, 0);

	State = EBacteriaAIState::Patrol;
	TimeUntilMovement = 0.f;
}

void ABacteriaAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (!Enemy.IsValid())
	{
		return;
	}

	if (!Player.IsValid())
	{
		Player = UGameplayStatics::GetPlayerCharacter(this, 0);

	}

	UpdateState();

	if (TimeUntilMovement > 0.f)
	{
		return;
	}

	switch (State)
	{
	case EBacteriaAIState::Patrol:
		DoPatrol();
		break;
	case EBacteriaAIState::Chase:
		DoChase();
		break;
	case EBacteriaAIState::Attack:
		DoAttack();
		break;
	}

	TimeUntilMovement = MoveUpdateInterval;
}

void ABacteriaAIController::UpdateState()
{
	if (!Player.IsValid() || !Enemy.IsValid())
	{
		return;
	}

	const float DistanceToPlayer = FVector::Dist(Player->GetActorLocation(), Enemy->GetActorLocation());

	if (DistanceToPlayer <= AttackRange)
	{
		State = EBacteriaAIState::Attack;
	}
	else if (DistanceToPlayer <= ChaseRange)
	{
		State = EBacteriaAIState::Chase;
	}
	else
	{
		State = EBacteriaAIState::Patrol;
	}
}

void ABacteriaAIController::DoPatrol()
{
	if (!Enemy.IsValid())
	{
		return;
	}

	FVector PatrolPoint;
	if (GetRandomPatrolPoint(PatrolPoint))
	{
		MoveToLocation(PatrolPoint, 5.f);
	}
}

void ABacteriaAIController::DoChase()
{
	if (!Enemy.IsValid() || !Player.IsValid())
	{
		return;
	}

	MoveToActor(Player.Get(), AttackRange * 0.9f);
}

void ABacteriaAIController::DoAttack()
{
	if (!Enemy.IsValid() || !Player.IsValid())
	{
		return;
	}

	StopMovement();
	Enemy->AttackPlayer();
}

bool ABacteriaAIController::GetRandomPatrolPoint(FVector& OutPoint) const
{
	if (!Enemy.IsValid())
	{
		return false;
	}

	UNavigationSystemV1* NavigationSystem = UNavigationSystemV1::GetCurrent(GetWorld());
	if (!NavigationSystem) return false;

	FNavLocation RandomLocation;
	bool bFound = NavigationSystem->GetRandomPointInNavigableRadius(SpawnPoint, PatrolRadius, RandomLocation);

	if (!bFound)
	{
		return false;
	}
	else
	{
		OutPoint = RandomLocation.Location;
		return true;
	}
}