#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemySpawner.generated.h"

class ABacteriaEnemyCharacter;

UCLASS()
class YOURPROJECT_API AEnemySpawner : public AActor
{
	GENERATED_BODY()

public:
	AEnemySpawner();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<AActor> EnemyClass;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TArray<AActor*> SpawnPoints;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	int32 MaxAlive = 3;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	int32 TotalToSpawn = 10;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	float SpawnInterval = 2.0f;

private:
	FTimerHandle SpawnTimerHandle;
	int32 AliveCount = 0;
	int32 SpawnedSoFar = 0;

	void TrySpawn();

	UFUNCTION()
	void OnSpawnedEnemyDestroyed(AActor* DestroyedActor);
};
