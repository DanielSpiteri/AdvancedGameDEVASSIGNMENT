#include "PlayerHUDWidget.h"

#include "Components/ProgressBar.h"
#include "Components/Image.h"
#include "HealthComponent.h"
#include "TimerManager.h"

void UPlayerHUDWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (DamageFlash)
	{
		DamageFlash->SetOpacity(0.f);
	}
}

void UPlayerHUDWidget::BindToHealth(UHealthComponent* InHealth)
{
	Health = InHealth;
	if (!Health) return;

	Health->OnHealthChanged.AddDynamic(this, &UPlayerHUDWidget::HandleHealthChanged);

	if (HealthBar)
	{
		HealthBar->SetPercent(Health->GetHealthPercent());
	}
}

void UPlayerHUDWidget::HandleHealthChanged(float NewHealth, float Delta)
{
	if (!Health || !HealthBar) return;

	HealthBar->SetPercent(Health->GetHealthPercent());

	if (Delta < 0.f && DamageFlash)
	{
		DamageFlash->SetOpacity(0.35f);

		if (UWorld* World = GetWorld())
		{
			World->GetTimerManager().ClearTimer(DamageFlashTimer);
			World->GetTimerManager().SetTimer(
				DamageFlashTimer,
				this,
				&UPlayerHUDWidget::EndDamageFlash,
				0.12f,
				false
			);
		}
	}
}

void UPlayerHUDWidget::EndDamageFlash()
{
	if (DamageFlash)
	{
		DamageFlash->SetOpacity(0.f);
	}
}
