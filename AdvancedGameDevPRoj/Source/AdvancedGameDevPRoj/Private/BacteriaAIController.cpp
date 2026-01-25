#include "BacteriaAIController.h"

#include "BacteriaEnemyCharacter.h"
#include "AdvancedGameDevPRojCharacter.h"   
#include "Kismet/GameplayStatics.h"

ABacteriaAIController::ABacteriaAIController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ABacteriaAIController::BeginPlay()
{
	Super::BeginPlay();
	CachePlayer();
}

void ABacteriaAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	Enemy = Cast<ABacteriaEnemyCharacter>(InPawn);

	if (!Player)
	{
		CachePlayer();
	}
}

void ABacteriaAIController::CachePlayer()
{
	Player = Cast<AAdvancedGameDevPRojCharacter>(
		UGameplayStatics::GetPlayerCharacter(this, 0)
	);
}

void ABacteriaAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	APawn* SelfPawn = GetPawn();
	if (!SelfPawn) return;

	if (!Player)
	{
		CachePlayer();
		if (!Player) return;
	}

	const float Dist = FVector::Dist(SelfPawn->GetActorLocation(), Player->GetActorLocation());

	if (Dist <= StopDistance)
	{
		StopMovement();
		return;
	}

	TimeUntilRepath -= DeltaSeconds;
	if (TimeUntilRepath > 0.f) return;

	TimeUntilRepath = RepathInterval;

	MoveToActor(Player, StopDistance, true, true, true, 0, true);
}
