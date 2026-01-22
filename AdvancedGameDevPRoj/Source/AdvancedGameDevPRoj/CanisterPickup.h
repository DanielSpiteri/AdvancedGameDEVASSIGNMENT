#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CanisterPickup.generated.h"

class USphereComponent;
class UStaticMeshComponent;

UCLASS()
class ADVANCEDGAMEDEVPROJ_API ACanisterPickup : public AActor
{
    GENERATED_BODY()

public:
    ACanisterPickup();

protected:
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* Mesh;

    UPROPERTY(VisibleAnywhere)
    USphereComponent* Trigger;

    UPROPERTY(EditAnywhere, Category = "Charge")
    float RefillAmount = 75.0f;

    UFUNCTION()
    void OnTriggerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
