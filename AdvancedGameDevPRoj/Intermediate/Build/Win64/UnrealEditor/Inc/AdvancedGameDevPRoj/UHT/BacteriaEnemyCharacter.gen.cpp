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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABacteriaEnemyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_ABacteriaEnemyCharacter, ABacteriaEnemyCharacter::StaticClass, TEXT("ABacteriaEnemyCharacter"), &Z_Registration_Info_UClass_ABacteriaEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABacteriaEnemyCharacter), 704786466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_BacteriaEnemyCharacter_h__Script_AdvancedGameDevPRoj_1295833682(TEXT("/Script/AdvancedGameDevPRoj"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_BacteriaEnemyCharacter_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Public_BacteriaEnemyCharacter_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
