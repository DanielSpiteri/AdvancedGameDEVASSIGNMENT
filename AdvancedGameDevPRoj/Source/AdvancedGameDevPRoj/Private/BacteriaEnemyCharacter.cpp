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
	UE_LOG(LogTemp, Warning, TEXT("Bacteria ticking: %s"), *GetName());

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
	//check if attack is off cooldown
	if (TimeTilNextAttack <= 0.f) return;

	//get player character
	AAdvancedGameDevPRojCharacter* Player = Cast<AAdvancedGameDevPRojCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));

	if (!Player) return;

	//get player health component
	UHealthComponent* PlayerHealth = Player->FindComponentByClass<UHealthComponent>();
	if (!PlayerHealth) return;

	//check distance to player
	const float Distance = FVector::Dist(GetActorLocation(), Player->GetActorLocation());
	if (Distance > AttackRange) return;

	//deal damage to player
	PlayerHealth->TakeDamage(AttackDamage);

	//debug 
	UE_LOG(LogTemp, Warning, TEXT("Bacteria attacked player for %f damage"), AttackDamage);

	//reset attack cooldown
	TimeTilNextAttack = AttackCooldown;

}
