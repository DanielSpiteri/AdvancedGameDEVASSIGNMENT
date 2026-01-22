#include "HealthComponent.h"

UHealthComponent::UHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

}

void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	//start with full health
	CurrentHealth = MaxHealth;
	bDead = false;
}

void UHealthComponent::TakeDamage(float DamageAmount)
{
	if (bDead) return;
	if (DamageAmount <= 0.f) return;

	const float OldHealth = CurrentHealth;
	SetHealth(CurrentHealth - DamageAmount);

	const float Delta = CurrentHealth - OldHealth;
	OnHealthChanged.Broadcast(CurrentHealth, Delta); //delta will be negative whilst taking damage

	if (CurrentHealth <= 0.f && !bDead)
	{
		bDead = true;
		OnDied.Broadcast();
	}
}

void UHealthComponent::Heal(float HealthAmount)
{
	if (bDead) return;
	if (HealthAmount <= 0.f) return;

	const float OldHealth = CurrentHealth;
	SetHealth(CurrentHealth + HealthAmount);

	const float Delta = CurrentHealth - OldHealth;
	OnHealthChanged.Broadcast(CurrentHealth, Delta); //delta will be positive whilst healing
}

void UHealthComponent::SetHealth(float NewHealth)
{
	CurrentHealth = FMath::Clamp(NewHealth, 0.f, MaxHealth);
}