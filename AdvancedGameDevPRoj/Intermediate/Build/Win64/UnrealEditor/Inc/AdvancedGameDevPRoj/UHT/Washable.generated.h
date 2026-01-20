// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Washable.h"

#ifdef ADVANCEDGAMEDEVPROJ_Washable_generated_h
#error "Washable.generated.h already included, missing '#pragma once' in Washable.h"
#endif
#define ADVANCEDGAMEDEVPROJ_Washable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UWashable ************************************************************
#define FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Washable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsFullyClean_Implementation() const { return false; }; \
	virtual float GetCleanPercent_Implementation() const { return 0; }; \
	virtual void ApplyWash_Implementation(float Amount) {}; \
	DECLARE_FUNCTION(execIsFullyClean); \
	DECLARE_FUNCTION(execGetCleanPercent); \
	DECLARE_FUNCTION(execApplyWash);


#define FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Washable_h_10_CALLBACK_WRAPPERS
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_UWashable_NoRegister();

#define FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Washable_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWashable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWashable(UWashable&&) = delete; \
	UWashable(const UWashable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWashable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWashable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWashable) \
	virtual ~UWashable() = default;


#define FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Washable_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWashable(); \
	friend struct Z_Construct_UClass_UWashable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_UWashable_NoRegister(); \
public: \
	DECLARE_CLASS2(UWashable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AdvancedGameDevPRoj"), Z_Construct_UClass_UWashable_NoRegister) \
	DECLARE_SERIALIZER(UWashable)


#define FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Washable_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Washable_h_10_GENERATED_UINTERFACE_BODY() \
	FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Washable_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Washable_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IWashable() {} \
public: \
	typedef UWashable UClassType; \
	typedef IWashable ThisClass; \
	static void Execute_ApplyWash(UObject* O, float Amount); \
	static float Execute_GetCleanPercent(const UObject* O); \
	static bool Execute_IsFullyClean(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Washable_h_7_PROLOG
#define FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Washable_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Washable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Washable_h_10_CALLBACK_WRAPPERS \
	FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Washable_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWashable;

// ********** End Interface UWashable **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Washable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
