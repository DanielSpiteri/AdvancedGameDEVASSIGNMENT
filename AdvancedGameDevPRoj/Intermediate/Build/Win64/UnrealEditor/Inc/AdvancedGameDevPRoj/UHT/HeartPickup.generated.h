// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HeartPickup.h"

#ifdef ADVANCEDGAMEDEVPROJ_HeartPickup_generated_h
#error "HeartPickup.generated.h already included, missing '#pragma once' in HeartPickup.h"
#endif
#define ADVANCEDGAMEDEVPROJ_HeartPickup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AHeartPickup *************************************************************
#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_HeartPickup_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlap);


ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_AHeartPickup_NoRegister();

#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_HeartPickup_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeartPickup(); \
	friend struct Z_Construct_UClass_AHeartPickup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_AHeartPickup_NoRegister(); \
public: \
	DECLARE_CLASS2(AHeartPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedGameDevPRoj"), Z_Construct_UClass_AHeartPickup_NoRegister) \
	DECLARE_SERIALIZER(AHeartPickup)


#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_HeartPickup_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHeartPickup(AHeartPickup&&) = delete; \
	AHeartPickup(const AHeartPickup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeartPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeartPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeartPickup) \
	NO_API virtual ~AHeartPickup();


#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_HeartPickup_h_10_PROLOG
#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_HeartPickup_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_HeartPickup_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_HeartPickup_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_HeartPickup_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHeartPickup;

// ********** End Class AHeartPickup ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_HeartPickup_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
