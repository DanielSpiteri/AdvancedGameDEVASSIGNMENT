#include "BacteriaEnemyCharacter.h"

#include "HealthComponent.h"
#include "AdvancedGameDevPRojCharacter.h"
#include "Kismet/GameplayStatics.h"

ABacteriaEnemyCharacter::ABacteriaEnemyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	Health = CreateDefaultSubobject<UHealthComponent>(TEXT("Health"));
}

void ABacteriaEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	TimeTilNextAttack = 0.f;

	if (Health)
	{
		Health->OnDied.AddDynamic(this, &ABacteriaEnemyCharacter::HandleDeath);
	}
}

void ABacteriaEnemyCharacter::Tick(float DeltaSeconds)
{
	//UE_LOG(LogTemp, Warning, TEXT("Bacteria ticking: %s"), *GetName());
	Super::Tick(DeltaSeconds);

	// cooldown timer
	if (TimeTilNextAttack > 0.f)
	{
		TimeTilNextAttack -= DeltaSeconds;
		return;
	}

	// only try attacking if we have a valid player
	ACharacter* PlayerChar = UGameplayStatics::GetPlayerCharacter(this, 0);
	if (!IsValid(PlayerChar))
		return;

	// optional: distance check here or inside AttackPlayer
	const float Distance = FVector::Dist(GetActorLocation(), PlayerChar->GetActorLocation());
	if (Distance > AttackRange)
		return;

	AttackPlayer();
}

void ABacteriaEnemyCharacter::AttackPlayer()
{

	ACharacter* PlayerChar = UGameplayStatics::GetPlayerCharacter(this, 0);
	if (!IsValid(PlayerChar)) return;

	UHealthComponent* PlayerHealth = PlayerChar->FindComponentByClass<UHealthComponent>();
	if (!PlayerHealth) return;

	const float Distance = FVector::Dist(GetActorLocation(), PlayerChar->GetActorLocation());
	if (Distance > AttackRange) return;

	PlayerHealth->TakeDamage(AttackDamage);

	UE_LOG(LogTemp, Warning, TEXT("Bacteria attacked player for %f damage"), AttackDamage);

	TimeTilNextAttack = AttackCooldown;

	FVector Dir = (PlayerChar->GetActorLocation() - GetActorLocation()).GetSafeNormal();
	float KnockbackStrength = 600.f;

	if (ACharacter* PlayerChar = Cast<ACharacter>(PlayerChar))
	{
		PlayerChar->LaunchCharacter(Dir * KnockbackStrength + FVector(0, 0, 200.f), true, true);
	}

	FVector Back = (GetActorLocation() - PlayerChar->GetActorLocation()).GetSafeNormal();
	LaunchCharacter(Back * 400.f, true, true);


}


void ABacteriaEnemyCharacter::HandleDeath()
{
	if (HeartPickupClass && FMath::FRand() <= HeartDropChance)
	{
		FVector SpawnLocation = GetActorLocation() + FVector(0, 0, 30);

		if (ACharacter* Player = UGameplayStatics::GetPlayerCharacter(this, 0))
		{
			const FVector AwayFromPlayer =
				(GetActorLocation() - Player->GetActorLocation()).GetSafeNormal();

			SpawnLocation += AwayFromPlayer * 120.f; // push it away from player
		}

		GetWorld()->SpawnActor<AActor>(HeartPickupClass, SpawnLocation, FRotator::ZeroRotator);
		UE_LOG(LogTemp, Warning, TEXT("Bacteria dropped a heart pickup"));
	}

	Destroy();
}