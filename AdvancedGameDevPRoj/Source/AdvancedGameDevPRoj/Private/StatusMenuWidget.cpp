#include "StatusMenuWidget.h"
#include "Components/TextBlock.h"

void UStatusMenuWidget::SetPlayerHealth(float Current, float Max)
{
	if (!PlayerHealthText) return;

	PlayerHealthText->SetText(FText::FromString(
		FString::Printf(TEXT("Player HP: %.0f / %.0f"), Current, Max)
	));
}

void UStatusMenuWidget::SetEnemyHealth(float Current, float Max)
{
	if (!EnemyHealthText) return;

	EnemyHealthText->SetText(FText::FromString(
		FString::Printf(TEXT("Enemy HP: %.0f / %.0f"), Current, Max)
	));
}
