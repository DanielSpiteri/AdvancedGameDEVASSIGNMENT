// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BacteriaEnemyCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBacteriaEnemyCharacter() {}

// ********** Begin Cross Module References ********************************************************
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_ABacteriaEnemyCharacter();
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_ABacteriaEnemyCharacter_NoRegister();
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_AdvancedGameDevPRoj();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABacteriaEnemyCharacter **************************************************
void ABacteriaEnemyCharacter::StaticRegisterNativesABacteriaEnemyCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABacteriaEnemyCharacter;
UClass* ABacteriaEnemyCharacter::GetPrivateStaticClass()
{
	using TClass = ABacteriaEnemyCharacter;
	if (!Z_Registration_Info_UClass_ABacteriaEnemyCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BacteriaEnemyCharacter"),
			Z_Registration_Info_UClass_ABacteriaEnemyCharacter.InnerSingleton,
			StaticRegisterNativesABacteriaEnemyCharacter,
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
	return Z_Registration_Info_UClass_ABacteriaEnemyCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ABacteriaEnemyCharacter_NoRegister()
{
	return ABacteriaEnemyCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABacteriaEnemyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BacteriaEnemyCharacter.h" },
		{ "ModuleRelativePath", "Public/BacteriaEnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//enemy health \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BacteriaEnemyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "enemy health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//combat settings\n" },
#endif
		{ "ModuleRelativePath", "Public/BacteriaEnemyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "combat settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/BacteriaEnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackCooldown_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/BacteriaEnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeartPickupClass_MetaData[] = {
		{ "Category", "Drops" },
		{ "ModuleRelativePath", "Public/BacteriaEnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeartDropChance_MetaData[] = {
		{ "Category", "Drops" },
		{ "ModuleRelativePath", "Public/BacteriaEnemyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackCooldown;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HeartPickupClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeartDropChance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABacteriaEnemyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABacteriaEnemyCharacter, Health), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABacteriaEnemyCharacter, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABacteriaEnemyCharacter, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::NewProp_AttackCooldown = { "AttackCooldown", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABacteriaEnemyCharacter, AttackCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackCooldown_MetaData), NewProp_AttackCooldown_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::NewProp_HeartPickupClass = { "HeartPickupClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABacteriaEnemyCharacter, HeartPickupClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeartPickupClass_MetaData), NewProp_HeartPickupClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::NewProp_HeartDropChance = { "HeartDropChance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABacteriaEnemyCharacter, HeartDropChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeartDropChance_MetaData), NewProp_HeartDropChance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::NewProp_AttackCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::NewProp_HeartPickupClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::NewProp_HeartDropChance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedGameDevPRoj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::ClassParams = {
	&ABacteriaEnemyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABacteriaEnemyCharacter()
{
	if (!Z_Registration_Info_UClass_ABacteriaEnemyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABacteriaEnemyCharacter.OuterSingleton, Z_Construct_UClass_ABacteriaEnemyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABacteriaEnemyCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABacteriaEnemyCharacter);
ABacteriaEnemyCharacter::~ABacteriaEnemyCharacter() {}
// ********** End Class ABacteriaEnemyCharacter ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_BacteriaEnemyCharacter_h__Script_AdvancedGameDevPRoj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABacteriaEnemyCharacter, ABacteriaEnemyCharacter::StaticClass, TEXT("ABacteriaEnemyCharacter"), &Z_Registration_Info_UClass_ABacteriaEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABacteriaEnemyCharacter), 2982748394U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_BacteriaEnemyCharacter_h__Script_AdvancedGameDevPRoj_1944048615(TEXT("/Script/AdvancedGameDevPRoj"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_BacteriaEnemyCharacter_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_BacteriaEnemyCharacter_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
