// Copyright Epic Games, Inc. All Rights Reserved.

#include "AdvancedGameDevPRojCharacter.h"

#include "AdvancedGameDevPRoj.h"
#include "HealthComponent.h"
#include "PlayerHUDWidget.h"
#include "WashToolComponent.h"
#include "StatusMenuWidget.h"
#include "Animation/AnimInstance.h"
#include "Blueprint/UserWidget.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"

AAdvancedGameDevPRojCharacter::AAdvancedGameDevPRojCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// Create the first person mesh that will be viewed only by this character's owner
	FirstPersonMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("First Person Mesh"));
	FirstPersonMesh->SetupAttachment(GetMesh());
	FirstPersonMesh->SetOnlyOwnerSee(true);
	FirstPersonMesh->FirstPersonPrimitiveType = EFirstPersonPrimitiveType::FirstPerson;
	FirstPersonMesh->SetCollisionProfileName(FName("NoCollision"));

	// Create the Camera Component
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("First Person Camera"));
	FirstPersonCameraComponent->SetupAttachment(FirstPersonMesh, FName("head"));
	FirstPersonCameraComponent->SetRelativeLocationAndRotation(
		FVector(-2.8f, 5.89f, 0.0f),
		FRotator(0.0f, 90.0f, -90.0f)
	);
	FirstPersonCameraComponent->bUsePawnControlRotation = true;
	FirstPersonCameraComponent->bEnableFirstPersonFieldOfView = true;
	FirstPersonCameraComponent->bEnableFirstPersonScale = true;
	FirstPersonCameraComponent->FirstPersonFieldOfView = 70.0f;
	FirstPersonCameraComponent->FirstPersonScale = 0.6f;

	// Create wash tool component
	WashTool = CreateDefaultSubobject<UWashToolComponent>(TEXT("WashTool"));

	// Configure the character comps
	GetMesh()->SetOwnerNoSee(true);
	GetMesh()->FirstPersonPrimitiveType = EFirstPersonPrimitiveType::WorldSpaceRepresentation;
	GetCapsuleComponent()->SetCapsuleSize(34.0f, 96.0f);

	// Configure character movement
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;
	GetCharacterMovement()->AirControl = 0.5f;

	Health = CreateDefaultSubobject<UHealthComponent>(TEXT("Health"));

	static ConstructorHelpers::FClassFinder<UPlayerHUDWidget> HudBPClass(TEXT("/Game/UI/WBP_PlayerHUD"));
	if (HudBPClass.Succeeded())
	{
		PlayerHUDClass = HudBPClass.Class;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Could not find WBP_PlayerHUD at /Game/UI/WBP_PlayerHUD"));
	}
}

void AAdvancedGameDevPRojCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Get player controller (must exist for mapping + widgets)
	APlayerController* PC = Cast<APlayerController>(GetController());
	if (!PC)
	{
		UE_LOG(LogTemp, Error, TEXT("BeginPlay: PlayerController is NULL (not possessed yet?)"));
		return;
	}

	// Add mapping context (Enhanced Input)
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
	{
		if (DefaultMappingContext)
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	// HUD debug
	UE_LOG(LogTemp, Warning, TEXT("HUDClass: %s"), PlayerHUDClass ? *PlayerHUDClass->GetName() : TEXT("NULL"));
	UE_LOG(LogTemp, Warning, TEXT("Health: %s"), Health ? TEXT("VALID") : TEXT("NULL"));

	if (!PlayerHUDClass)
	{
		UE_LOG(LogTemp, Error, TEXT("BeginPlay: PlayerHUDClass is NULL - HUD will not spawn."));
		return;
	}

	// Create widget as UUserWidget, then cast to your derived widget
	UUserWidget* RawWidget = CreateWidget<UUserWidget>(PC, PlayerHUDClass);
	if (!RawWidget)
	{
		UE_LOG(LogTemp, Error, TEXT("BeginPlay: CreateWidget failed."));
		return;
	}

	PlayerHUD = Cast<UPlayerHUDWidget>(RawWidget);
	if (!PlayerHUD)
	{
		UE_LOG(LogTemp, Error, TEXT("BeginPlay: Cast to UPlayerHUDWidget FAILED. "
			"Your WBP_PlayerHUD Parent Class must be PlayerHUDWidget (C++), not UserWidget."));
		return;
	}

	PlayerHUD->AddToViewport(0);
	UE_LOG(LogTemp, Warning, TEXT("HUD added to viewport"));

	if (Health)
	{
		PlayerHUD->BindToHealth(Health);
		Health->OnDied.AddDynamic(this, &AAdvancedGameDevPRojCharacter::HandleDeath);
		Health->OnHealthChanged.AddDynamic(this, &AAdvancedGameDevPRojCharacter::OnPlayerHealthChanged);

	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("BeginPlay: Health is NULL - cannot bind HUD."));
	}
}

void AAdvancedGameDevPRojCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (!EnhancedInputComponent)
	{
		UE_LOG(LogAdvancedGameDevPRoj, Error, TEXT("'%s' Failed to find an Enhanced Input Component!"), *GetNameSafe(this));
		return;
	}

	// Jump
	if (JumpAction)
	{
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &AAdvancedGameDevPRojCharacter::DoJumpStart);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &AAdvancedGameDevPRojCharacter::DoJumpEnd);
	}

	// Move
	if (MoveAction)
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AAdvancedGameDevPRojCharacter::MoveInput);
	}

	// Look
	if (LookAction)
	{
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AAdvancedGameDevPRojCharacter::LookInput);
	}
	if (MouseLookAction)
	{
		EnhancedInputComponent->BindAction(MouseLookAction, ETriggerEvent::Triggered, this, &AAdvancedGameDevPRojCharacter::LookInput);
	}

	// Spray -> wash tool
	if (WashTool && IA_Spray)
	{
		EnhancedInputComponent->BindAction(IA_Spray, ETriggerEvent::Started, WashTool, &UWashToolComponent::StartSpray);
		EnhancedInputComponent->BindAction(IA_Spray, ETriggerEvent::Completed, WashTool, &UWashToolComponent::StopSpray);
	}

	// Menu toggle
	if (IA_Menu)
	{
		EnhancedInputComponent->BindAction(IA_Menu, ETriggerEvent::Started, this, &AAdvancedGameDevPRojCharacter::ToggleMenu);
	}
}

void AAdvancedGameDevPRojCharacter::MoveInput(const FInputActionValue& Value)
{
	const FVector2D MovementVector = Value.Get<FVector2D>();
	DoMove(MovementVector.X, MovementVector.Y);
}

void AAdvancedGameDevPRojCharacter::LookInput(const FInputActionValue& Value)
{
	const FVector2D LookAxisVector = Value.Get<FVector2D>();
	DoAim(LookAxisVector.X, LookAxisVector.Y);
}

void AAdvancedGameDevPRojCharacter::DoAim(float Yaw, float Pitch)
{
	if (GetController())
	{
		AddControllerYawInput(Yaw);
		AddControllerPitchInput(Pitch);
	}
}

void AAdvancedGameDevPRojCharacter::DoMove(float Right, float Forward)
{
	if (GetController())
	{
		AddMovementInput(GetActorRightVector(), Right);
		AddMovementInput(GetActorForwardVector(), Forward);
	}
}

void AAdvancedGameDevPRojCharacter::DoJumpStart()
{
	Jump();
}

void AAdvancedGameDevPRojCharacter::DoJumpEnd()
{
	StopJumping();
}

void AAdvancedGameDevPRojCharacter::ToggleMenu()
{
	UE_LOG(LogTemp, Warning, TEXT("ToggleMenu pressed"));

	APlayerController* PC = Cast<APlayerController>(GetController());
	if (!PC) return;

	// Create widget once
	if (!StatusMenuInstance && StatusMenuClass)
	{
		StatusMenuInstance = CreateWidget<UUserWidget>(PC, StatusMenuClass);
	}

	if (!StatusMenuInstance) return;

	bMenuOpen = !bMenuOpen;

	if (bMenuOpen)
	{
		StatusMenuInstance->AddToViewport();

		FInputModeGameAndUI Mode;
		Mode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
		PC->SetInputMode(Mode);
		PC->bShowMouseCursor = true;
	}
	else
	{
		StatusMenuInstance->RemoveFromParent();

		FInputModeGameOnly Mode;
		PC->SetInputMode(Mode);
		PC->bShowMouseCursor = false;
	}
}

void AAdvancedGameDevPRojCharacter::HandleDeath()
{
	UE_LOG(LogTemp, Warning, TEXT("PLAYER DIED"));

	// Disable input
	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		DisableInput(PC);
	}

	// Stop movement
	if (GetCharacterMovement())
	{
		GetCharacterMovement()->DisableMovement();
	}

	// Restart level after 2 seconds
	FTimerHandle RestartTimer;
	GetWorldTimerManager().SetTimer(
		RestartTimer,
		FTimerDelegate::CreateLambda([this]()
			{
				if (UWorld* World = GetWorld())
				{
					UGameplayStatics::OpenLevel(this, FName(*World->GetName()));
				}
			}),
		2.0f,
		false
	);
}

void AAdvancedGameDevPRojCharacter::OnPlayerHealthChanged(float NewHealth, float Delta)
{
	// Update the UI if the menu exists
	UpdatePlayerHealthUI(NewHealth, 100.f);
}

void AAdvancedGameDevPRojCharacter::UpdateEnemyHealthUI(float Current, float Max)
{
	if (!StatusMenuInstance) return;

	if (UStatusMenuWidget* Menu = Cast<UStatusMenuWidget>(StatusMenuInstance))
	{
		Menu->SetEnemyHealth(Current, Max);
	}
}

void AAdvancedGameDevPRojCharacter::UpdatePlayerHealthUI(float Current, float Max)
{
	if (!StatusMenuInstance) return;

	if (UStatusMenuWidget* Menu = Cast<UStatusMenuWidget>(StatusMenuInstance))
	{
		Menu->SetPlayerHealth(Current, Max);
	}
}
