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
}

void ABacteriaEnemyCharacter::Tick(float DeltaSeconds)
{
	//UE_LOG(LogTemp, Warning, TEXT("Bacteria ticking: %s"), *GetName());

	Super::Tick(DeltaSeconds);

	//cooldown
	if (TimeTilNextAttack > 0.f)
	{
		TimeTilNextAttack -= DeltaSeconds;
	}

	//attack player if in range
	AttackPlayer();

}

void ABacteriaEnemyCharacter::AttackPlayer()
{
	// check if attack is off cooldown (ready when <= 0)
	if (TimeTilNextAttack > 0.f)
	{
		UE_LOG(LogTemp, Verbose, TEXT("Bacteria attack cooldown: %.2f"), TimeTilNextAttack);
		return;
	}

	// get player character
	AAdvancedGameDevPRojCharacter* Player =
		Cast<AAdvancedGameDevPRojCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));

	if (!Player)
	{
		UE_LOG(LogTemp, Error, TEXT("AttackPlayer: Player cast failed (not AAdvancedGameDevPRojCharacter)"));
		return;
	}

	// get player health component
	UHealthComponent* PlayerHealth = Player->FindComponentByClass<UHealthComponent>();
	if (!PlayerHealth)
	{
		UE_LOG(LogTemp, Error, TEXT("AttackPlayer: Player has no HealthComponent"));
		return;
	}

	// check distance to player
	const float Distance = FVector::Dist(GetActorLocation(), Player->GetActorLocation());

	UE_LOG(LogTemp, Verbose, TEXT("AttackPlayer: distance %.1f / range %.1f"), Distance, AttackRange);

	if (Distance > AttackRange)
	{
		return;
	}

	// deal damage to player
	PlayerHealth->TakeDamage(AttackDamage);

	// debug
	UE_LOG(LogTemp, Warning, TEXT("Bacteria attacked player for %.1f damage"), AttackDamage);

	// reset attack cooldown
	TimeTilNextAttack = AttackCooldown;
}

