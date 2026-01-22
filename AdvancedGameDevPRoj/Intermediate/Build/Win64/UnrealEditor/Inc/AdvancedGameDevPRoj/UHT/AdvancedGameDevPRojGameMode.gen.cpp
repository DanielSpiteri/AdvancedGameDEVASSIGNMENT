// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedGameDevPRojGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAdvancedGameDevPRojGameMode() {}

// ********** Begin Cross Module References ********************************************************
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_AAdvancedGameDevPRojGameMode();
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_AAdvancedGameDevPRojGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_AdvancedGameDevPRoj();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAdvancedGameDevPRojGameMode *********************************************
void AAdvancedGameDevPRojGameMode::StaticRegisterNativesAAdvancedGameDevPRojGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAdvancedGameDevPRojGameMode;
UClass* AAdvancedGameDevPRojGameMode::GetPrivateStaticClass()
{
	using TClass = AAdvancedGameDevPRojGameMode;
	if (!Z_Registration_Info_UClass_AAdvancedGameDevPRojGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AdvancedGameDevPRojGameMode"),
			Z_Registration_Info_UClass_AAdvancedGameDevPRojGameMode.InnerSingleton,
			StaticRegisterNativesAAdvancedGameDevPRojGameMode,
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
	return Z_Registration_Info_UClass_AAdvancedGameDevPRojGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AAdvancedGameDevPRojGameMode_NoRegister()
{
	return AAdvancedGameDevPRojGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAdvancedGameDevPRojGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AdvancedGameDevPRojGameMode.h" },
		{ "ModuleRelativePath", "AdvancedGameDevPRojGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvancedGameDevPRojGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAdvancedGameDevPRojGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedGameDevPRoj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedGameDevPRojGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAdvancedGameDevPRojGameMode_Statics::ClassParams = {
	&AAdvancedGameDevPRojGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedGameDevPRojGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAdvancedGameDevPRojGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAdvancedGameDevPRojGameMode()
{
	if (!Z_Registration_Info_UClass_AAdvancedGameDevPRojGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAdvancedGameDevPRojGameMode.OuterSingleton, Z_Construct_UClass_AAdvancedGameDevPRojGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAdvancedGameDevPRojGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvancedGameDevPRojGameMode);
AAdvancedGameDevPRojGameMode::~AAdvancedGameDevPRojGameMode() {}
// ********** End Class AAdvancedGameDevPRojGameMode ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_AdvancedGameDevPRojGameMode_h__Script_AdvancedGameDevPRoj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAdvancedGameDevPRojGameMode, AAdvancedGameDevPRojGameMode::StaticClass, TEXT("AAdvancedGameDevPRojGameMode"), &Z_Registration_Info_UClass_AAdvancedGameDevPRojGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAdvancedGameDevPRojGameMode), 3350605732U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_AdvancedGameDevPRojGameMode_h__Script_AdvancedGameDevPRoj_165216102(TEXT("/Script/AdvancedGameDevPRoj"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_AdvancedGameDevPRojGameMode_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_AdvancedGameDevPRojGameMode_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
