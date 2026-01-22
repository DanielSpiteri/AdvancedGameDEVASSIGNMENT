// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HealthComponent.h"

#ifdef ADVANCEDGAMEDEVPROJ_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define ADVANCEDGAMEDEVPROJ_HealthComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnHealthChanged ******************************************************
#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_HealthComponent_h_8_DELEGATE \
ADVANCEDGAMEDEVPROJ_API void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float NewHealth, float Delta);


// ********** End Delegate FOnHealthChanged ********************************************************

// ********** Begin Delegate FOnDied ***************************************************************
#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_HealthComponent_h_10_DELEGATE \
ADVANCEDGAMEDEVPROJ_API void FOnDied_DelegateWrapper(const FMulticastScriptDelegate& OnDied);


// ********** End Delegate FOnDied *****************************************************************

// ********** Begin Class UHealthComponent *********************************************************
#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_HealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execTakeDamage);


ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();

#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_HealthComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedGameDevPRoj"), Z_Construct_UClass_UHealthComponent_NoRegister) \
	DECLARE_SERIALIZER(UHealthComponent)


#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_HealthComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHealthComponent(UHealthComponent&&) = delete; \
	UHealthComponent(const UHealthComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent) \
	NO_API virtual ~UHealthComponent();


#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_HealthComponent_h_12_PROLOG
#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_HealthComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_HealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_HealthComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_HealthComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHealthComponent;

// ********** End Class UHealthComponent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_HealthComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
