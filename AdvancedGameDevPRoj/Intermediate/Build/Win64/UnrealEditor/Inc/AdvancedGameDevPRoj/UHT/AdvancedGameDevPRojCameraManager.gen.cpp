// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedGameDevPRojCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAdvancedGameDevPRojCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_AAdvancedGameDevPRojCameraManager();
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_AAdvancedGameDevPRojCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
UPackage* Z_Construct_UPackage__Script_AdvancedGameDevPRoj();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAdvancedGameDevPRojCameraManager ****************************************
void AAdvancedGameDevPRojCameraManager::StaticRegisterNativesAAdvancedGameDevPRojCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAdvancedGameDevPRojCameraManager;
UClass* AAdvancedGameDevPRojCameraManager::GetPrivateStaticClass()
{
	using TClass = AAdvancedGameDevPRojCameraManager;
	if (!Z_Registration_Info_UClass_AAdvancedGameDevPRojCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AdvancedGameDevPRojCameraManager"),
			Z_Registration_Info_UClass_AAdvancedGameDevPRojCameraManager.InnerSingleton,
			StaticRegisterNativesAAdvancedGameDevPRojCameraManager,
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
	return Z_Registration_Info_UClass_AAdvancedGameDevPRojCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AAdvancedGameDevPRojCameraManager_NoRegister()
{
	return AAdvancedGameDevPRojCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAdvancedGameDevPRojCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "AdvancedGameDevPRojCameraManager.h" },
		{ "ModuleRelativePath", "AdvancedGameDevPRojCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvancedGameDevPRojCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAdvancedGameDevPRojCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedGameDevPRoj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedGameDevPRojCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAdvancedGameDevPRojCameraManager_Statics::ClassParams = {
	&AAdvancedGameDevPRojCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedGameDevPRojCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AAdvancedGameDevPRojCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAdvancedGameDevPRojCameraManager()
{
	if (!Z_Registration_Info_UClass_AAdvancedGameDevPRojCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAdvancedGameDevPRojCameraManager.OuterSingleton, Z_Construct_UClass_AAdvancedGameDevPRojCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAdvancedGameDevPRojCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvancedGameDevPRojCameraManager);
AAdvancedGameDevPRojCameraManager::~AAdvancedGameDevPRojCameraManager() {}
// ********** End Class AAdvancedGameDevPRojCameraManager ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_AdvancedGameDevPRojCameraManager_h__Script_AdvancedGameDevPRoj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAdvancedGameDevPRojCameraManager, AAdvancedGameDevPRojCameraManager::StaticClass, TEXT("AAdvancedGameDevPRojCameraManager"), &Z_Registration_Info_UClass_AAdvancedGameDevPRojCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAdvancedGameDevPRojCameraManager), 1503149142U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_AdvancedGameDevPRojCameraManager_h__Script_AdvancedGameDevPRoj_3520871732(TEXT("/Script/AdvancedGameDevPRoj"),
	Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_AdvancedGameDevPRojCameraManager_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_AdvancedGameDevPRojCameraManager_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
