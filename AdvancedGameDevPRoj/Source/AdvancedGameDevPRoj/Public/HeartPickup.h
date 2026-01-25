#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HeartPickup.generated.h"

class USphereComponent;
class UStaticMeshComponent;

UCLASS()
class ADVANCEDGAMEDEVPROJ_API AHeartPickup : public AActor
{
	GENERATED_BODY()
	
public:	
	AHeartPickup();

protected:
	virtual void BeginPlay() override;

private:	
	UPROPERTY(VisibleAnywhere)
	USphereComponent* Collision; // For detecting when the player hits the heart

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh; // Visual representation of the heart

	UPROPERTY(EditDefaultsOnly, Category = "Heart")
	float MaxHealthIncrease = 10.f; // 100 -> 110 

	UPROPERTY(EditDefaultsOnly, Category = "Heart")
	float HealAmount = 20.f; // +20 HP

	UFUNCTION() 
	void OnOverlap( // Function to handle overlap/collide events
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	float PickupDelay = 1.f;
	bool bCanPickup = false;

};
