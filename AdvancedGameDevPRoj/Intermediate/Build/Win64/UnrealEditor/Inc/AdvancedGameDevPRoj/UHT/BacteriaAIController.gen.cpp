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
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_ABacteriaAIController();
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_ABacteriaAIController_NoRegister();
ADVANCEDGAMEDEVPROJ_API UEnum* Z_Construct_UEnum_AdvancedGameDevPRoj_EBacteriaAIState();
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
UPackage* Z_Construct_UPackage__Script_AdvancedGameDevPRoj();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EBacteriaAIState **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBacteriaAIState;
static UEnum* EBacteriaAIState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBacteriaAIState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBacteriaAIState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedGameDevPRoj_EBacteriaAIState, (UObject*)Z_Construct_UPackage__Script_AdvancedGameDevPRoj(), TEXT("EBacteriaAIState"));
	}
	return Z_Registration_Info_UEnum_EBacteriaAIState.OuterSingleton;
}
template<> ADVANCEDGAMEDEVPROJ_API UEnum* StaticEnum<EBacteriaAIState>()
{
	return EBacteriaAIState_StaticEnum();
}
struct Z_Construct_UEnum_AdvancedGameDevPRoj_EBacteriaAIState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.Name", "EBacteriaAIState::Attack" },
		{ "Chase.Name", "EBacteriaAIState::Chase" },
		{ "ModuleRelativePath", "Public/BacteriaAIController.h" },
		{ "Patrol.Name", "EBacteriaAIState::Patrol" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBacteriaAIState::Patrol", (int64)EBacteriaAIState::Patrol },
		{ "EBacteriaAIState::Chase", (int64)EBacteriaAIState::Chase },
		{ "EBacteriaAIState::Attack", (int64)EBacteriaAIState::Attack },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedGameDevPRoj_EBacteriaAIState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AdvancedGameDevPRoj,
	nullptr,
	"EBacteriaAIState",
	"EBacteriaAIState",
	Z_Construct_UEnum_AdvancedGameDevPRoj_EBacteriaAIState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedGameDevPRoj_EBacteriaAIState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedGameDevPRoj_EBacteriaAIState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AdvancedGameDevPRoj_EBacteriaAIState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AdvancedGameDevPRoj_EBacteriaAIState()
{
	if (!Z_Registration_Info_UEnum_EBacteriaAIState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBacteriaAIState.InnerSingleton, Z_Construct_UEnum_AdvancedGameDevPRoj_EBacteriaAIState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBacteriaAIState.InnerSingleton;
}
// ********** End Enum EBacteriaAIState ************************************************************

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/BacteriaAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChaseRange_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/BacteriaAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/BacteriaAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveUpdateInterval_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/BacteriaAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PatrolRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChaseRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveUpdateInterval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABacteriaAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABacteriaAIController_Statics::NewProp_PatrolRadius = { "PatrolRadius", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABacteriaAIController, PatrolRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolRadius_MetaData), NewProp_PatrolRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABacteriaAIController_Statics::NewProp_ChaseRange = { "ChaseRange", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABacteriaAIController, ChaseRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChaseRange_MetaData), NewProp_ChaseRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABacteriaAIController_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABacteriaAIController, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABacteriaAIController_Statics::NewProp_MoveUpdateInterval = { "MoveUpdateInterval", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABacteriaAIController, MoveUpdateInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveUpdateInterval_MetaData), NewProp_MoveUpdateInterval_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABacteriaAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABacteriaAIController_Statics::NewProp_PatrolRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABacteriaAIController_Statics::NewProp_ChaseRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABacteriaAIController_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABacteriaAIController_Statics::NewProp_MoveUpdateInterval,
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBacteriaAIState_StaticEnum, TEXT("EBacteriaAIState"), &Z_Registration_Info_UEnum_EBacteriaAIState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4096409598U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABacteriaAIController, ABacteriaAIController::StaticClass, TEXT("ABacteriaAIController"), &Z_Registration_Info_UClass_ABacteriaAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABacteriaAIController), 1249495826U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_BacteriaAIController_h__Script_AdvancedGameDevPRoj_3519250250(TEXT("/Script/AdvancedGameDevPRoj"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_BacteriaAIController_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_BacteriaAIController_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_BacteriaAIController_h__Script_AdvancedGameDevPRoj_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_BacteriaAIController_h__Script_AdvancedGameDevPRoj_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
