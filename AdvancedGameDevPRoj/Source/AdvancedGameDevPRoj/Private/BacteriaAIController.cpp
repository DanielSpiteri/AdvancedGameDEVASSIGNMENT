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

	//if (UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld()))
	//{
	//	FNavLocation Projected;
	//	if (NavSys->ProjectPointToNavigation(SpawnPoint, Projected))
	//	{
	//		SpawnPoint = Projected.Location;
	//	}
	//}

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
	// Always validate weak pointers before using them
	if (!Enemy.IsValid())
	{
		State = EBacteriaAIState::Patrol;
		return;
	}

	ACharacter* PlayerChar = Player.Get();
	if (!IsValid(PlayerChar))
	{
		PlayerChar = UGameplayStatics::GetPlayerCharacter(this, 0);
		Player = PlayerChar;
	}

	if (!IsValid(PlayerChar))
	{
		State = EBacteriaAIState::Patrol;
		return;
	}

	const float DistanceToPlayer = FVector::Dist(
		PlayerChar->GetActorLocation(),
		Enemy->GetActorLocation()
	);

	UE_LOG(LogTemp, Warning, TEXT("AI: Dist=%.1f State=%d"), DistanceToPlayer, (int32)State);

	if (DistanceToPlayer <= AttackRange) State = EBacteriaAIState::Attack;
	else if (DistanceToPlayer <= ChaseRange) State = EBacteriaAIState::Chase;
	else State = EBacteriaAIState::Patrol;
}


void ABacteriaAIController::DoPatrol()
{
	UE_LOG(LogTemp, Warning, TEXT("AI: DoPatrol called"));

	if (!Enemy.IsValid())
	{
		return;
	}

	FVector PatrolPoint;
	if (GetRandomPatrolPoint(PatrolPoint))
	{
		auto Result = MoveToLocation(PatrolPoint, 5.f);
		UE_LOG(LogTemp, Warning, TEXT("MoveToLocation called"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("GetRandomPatrolPoint failed"));

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
	if (!GetWorld()) return false;

	UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld());
	if (!NavSys) return false;

	// If SpawnPoint ended up invalid, fall back to current pawn location
	FVector Center = SpawnPoint;
	if (Center.IsNearlyZero())
	{
		if (APawn* P = GetPawn())
		{
			Center = P->GetActorLocation();
		}
	}

	FNavLocation Loc;
	const bool bFound = NavSys->GetRandomPointInNavigableRadius(Center, PatrolRadius, Loc);
	if (!bFound) return false;

	OutPoint = Loc.Location;
	return true;
}