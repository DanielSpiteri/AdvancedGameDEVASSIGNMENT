// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedGameDevPRojPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAdvancedGameDevPRojPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_AAdvancedGameDevPRojPlayerController();
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdvancedGameDevPRoj();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAdvancedGameDevPRojPlayerController *************************************
void AAdvancedGameDevPRojPlayerController::StaticRegisterNativesAAdvancedGameDevPRojPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAdvancedGameDevPRojPlayerController;
UClass* AAdvancedGameDevPRojPlayerController::GetPrivateStaticClass()
{
	using TClass = AAdvancedGameDevPRojPlayerController;
	if (!Z_Registration_Info_UClass_AAdvancedGameDevPRojPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AdvancedGameDevPRojPlayerController"),
			Z_Registration_Info_UClass_AAdvancedGameDevPRojPlayerController.InnerSingleton,
			StaticRegisterNativesAAdvancedGameDevPRojPlayerController,
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
	return Z_Registration_Info_UClass_AAdvancedGameDevPRojPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_NoRegister()
{
	return AAdvancedGameDevPRojPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple first person Player Controller\n *  Manages the input mapping context.\n *  Overrides the Player Camera Manager class.\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AdvancedGameDevPRojPlayerController.h" },
		{ "ModuleRelativePath", "AdvancedGameDevPRojPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple first person Player Controller\nManages the input mapping context.\nOverrides the Player Camera Manager class." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "AdvancedGameDevPRojPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileExcludedMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "AdvancedGameDevPRojPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileControlsWidgetClass_MetaData[] = {
		{ "Category", "Input|Touch Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mobile controls widget to spawn */" },
#endif
		{ "ModuleRelativePath", "AdvancedGameDevPRojPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mobile controls widget to spawn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileExcludedMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileExcludedMappingContexts;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MobileControlsWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvancedGameDevPRojPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdvancedGameDevPRojPlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_Statics::NewProp_MobileExcludedMappingContexts = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdvancedGameDevPRojPlayerController, MobileExcludedMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileExcludedMappingContexts_MetaData), NewProp_MobileExcludedMappingContexts_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_Statics::NewProp_MobileControlsWidgetClass = { "MobileControlsWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdvancedGameDevPRojPlayerController, MobileControlsWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileControlsWidgetClass_MetaData), NewProp_MobileControlsWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_Statics::NewProp_DefaultMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_Statics::NewProp_MobileExcludedMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_Statics::NewProp_MobileControlsWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedGameDevPRoj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_Statics::ClassParams = {
	&AAdvancedGameDevPRojPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_Statics::PropPointers),
	0,
	0x009003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAdvancedGameDevPRojPlayerController()
{
	if (!Z_Registration_Info_UClass_AAdvancedGameDevPRojPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAdvancedGameDevPRojPlayerController.OuterSingleton, Z_Construct_UClass_AAdvancedGameDevPRojPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAdvancedGameDevPRojPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvancedGameDevPRojPlayerController);
AAdvancedGameDevPRojPlayerController::~AAdvancedGameDevPRojPlayerController() {}
// ********** End Class AAdvancedGameDevPRojPlayerController ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_AdvancedGameDevPRojPlayerController_h__Script_AdvancedGameDevPRoj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAdvancedGameDevPRojPlayerController, AAdvancedGameDevPRojPlayerController::StaticClass, TEXT("AAdvancedGameDevPRojPlayerController"), &Z_Registration_Info_UClass_AAdvancedGameDevPRojPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAdvancedGameDevPRojPlayerController), 2144662827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_AdvancedGameDevPRojPlayerController_h__Script_AdvancedGameDevPRoj_380757470(TEXT("/Script/AdvancedGameDevPRoj"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_AdvancedGameDevPRojPlayerController_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_AdvancedGameDevPRojPlayerController_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
