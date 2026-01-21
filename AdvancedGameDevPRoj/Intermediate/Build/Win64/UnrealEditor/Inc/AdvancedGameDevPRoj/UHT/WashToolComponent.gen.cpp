// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WashToolComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWashToolComponent() {}

// ********** Begin Cross Module References ********************************************************
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_UWashToolComponent();
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_UWashToolComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AdvancedGameDevPRoj();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWashToolComponent Function StartSpray ***********************************
struct Z_Construct_UFunction_UWashToolComponent_StartSpray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Washing" },
		{ "ModuleRelativePath", "WashToolComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWashToolComponent_StartSpray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWashToolComponent, nullptr, "StartSpray", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_StartSpray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWashToolComponent_StartSpray_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWashToolComponent_StartSpray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWashToolComponent_StartSpray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWashToolComponent::execStartSpray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSpray();
	P_NATIVE_END;
}
// ********** End Class UWashToolComponent Function StartSpray *************************************

// ********** Begin Class UWashToolComponent Function StopSpray ************************************
struct Z_Construct_UFunction_UWashToolComponent_StopSpray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Washing" },
		{ "ModuleRelativePath", "WashToolComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWashToolComponent_StopSpray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWashToolComponent, nullptr, "StopSpray", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_StopSpray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWashToolComponent_StopSpray_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWashToolComponent_StopSpray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWashToolComponent_StopSpray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWashToolComponent::execStopSpray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSpray();
	P_NATIVE_END;
}
// ********** End Class UWashToolComponent Function StopSpray **************************************

// ********** Begin Class UWashToolComponent *******************************************************
void UWashToolComponent::StaticRegisterNativesUWashToolComponent()
{
	UClass* Class = UWashToolComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartSpray", &UWashToolComponent::execStartSpray },
		{ "StopSpray", &UWashToolComponent::execStopSpray },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWashToolComponent;
UClass* UWashToolComponent::GetPrivateStaticClass()
{
	using TClass = UWashToolComponent;
	if (!Z_Registration_Info_UClass_UWashToolComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WashToolComponent"),
			Z_Registration_Info_UClass_UWashToolComponent.InnerSingleton,
			StaticRegisterNativesUWashToolComponent,
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
	return Z_Registration_Info_UClass_UWashToolComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UWashToolComponent_NoRegister()
{
	return UWashToolComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWashToolComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WashToolComponent.h" },
		{ "ModuleRelativePath", "WashToolComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseWashRate_MetaData[] = {
		{ "Category", "Washing" },
		{ "ModuleRelativePath", "WashToolComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprayRange_MetaData[] = {
		{ "Category", "Washing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// dirt per second\n" },
#endif
		{ "ModuleRelativePath", "WashToolComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "dirt per second" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSpraying_MetaData[] = {
		{ "Category", "Washing" },
		{ "ModuleRelativePath", "WashToolComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseWashRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprayRange;
	static void NewProp_bIsSpraying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSpraying;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWashToolComponent_StartSpray, "StartSpray" }, // 691436313
		{ &Z_Construct_UFunction_UWashToolComponent_StopSpray, "StopSpray" }, // 1505017106
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWashToolComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWashToolComponent_Statics::NewProp_BaseWashRate = { "BaseWashRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWashToolComponent, BaseWashRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseWashRate_MetaData), NewProp_BaseWashRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWashToolComponent_Statics::NewProp_SprayRange = { "SprayRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWashToolComponent, SprayRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprayRange_MetaData), NewProp_SprayRange_MetaData) };
void Z_Construct_UClass_UWashToolComponent_Statics::NewProp_bIsSpraying_SetBit(void* Obj)
{
	((UWashToolComponent*)Obj)->bIsSpraying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWashToolComponent_Statics::NewProp_bIsSpraying = { "bIsSpraying", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWashToolComponent), &Z_Construct_UClass_UWashToolComponent_Statics::NewProp_bIsSpraying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSpraying_MetaData), NewProp_bIsSpraying_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWashToolComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWashToolComponent_Statics::NewProp_BaseWashRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWashToolComponent_Statics::NewProp_SprayRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWashToolComponent_Statics::NewProp_bIsSpraying,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWashToolComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWashToolComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedGameDevPRoj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWashToolComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWashToolComponent_Statics::ClassParams = {
	&UWashToolComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWashToolComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWashToolComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWashToolComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWashToolComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWashToolComponent()
{
	if (!Z_Registration_Info_UClass_UWashToolComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWashToolComponent.OuterSingleton, Z_Construct_UClass_UWashToolComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWashToolComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWashToolComponent);
UWashToolComponent::~UWashToolComponent() {}
// ********** End Class UWashToolComponent *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h__Script_AdvancedGameDevPRoj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWashToolComponent, UWashToolComponent::StaticClass, TEXT("UWashToolComponent"), &Z_Registration_Info_UClass_UWashToolComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWashToolComponent), 1064010171U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h__Script_AdvancedGameDevPRoj_143944804(TEXT("/Script/AdvancedGameDevPRoj"),
	Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
