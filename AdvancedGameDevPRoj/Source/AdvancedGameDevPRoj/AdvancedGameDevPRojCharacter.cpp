// Copyright Epic Games, Inc. All Rights Reserved.

#include "AdvancedGameDevPRojCharacter.h"

#include "HealthComponent.h"
#include "PlayerHUDWidget.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "GameFramework/PlayerController.h"
#include "WashToolComponent.h"
#include "AdvancedGameDevPRoj.h"

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

	// configure the character comps
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

<<<<<<< HEAD
void AAdvancedGameDevPRojCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jump
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &AAdvancedGameDevPRojCharacter::DoJumpStart);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &AAdvancedGameDevPRojCharacter::DoJumpEnd);

		// Move
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AAdvancedGameDevPRojCharacter::MoveInput);

		// Look
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AAdvancedGameDevPRojCharacter::LookInput);
		EnhancedInputComponent->BindAction(MouseLookAction, ETriggerEvent::Triggered, this, &AAdvancedGameDevPRojCharacter::LookInput);

		// ===== Wash Tool =====
		if (WashTool && IA_Spray)
		{
			EnhancedInputComponent->BindAction(
				IA_Spray,
				ETriggerEvent::Started,
				WashTool,
				&UWashToolComponent::StartSpray
			);

			EnhancedInputComponent->BindAction(
				IA_Spray,
				ETriggerEvent::Completed,
				WashTool,
				&UWashToolComponent::StopSpray
			);
		}

		// Menu (optional)
		if (IA_Menu)
		{
			EnhancedInputComponent->BindAction(IA_Menu, ETriggerEvent::Started, this, &AAdvancedGameDevPRojCharacter::ToggleMenu);
		}
	}
}

void AAdvancedGameDevPRojCharacter::ToggleMenu()
{
	UE_LOG(LogTemp, Warning, TEXT("ToggleMenu pressed"));
}

void AAdvancedGameDevPRojCharacter::MoveInput(const FInputActionValue& Value)
{
	// get the Vector2D move axis
	FVector2D MovementVector = Value.Get<FVector2D>();

	// pass the axis values to the move input
	DoMove(MovementVector.X, MovementVector.Y);
}

void AAdvancedGameDevPRojCharacter::LookInput(const FInputActionValue& Value)
{
	// get the Vector2D look axis
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	// pass the axis values to the aim input
	DoAim(LookAxisVector.X, LookAxisVector.Y);
}

void AAdvancedGameDevPRojCharacter::DoAim(float Yaw, float Pitch)
{
	if (GetController())
	{
		// pass the rotation inputs
		AddControllerYawInput(Yaw);
		AddControllerPitchInput(Pitch);
	}
}

void AAdvancedGameDevPRojCharacter::DoMove(float Right, float Forward)
{
	if (GetController())
	{
		// pass the move inputs
		AddMovementInput(GetActorRightVector(), Right);
		AddMovementInput(GetActorForwardVector(), Forward);
	}
}

void AAdvancedGameDevPRojCharacter::DoJumpStart()
{
	// pass Jump to the character
	Jump();
}

void AAdvancedGameDevPRojCharacter::DoJumpEnd()
{
	// pass StopJumping to the character
	StopJumping();
}


=======
>>>>>>> origin/main
void AAdvancedGameDevPRojCharacter::BeginPlay()
{
	Super::BeginPlay();

<<<<<<< HEAD
	APlayerController* PC = Cast<APlayerController>(GetController());
	if (!PC)
=======
	// Add mapping context (Enhanced Input)
	if (APlayerController* PC = Cast<APlayerController>(GetController()))
>>>>>>> origin/main
	{
		UE_LOG(LogTemp, Error, TEXT("BeginPlay: PlayerController is NULL (not possessed yet?)"));
		return;
	}

	// Enhanced Input mapping (keep your existing logic)
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

	// Create widget as UUserWidget (more reliable), then cast to your derived widget
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

		// Optional: confirm if the progress bar is binding
		// (Add this log inside BindToHealth as well)
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("BeginPlay: Health is NULL - cannot bind HUD."));
	}

	if (Health)
	{
		Health->OnDied.AddDynamic(this, &AAdvancedGameDevPRojCharacter::HandleDeath);
	}
}

<<<<<<< HEAD
void AAdvancedGameDevPRojCharacter::HandleDeath()
{
	UE_LOG(LogTemp, Warning, TEXT("PLAYER DIED"));

	// Disable input
	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		DisableInput(PC);
	}

	// Stop movement
	GetCharacterMovement()->DisableMovement();

	// Optional: ragdoll or animation later

	// For now: destroy after delay OR restart level
	// Option A: Restart level
	FTimerHandle RestartTimer;
	GetWorldTimerManager().SetTimer(
		RestartTimer,
		FTimerDelegate::CreateLambda([this]()
			{
				UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()));
			}),
		2.0f,
		false
	);
}

=======
void AAdvancedGameDevPRojCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
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
	else
	{
		UE_LOG(LogAdvancedGameDevPRoj, Error, TEXT("'%s' Failed to find an Enhanced Input Component!"), *GetNameSafe(this));
	}
}

void AAdvancedGameDevPRojCharacter::MoveInput(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();
	DoMove(MovementVector.X, MovementVector.Y);
}

void AAdvancedGameDevPRojCharacter::LookInput(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();
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
>>>>>>> origin/main
