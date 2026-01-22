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
	Player = UGameplayStatics::GetPlayerCharacter(this, 0);

	if (!InPawn) return;

	const FVector RawSpawn = InPawn->GetActorLocation();
	UE_LOG(LogTemp, Warning, TEXT("AI: RawSpawn=%s"), *RawSpawn.ToString());

	if (UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld()))
	{
		FNavLocation Projected;

		// IMPORTANT: allow some search radius + height
		const FVector Extent(500.f, 500.f, 500.f);

		const bool bProjected = NavSys->ProjectPointToNavigation(RawSpawn, Projected, Extent);

		if (bProjected)
		{
			UE_LOG(LogTemp, Warning, TEXT("AI: ProjectedSpawn=%s"), *Projected.Location.ToString());

			SpawnPoint = Projected.Location;
			InPawn->SetActorLocation(Projected.Location);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("AI: SpawnPoint could not be projected to navmesh! Raw=%s"), *RawSpawn.ToString());
		}
	}

	State = EBacteriaAIState::Patrol;
	TimeUntilMovement = 0.f;
}


void ABacteriaAIController::Tick(float DeltaSeconds)
{
	UE_LOG(LogTemp, Warning, TEXT("AI Tick: State=%d TimeUntilMovement=%.2f"),
		(int32)State, TimeUntilMovement);

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

	// countdown so we don't spam MoveTo every frame
	if (TimeUntilMovement > 0.f)
	{
		TimeUntilMovement -= DeltaSeconds;
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("AI Tick: running state logic now (State=%d)"), (int32)State);

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
	UE_LOG(LogTemp, Warning, TEXT("AI: DoChase CALLED"));

	if (!Enemy.IsValid() || !Player.IsValid()) return;

	UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld());
	if (!NavSys)
	{
		UE_LOG(LogTemp, Error, TEXT("AI: NavSys is null"));
		return;
	}

	const FNavAgentProperties& Props = Enemy->GetNavAgentPropertiesRef();
	const ANavigationData* NavData = NavSys->GetNavDataForProps(Props);

	UE_LOG(LogTemp, Warning, TEXT("AI: AgentRadius=%.1f AgentHeight=%.1f NavData=%s"),
		Props.AgentRadius, Props.AgentHeight,
		NavData ? *NavData->GetName() : TEXT("NULL"));

	const auto Result = MoveToActor(Player.Get(), AttackRange * 0.9f);
	UE_LOG(LogTemp, Warning, TEXT("AI: MoveToActor result=%d"), (int32)Result);
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