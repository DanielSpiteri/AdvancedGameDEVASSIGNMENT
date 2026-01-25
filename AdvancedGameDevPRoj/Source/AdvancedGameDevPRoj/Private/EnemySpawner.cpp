#include "EnemySpawner.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Kismet/KismetMathLibrary.h"

AEnemySpawner::AEnemySpawner()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();

	if (!EnemyClass)
	{
		UE_LOG(LogTemp, Error, TEXT("EnemySpawner: EnemyClass not set!"));
		return;
	}

	if (SpawnPoints.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("EnemySpawner: No SpawnPoints set!"));
		return;
	}

	GetWorldTimerManager().SetTimer(
		SpawnTimerHandle,
		this,
		&AEnemySpawner::TrySpawn,
		SpawnInterval,
		true
	);
}

void AEnemySpawner::TrySpawn()
{
	if (AliveCount >= MaxAlive) return;
	if (SpawnedSoFar >= TotalToSpawn)
	{
		GetWorldTimerManager().ClearTimer(SpawnTimerHandle);
		return;
	}

	AActor* ChosenPoint = SpawnPoints[UKismetMathLibrary::RandomIntegerInRange(0, SpawnPoints.Num() - 1)];
	if (!ChosenPoint) return;

	FActorSpawnParameters Params;
	Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	AActor* Spawned = GetWorld()->SpawnActor<AActor>(
		EnemyClass,
		ChosenPoint->GetActorTransform(),
		Params
	);

	if (Spawned)
	{
		AliveCount++;
		SpawnedSoFar++;

		Spawned->OnDestroyed.AddDynamic(this, &AEnemySpawner::OnSpawnedEnemyDestroyed);

		UE_LOG(LogTemp, Warning, TEXT("EnemySpawner: Spawned enemy (%d/%d). Alive=%d"),
			SpawnedSoFar, TotalToSpawn, AliveCount);
	}
}

void AEnemySpawner::OnSpawnedEnemyDestroyed(AActor* DestroyedActor)
{
	AliveCount = FMath::Max(0, AliveCount - 1);
}
