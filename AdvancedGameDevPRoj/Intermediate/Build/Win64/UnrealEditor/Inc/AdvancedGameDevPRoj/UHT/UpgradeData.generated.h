// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UpgradeData.h"

#ifdef ADVANCEDGAMEDEVPROJ_UpgradeData_generated_h
#error "UpgradeData.generated.h already included, missing '#pragma once' in UpgradeData.h"
#endif
#define ADVANCEDGAMEDEVPROJ_UpgradeData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUpgradeData *************************************************************
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_UUpgradeData_NoRegister();

#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_UpgradeData_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUpgradeData(); \
	friend struct Z_Construct_UClass_UUpgradeData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_UUpgradeData_NoRegister(); \
public: \
	DECLARE_CLASS2(UUpgradeData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedGameDevPRoj"), Z_Construct_UClass_UUpgradeData_NoRegister) \
	DECLARE_SERIALIZER(UUpgradeData)


#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_UpgradeData_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpgradeData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUpgradeData(UUpgradeData&&) = delete; \
	UUpgradeData(const UUpgradeData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpgradeData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpgradeData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpgradeData) \
	NO_API virtual ~UUpgradeData();


#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_UpgradeData_h_15_PROLOG
#define FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_UpgradeData_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_UpgradeData_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_UpgradeData_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUpgradeData;

// ********** End Class UUpgradeData ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_UpgradeData_h

// ********** Begin Enum EUpgradeType **************************************************************
#define FOREACH_ENUM_EUPGRADETYPE(op) \
	op(EUpgradeType::SoapBoost) \
	op(EUpgradeType::RangeBoost) \
	op(EUpgradeType::ChargeRefill) 

enum class EUpgradeType : uint8;
template<> struct TIsUEnumClass<EUpgradeType> { enum { Value = true }; };
template<> ADVANCEDGAMEDEVPROJ_API UEnum* StaticEnum<EUpgradeType>();
// ********** End Enum EUpgradeType ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
