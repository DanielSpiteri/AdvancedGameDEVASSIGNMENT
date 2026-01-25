// Copyright Epic Games, Inc. All Rights Reserved.

#include "AdvancedGameDevPRojPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "AdvancedGameDevPRojCameraManager.h"
#include "Blueprint/UserWidget.h"
#include "AdvancedGameDevPRoj.h"
#include "Widgets/Input/SVirtualJoystick.h"
#include "Blueprint/WidgetBlueprintLibrary.h" // add at top of .cpp
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"



AAdvancedGameDevPRojPlayerController::AAdvancedGameDevPRojPlayerController()
{
	// set the player camera manager class
	//PlayerCameraManagerClass = AAdvancedGameDevPRojCameraManager::StaticClass();

	bShowMouseCursor = false;
	bEnableClickEvents = false;
	bEnableMouseOverEvents = false;
}

#include "Blueprint/WidgetBlueprintLibrary.h"

void AAdvancedGameDevPRojPlayerController::BeginPlay()
{
	Super::BeginPlay();

	const FString MapName = GetWorld() ? GetWorld()->GetMapName() : FString();

	if (MapName.Contains(TEXT("StartMenuMap")))
	{
		ShowStartMenu();
	}
	else
	{
		HideStartMenu();

		// EXTRA: force gameplay input + focus (prevents stuck UI mode)
		UWidgetBlueprintLibrary::SetInputMode_GameOnly(this);
		UWidgetBlueprintLibrary::SetFocusToGameViewport();
		bShowMouseCursor = false;
		bEnableClickEvents = false;
		bEnableMouseOverEvents = false;

		ResetIgnoreLookInput();
		ResetIgnoreMoveInput();
	}

	UE_LOG(LogTemp, Warning, TEXT("PlayerController: %s"), *GetClass()->GetName());


	//const FString MapName = GetWorld() ? GetWorld()->GetMapName() : FString();

	if (MapName.Contains(TEXT("StartMenuMap")))
	{
		ShowStartMenu();
		return;
	}

	if (MapName.Contains(TEXT("GameOverMap")))
	{
		ShowGameOver();
		return;
	}

	// Gameplay maps (Level2_OutdoorWash, Level1, etc.)
	HideStartMenu();

	// If you have a HUD widget, it's fine to add it,
	// but we MUST switch back to game input afterwards.
	UWidgetBlueprintLibrary::SetInputMode_GameOnly(this);
	UWidgetBlueprintLibrary::SetFocusToGameViewport();

	bShowMouseCursor = false;
	bEnableClickEvents = false;
	bEnableMouseOverEvents = false;

}




void AAdvancedGameDevPRojPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(InputComponent))
	{
		if (LookAction)
		{
			EIC->BindAction(LookAction, ETriggerEvent::Triggered, this, &AAdvancedGameDevPRojPlayerController::Look);
		}
	}


	// only add IMCs for local player controllers
	if (IsLocalPlayerController())
	{
		// Add Input Mapping Context
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
		{
			for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
			{
				Subsystem->AddMappingContext(CurrentContext, 0);
			}

			// only add these IMCs if we're not using mobile touch input
			if (!SVirtualJoystick::ShouldDisplayTouchInterface())
			{
				for (UInputMappingContext* CurrentContext : MobileExcludedMappingContexts)
				{
					Subsystem->AddMappingContext(CurrentContext, 0);
				}
			}
		}
	}
}

#include "Blueprint/WidgetBlueprintLibrary.h"

void AAdvancedGameDevPRojPlayerController::ShowStartMenu()
{
	if (StartMenuWidgetClass && !StartMenuWidget)
	{
		StartMenuWidget = CreateWidget<UUserWidget>(this, StartMenuWidgetClass);
	}

	if (StartMenuWidget && !StartMenuWidget->IsInViewport())
	{
		StartMenuWidget->AddToViewport(999);
	}

	// Lock game input, keep UI active
	SetIgnoreMoveInput(true);
	SetIgnoreLookInput(true);

	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;

	// Give focus to UI (prevents weird capture issues)
	UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(this, StartMenuWidget, EMouseLockMode::DoNotLock);
}


void AAdvancedGameDevPRojPlayerController::HideStartMenu()
{
	if (StartMenuWidget)
	{
		StartMenuWidget->RemoveFromParent();
	}

	// Clear any stacked ignore flags
	ResetIgnoreMoveInput();
	ResetIgnoreLookInput();

	// Turn off cursor + UI mouse events
	bShowMouseCursor = false;
	bEnableClickEvents = false;
	bEnableMouseOverEvents = false;

	// Hard switch back to gameplay input + viewport focus
	UWidgetBlueprintLibrary::SetInputMode_GameOnly(this);
	UWidgetBlueprintLibrary::SetFocusToGameViewport();
}

void AAdvancedGameDevPRojPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);


	float DX = 0, DY = 0;
	GetInputMouseDelta(DX, DY);

	if (DX != 0.f || DY != 0.f)
	{
		FRotator R = GetControlRotation();
		R.Yaw += DX;
		R.Pitch += DY;

		SetControlRotation(R);
	}


}


void AAdvancedGameDevPRojPlayerController::Look(const FInputActionValue& Value)
{
	const FVector2D Axis = Value.Get<FVector2D>();

	AddYawInput(Axis.X);
	AddPitchInput(Axis.Y);
}



void AAdvancedGameDevPRojPlayerController::ShowGameOver()
{
	if (GameOverWidgetClass && !GameOverWidget)
	{
		GameOverWidget = CreateWidget<UUserWidget>(this, GameOverWidgetClass);
	}

	if (GameOverWidget && !GameOverWidget->IsInViewport())
	{
		GameOverWidget->AddToViewport(999);
	}

	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;

	// UI only for game over
	UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(this, GameOverWidget, EMouseLockMode::DoNotLock);
}
