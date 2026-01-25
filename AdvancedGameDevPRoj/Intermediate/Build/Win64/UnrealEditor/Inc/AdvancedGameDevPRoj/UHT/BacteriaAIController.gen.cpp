// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BacteriaAIController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBacteriaAIController() {}

// ********** Begin Cross Module References ********************************************************
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_AAdvancedGameDevPRojCharacter_NoRegister();
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_ABacteriaAIController();
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_ABacteriaAIController_NoRegister();
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_ABacteriaEnemyCharacter_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
UPackage* Z_Construct_UPackage__Script_AdvancedGameDevPRoj();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABacteriaAIController ****************************************************
void ABacteriaAIController::StaticRegisterNativesABacteriaAIController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABacteriaAIController;
UClass* ABacteriaAIController::GetPrivateStaticClass()
{
	using TClass = ABacteriaAIController;
	if (!Z_Registration_Info_UClass_ABacteriaAIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BacteriaAIController"),
			Z_Registration_Info_UClass_ABacteriaAIController.InnerSingleton,
			StaticRegisterNativesABacteriaAIController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ABacteriaAIController.InnerSingleton;
}
UClass* Z_Construct_UClass_ABacteriaAIController_NoRegister()
{
	return ABacteriaAIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABacteriaAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BacteriaAIController.h" },
		{ "ModuleRelativePath", "Public/BacteriaAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[] = {
		{ "ModuleRelativePath", "Public/BacteriaAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
		{ "ModuleRelativePath", "Public/BacteriaAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopDistance_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/BacteriaAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepathInterval_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/BacteriaAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StopDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RepathInterval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABacteriaAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABacteriaAIController_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABacteriaAIController, Enemy), Z_Construct_UClass_ABacteriaEnemyCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enemy_MetaData), NewProp_Enemy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABacteriaAIController_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABacteriaAIController, Player), Z_Construct_UClass_AAdvancedGameDevPRojCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABacteriaAIController_Statics::NewProp_StopDistance = { "StopDistance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABacteriaAIController, StopDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopDistance_MetaData), NewProp_StopDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABacteriaAIController_Statics::NewProp_RepathInterval = { "RepathInterval", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABacteriaAIController, RepathInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepathInterval_MetaData), NewProp_RepathInterval_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABacteriaAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABacteriaAIController_Statics::NewProp_Enemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABacteriaAIController_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABacteriaAIController_Statics::NewProp_StopDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABacteriaAIController_Statics::NewProp_RepathInterval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABacteriaAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABacteriaAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedGameDevPRoj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABacteriaAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABacteriaAIController_Statics::ClassParams = {
	&ABacteriaAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABacteriaAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABacteriaAIController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABacteriaAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABacteriaAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABacteriaAIController()
{
	if (!Z_Registration_Info_UClass_ABacteriaAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABacteriaAIController.OuterSingleton, Z_Construct_UClass_ABacteriaAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABacteriaAIController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABacteriaAIController);
ABacteriaAIController::~ABacteriaAIController() {}
// ********** End Class ABacteriaAIController ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_BacteriaAIController_h__Script_AdvancedGameDevPRoj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABacteriaAIController, ABacteriaAIController::StaticClass, TEXT("ABacteriaAIController"), &Z_Registration_Info_UClass_ABacteriaAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABacteriaAIController), 4267329120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_BacteriaAIController_h__Script_AdvancedGameDevPRoj_786657517(TEXT("/Script/AdvancedGameDevPRoj"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_BacteriaAIController_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_BacteriaAIController_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
