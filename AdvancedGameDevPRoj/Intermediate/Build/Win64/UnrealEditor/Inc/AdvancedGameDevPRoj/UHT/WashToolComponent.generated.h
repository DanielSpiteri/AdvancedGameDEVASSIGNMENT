// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WashToolComponent.h"

#ifdef ADVANCEDGAMEDEVPROJ_WashToolComponent_generated_h
#error "WashToolComponent.generated.h already included, missing '#pragma once' in WashToolComponent.h"
#endif
#define ADVANCEDGAMEDEVPROJ_WashToolComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UUpgradeData;
struct FActiveUpgrade;

// ********** Begin ScriptStruct FActiveUpgrade ****************************************************
#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActiveUpgrade_Statics; \
	ADVANCEDGAMEDEVPROJ_API static class UScriptStruct* StaticStruct();


struct FActiveUpgrade;
// ********** End ScriptStruct FActiveUpgrade ******************************************************

// ********** Begin Class UWashToolComponent *******************************************************
#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActiveUpgrades); \
	DECLARE_FUNCTION(execGetChargePercent); \
	DECLARE_FUNCTION(execGetCleanPercentLookingAt); \
	DECLARE_FUNCTION(execApplyUpgrade); \
	DECLARE_FUNCTION(execStopSpray); \
	DECLARE_FUNCTION(execStartSpray);


ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_UWashToolComponent_NoRegister();

#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWashToolComponent(); \
	friend struct Z_Construct_UClass_UWashToolComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_UWashToolComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWashToolComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedGameDevPRoj"), Z_Construct_UClass_UWashToolComponent_NoRegister) \
	DECLARE_SERIALIZER(UWashToolComponent)


#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWashToolComponent(UWashToolComponent&&) = delete; \
	UWashToolComponent(const UWashToolComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWashToolComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWashToolComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWashToolComponent) \
	NO_API virtual ~UWashToolComponent();


#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h_20_PROLOG
#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWashToolComponent;

// ********** End Class UWashToolComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
