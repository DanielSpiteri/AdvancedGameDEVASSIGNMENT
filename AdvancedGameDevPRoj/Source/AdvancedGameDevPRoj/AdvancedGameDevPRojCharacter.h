// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "WashToolComponent.h"
#include "PlayerHUDWidget.h"
#include "AdvancedGameDevPRojCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class UInputAction;
class UInputMappingContext;
class UUserWidget;
class UWashToolComponent;
struct FInputActionValue;
class UHealthComponent;
class UPlayerHUDWidget;
class UUserWidget;



DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);


UCLASS(abstract)
class ADVANCEDGAMEDEVPROJ_API AAdvancedGameDevPRojCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: first person view (arms; seen only by self) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* FirstPersonMesh;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	/** Wash tool component (owned by character) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Washing", meta = (AllowPrivateAccess = "true"))
	UWashToolComponent* WashTool;

protected:

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* LookAction;

	/** Mouse Look Input Action */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* MouseLookAction;

	/** Input Mapping Context */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputMappingContext* DefaultMappingContext;

	/** Spray */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* IA_Spray;

	/** Menu */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* IA_Menu;

	// ===================== UI MENU =====================
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> StatusMenuClass;

	UPROPERTY()
	UUserWidget* StatusMenuInstance = nullptr;

	bool bMenuOpen = false;



public:
	AAdvancedGameDevPRojCharacter();

	UFUNCTION(BlueprintCallable)
	void ToggleMenu();


protected:

	/** Called from Input Actions for movement input */
	void MoveInput(const FInputActionValue& Value);

	/** Called from Input Actions for looking input */
	void LookInput(const FInputActionValue& Value);

	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoAim(float Yaw, float Pitch);

	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoMove(float Right, float Forward);

	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoJumpStart();

	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoJumpEnd();


	// Cars cleaned counter
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Progress")
	int32 CarsCleaned = 0;

	UFUNCTION(BlueprintCallable, Category = "Progress")
	int32 GetCarsCleaned() const { return CarsCleaned; }

	// Called by cars when they become fully clean
	UFUNCTION(BlueprintCallable, Category = "Progress")
	void AddCleanedCar() { CarsCleaned++; }


	virtual void BeginPlay() override;

	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

public:

	USkeletalMeshComponent* GetFirstPersonMesh() const { return FirstPersonMesh; }
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }
	UWashToolComponent* GetWashTool() const { return WashTool; }



private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UHealthComponent* Health;

	UPROPERTY()
	UPlayerHUDWidget* PlayerHUD;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UPlayerHUDWidget> PlayerHUDClass;



	UFUNCTION()
	void HandleDeath();


};
