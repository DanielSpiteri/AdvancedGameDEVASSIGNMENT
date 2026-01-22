// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WashableCar.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWashableCar() {}

// ********** Begin Cross Module References ********************************************************
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_AWashableCar();
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_AWashableCar_NoRegister();
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_UWashable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdvancedGameDevPRoj();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWashableCar Function GetCurrentDirt *************************************
struct Z_Construct_UFunction_AWashableCar_GetCurrentDirt_Statics
{
	struct WashableCar_eventGetCurrentDirt_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Washing" },
		{ "ModuleRelativePath", "WashableCar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWashableCar_GetCurrentDirt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WashableCar_eventGetCurrentDirt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWashableCar_GetCurrentDirt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWashableCar_GetCurrentDirt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWashableCar_GetCurrentDirt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWashableCar_GetCurrentDirt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWashableCar, nullptr, "GetCurrentDirt", Z_Construct_UFunction_AWashableCar_GetCurrentDirt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWashableCar_GetCurrentDirt_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWashableCar_GetCurrentDirt_Statics::WashableCar_eventGetCurrentDirt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWashableCar_GetCurrentDirt_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWashableCar_GetCurrentDirt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWashableCar_GetCurrentDirt_Statics::WashableCar_eventGetCurrentDirt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWashableCar_GetCurrentDirt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWashableCar_GetCurrentDirt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWashableCar::execGetCurrentDirt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentDirt();
	P_NATIVE_END;
}
// ********** End Class AWashableCar Function GetCurrentDirt ***************************************

// ********** Begin Class AWashableCar *************************************************************
void AWashableCar::StaticRegisterNativesAWashableCar()
{
	UClass* Class = AWashableCar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentDirt", &AWashableCar::execGetCurrentDirt },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWashableCar;
UClass* AWashableCar::GetPrivateStaticClass()
{
	using TClass = AWashableCar;
	if (!Z_Registration_Info_UClass_AWashableCar.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WashableCar"),
			Z_Registration_Info_UClass_AWashableCar.InnerSingleton,
			StaticRegisterNativesAWashableCar,
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
	return Z_Registration_Info_UClass_AWashableCar.InnerSingleton;
}
UClass* Z_Construct_UClass_AWashableCar_NoRegister()
{
	return AWashableCar::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWashableCar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WashableCar.h" },
		{ "ModuleRelativePath", "WashableCar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WashableCar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDirt_MetaData[] = {
		{ "Category", "Washing" },
		{ "ModuleRelativePath", "WashableCar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDirt_MetaData[] = {
		{ "Category", "Washing" },
		{ "ModuleRelativePath", "WashableCar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CleanParamName_MetaData[] = {
		{ "Category", "Washing|Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material parameter name (must match your material)\n" },
#endif
		{ "ModuleRelativePath", "WashableCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material parameter name (must match your material)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCountedAsClean_MetaData[] = {
		{ "Category", "Washing" },
		{ "ModuleRelativePath", "WashableCar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarMID_MetaData[] = {
		{ "ModuleRelativePath", "WashableCar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CarMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDirt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentDirt;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CleanParamName;
	static void NewProp_bCountedAsClean_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCountedAsClean;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CarMID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWashableCar_GetCurrentDirt, "GetCurrentDirt" }, // 75195770
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWashableCar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWashableCar_Statics::NewProp_CarMesh = { "CarMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWashableCar, CarMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarMesh_MetaData), NewProp_CarMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWashableCar_Statics::NewProp_MaxDirt = { "MaxDirt", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWashableCar, MaxDirt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDirt_MetaData), NewProp_MaxDirt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWashableCar_Statics::NewProp_CurrentDirt = { "CurrentDirt", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWashableCar, CurrentDirt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDirt_MetaData), NewProp_CurrentDirt_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWashableCar_Statics::NewProp_CleanParamName = { "CleanParamName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWashableCar, CleanParamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CleanParamName_MetaData), NewProp_CleanParamName_MetaData) };
void Z_Construct_UClass_AWashableCar_Statics::NewProp_bCountedAsClean_SetBit(void* Obj)
{
	((AWashableCar*)Obj)->bCountedAsClean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWashableCar_Statics::NewProp_bCountedAsClean = { "bCountedAsClean", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWashableCar), &Z_Construct_UClass_AWashableCar_Statics::NewProp_bCountedAsClean_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCountedAsClean_MetaData), NewProp_bCountedAsClean_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWashableCar_Statics::NewProp_CarMID = { "CarMID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWashableCar, CarMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarMID_MetaData), NewProp_CarMID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWashableCar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWashableCar_Statics::NewProp_CarMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWashableCar_Statics::NewProp_MaxDirt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWashableCar_Statics::NewProp_CurrentDirt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWashableCar_Statics::NewProp_CleanParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWashableCar_Statics::NewProp_bCountedAsClean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWashableCar_Statics::NewProp_CarMID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWashableCar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWashableCar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedGameDevPRoj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWashableCar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWashableCar_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UWashable_NoRegister, (int32)VTABLE_OFFSET(AWashableCar, IWashable), false },  // 3564939342
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWashableCar_Statics::ClassParams = {
	&AWashableCar::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWashableCar_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWashableCar_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWashableCar_Statics::Class_MetaDataParams), Z_Construct_UClass_AWashableCar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWashableCar()
{
	if (!Z_Registration_Info_UClass_AWashableCar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWashableCar.OuterSingleton, Z_Construct_UClass_AWashableCar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWashableCar.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWashableCar);
AWashableCar::~AWashableCar() {}
// ********** End Class AWashableCar ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashableCar_h__Script_AdvancedGameDevPRoj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWashableCar, AWashableCar::StaticClass, TEXT("AWashableCar"), &Z_Registration_Info_UClass_AWashableCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWashableCar), 3184777573U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashableCar_h__Script_AdvancedGameDevPRoj_1026425351(TEXT("/Script/AdvancedGameDevPRoj"),
	Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashableCar_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashableCar_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
