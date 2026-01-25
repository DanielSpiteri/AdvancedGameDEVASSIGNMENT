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

	UE_LOG(LogTemp, Warning, TEXT("[%s] Health Init: Max=%.1f Current=%.1f"), *GetOwner()->GetName(), MaxHealth, CurrentHealth);
}

void UHealthComponent::TakeDamage(float DamageAmount)
{
	if (bDead) return;
	if (DamageAmount <= 0.f) return;

	const float OldHealth = CurrentHealth;
	SetHealth(CurrentHealth - DamageAmount);

	const float Delta = CurrentHealth - OldHealth;
	OnHealthChanged.Broadcast(CurrentHealth, Delta); //delta will be negative whilst taking damage

	UE_LOG(LogTemp, Warning, TEXT("[%s] HP: %.1f / %.1f (Delta: %.1f)"),
		*GetOwner()->GetName(), CurrentHealth, MaxHealth, Delta);

	if (CurrentHealth <= 0.f && !bDead)
	{
		bDead = true;

		UE_LOG(LogTemp, Warning, TEXT("[%s] DIED - broadcasting OnDied"), *GetOwner()->GetName());

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

void UHealthComponent::IncreaseMaxHealth(float Amount)
{
	if (bDead) return;
	if (Amount <= 0.f) return;

	MaxHealth += Amount;

	OnHealthChanged.Broadcast(CurrentHealth, 0.f); //no change to current health, just notify listeners
}

void UHealthComponent::AddHealth(float Amount)
{
	if (bDead) return;
	if (Amount <= 0.f) return;
	
	const float OldHealth = CurrentHealth;
	SetHealth(CurrentHealth + Amount);

	const float Delta = CurrentHealth - OldHealth; 
	OnHealthChanged.Broadcast(CurrentHealth, Delta); //delta will be positive meaning health increased
}