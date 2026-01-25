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

	//  ADD THIS: Wash tool component (owned by the character)
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
	class UInputAction* LookAction;

	/** Mouse Look Input Action */
	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* MouseLookAction;

	

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* IA_Spray;

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* IA_Menu;


public:
	AAdvancedGameDevPRojCharacter();

protected:

	/** Called from Input Actions for movement input */
	void MoveInput(const FInputActionValue& Value);

	/** Called from Input Actions for looking input */
	void LookInput(const FInputActionValue& Value);

	/** Handles aim inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoAim(float Yaw, float Pitch);

	/** Handles move inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoMove(float Right, float Forward);

	/** Handles jump start inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoJumpStart();

	/** Handles jump end inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoJumpEnd();


protected:

	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;


public:

	/** Returns the first person mesh **/
	USkeletalMeshComponent* GetFirstPersonMesh() const { return FirstPersonMesh; }

	/** Returns first person camera component **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	/**  Optional getter for your wash tool (handy for pickups etc.) **/
	UWashToolComponent* GetWashTool() const { return WashTool; }



private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UHealthComponent* Health;

	UPROPERTY()
	UPlayerHUDWidget* PlayerHUD;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UPlayerHUDWidget> PlayerHUDClass;

	UFUNCTION()
	void ToggleMenu();

	UFUNCTION()
	void HandleDeath();


};
