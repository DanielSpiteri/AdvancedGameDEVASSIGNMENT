#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickupBase.generated.h"

class USphereComponent;
class UStaticMeshComponent;
class UUpgradeData;

UCLASS()
class ADVANCEDGAMEDEVPROJ_API APickupBase : public AActor
{
	GENERATED_BODY()

public:
	APickupBase();

protected:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* Trigger;

	// Data-driven upgrade to grant
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pickup")
	TObjectPtr<const UUpgradeData> UpgradeToGrant;

	UFUNCTION()
	void OnTriggerOverlap(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);
};
