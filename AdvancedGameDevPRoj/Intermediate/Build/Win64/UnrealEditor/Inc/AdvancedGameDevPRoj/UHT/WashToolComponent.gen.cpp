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

// ********** Begin Class UWashToolComponent Function AddCharge ************************************
struct Z_Construct_UFunction_UWashToolComponent_AddCharge_Statics
{
	struct WashToolComponent_eventAddCharge_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Charge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Charge refill (canister pickup)\n" },
#endif
		{ "ModuleRelativePath", "WashToolComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Charge refill (canister pickup)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWashToolComponent_AddCharge_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WashToolComponent_eventAddCharge_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWashToolComponent_AddCharge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWashToolComponent_AddCharge_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_AddCharge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWashToolComponent_AddCharge_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWashToolComponent, nullptr, "AddCharge", Z_Construct_UFunction_UWashToolComponent_AddCharge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_AddCharge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWashToolComponent_AddCharge_Statics::WashToolComponent_eventAddCharge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_AddCharge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWashToolComponent_AddCharge_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWashToolComponent_AddCharge_Statics::WashToolComponent_eventAddCharge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWashToolComponent_AddCharge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWashToolComponent_AddCharge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWashToolComponent::execAddCharge)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCharge(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UWashToolComponent Function AddCharge **************************************

// ********** Begin Class UWashToolComponent Function GetChargeNormalised **************************
struct Z_Construct_UFunction_UWashToolComponent_GetChargeNormalised_Statics
{
	struct WashToolComponent_eventGetChargeNormalised_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Charge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Getters for UI ---\n" },
#endif
		{ "ModuleRelativePath", "WashToolComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Getters for UI ---" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWashToolComponent_GetChargeNormalised_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WashToolComponent_eventGetChargeNormalised_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWashToolComponent_GetChargeNormalised_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWashToolComponent_GetChargeNormalised_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_GetChargeNormalised_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWashToolComponent_GetChargeNormalised_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWashToolComponent, nullptr, "GetChargeNormalised", Z_Construct_UFunction_UWashToolComponent_GetChargeNormalised_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_GetChargeNormalised_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWashToolComponent_GetChargeNormalised_Statics::WashToolComponent_eventGetChargeNormalised_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_GetChargeNormalised_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWashToolComponent_GetChargeNormalised_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWashToolComponent_GetChargeNormalised_Statics::WashToolComponent_eventGetChargeNormalised_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWashToolComponent_GetChargeNormalised()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWashToolComponent_GetChargeNormalised_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWashToolComponent::execGetChargeNormalised)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetChargeNormalised();
	P_NATIVE_END;
}
// ********** End Class UWashToolComponent Function GetChargeNormalised ****************************

// ********** Begin Class UWashToolComponent Function GetCurrentCharge *****************************
struct Z_Construct_UFunction_UWashToolComponent_GetCurrentCharge_Statics
{
	struct WashToolComponent_eventGetCurrentCharge_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Charge" },
		{ "ModuleRelativePath", "WashToolComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWashToolComponent_GetCurrentCharge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WashToolComponent_eventGetCurrentCharge_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWashToolComponent_GetCurrentCharge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWashToolComponent_GetCurrentCharge_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_GetCurrentCharge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWashToolComponent_GetCurrentCharge_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWashToolComponent, nullptr, "GetCurrentCharge", Z_Construct_UFunction_UWashToolComponent_GetCurrentCharge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_GetCurrentCharge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWashToolComponent_GetCurrentCharge_Statics::WashToolComponent_eventGetCurrentCharge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_GetCurrentCharge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWashToolComponent_GetCurrentCharge_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWashToolComponent_GetCurrentCharge_Statics::WashToolComponent_eventGetCurrentCharge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWashToolComponent_GetCurrentCharge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWashToolComponent_GetCurrentCharge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWashToolComponent::execGetCurrentCharge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentCharge();
	P_NATIVE_END;
}
// ********** End Class UWashToolComponent Function GetCurrentCharge *******************************

// ********** Begin Class UWashToolComponent Function SetWashRateMultiplier ************************
struct Z_Construct_UFunction_UWashToolComponent_SetWashRateMultiplier_Statics
{
	struct WashToolComponent_eventSetWashRateMultiplier_Parms
	{
		float NewMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Washing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Soap boost setter\n" },
#endif
		{ "ModuleRelativePath", "WashToolComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Soap boost setter" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWashToolComponent_SetWashRateMultiplier_Statics::NewProp_NewMultiplier = { "NewMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WashToolComponent_eventSetWashRateMultiplier_Parms, NewMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWashToolComponent_SetWashRateMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWashToolComponent_SetWashRateMultiplier_Statics::NewProp_NewMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_SetWashRateMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWashToolComponent_SetWashRateMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWashToolComponent, nullptr, "SetWashRateMultiplier", Z_Construct_UFunction_UWashToolComponent_SetWashRateMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_SetWashRateMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWashToolComponent_SetWashRateMultiplier_Statics::WashToolComponent_eventSetWashRateMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_SetWashRateMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWashToolComponent_SetWashRateMultiplier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWashToolComponent_SetWashRateMultiplier_Statics::WashToolComponent_eventSetWashRateMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWashToolComponent_SetWashRateMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWashToolComponent_SetWashRateMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWashToolComponent::execSetWashRateMultiplier)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWashRateMultiplier(Z_Param_NewMultiplier);
	P_NATIVE_END;
}
// ********** End Class UWashToolComponent Function SetWashRateMultiplier **************************

// ********** Begin Class UWashToolComponent Function StartSpray ***********************************
struct Z_Construct_UFunction_UWashToolComponent_StartSpray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Washing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spray controls\n" },
#endif
		{ "ModuleRelativePath", "WashToolComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spray controls" },
#endif
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
		{ "AddCharge", &UWashToolComponent::execAddCharge },
		{ "GetChargeNormalised", &UWashToolComponent::execGetChargeNormalised },
		{ "GetCurrentCharge", &UWashToolComponent::execGetCurrentCharge },
		{ "SetWashRateMultiplier", &UWashToolComponent::execSetWashRateMultiplier },
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Washing ---\n" },
#endif
		{ "ModuleRelativePath", "WashToolComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Washing ---" },
#endif
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WashRateMultiplier_MetaData[] = {
		{ "Category", "Washing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Multiplier (soap boost etc.)\n" },
#endif
		{ "ModuleRelativePath", "WashToolComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplier (soap boost etc.)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCharge_MetaData[] = {
		{ "Category", "Charge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Charge / Fuel ---\n" },
#endif
		{ "ModuleRelativePath", "WashToolComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Charge / Fuel ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCharge_MetaData[] = {
		{ "Category", "Charge" },
		{ "ModuleRelativePath", "WashToolComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeDrainPerSecond_MetaData[] = {
		{ "Category", "Charge" },
		{ "ModuleRelativePath", "WashToolComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseWashRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprayRange;
	static void NewProp_bIsSpraying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSpraying;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WashRateMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCharge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentCharge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChargeDrainPerSecond;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWashToolComponent_AddCharge, "AddCharge" }, // 1471923278
		{ &Z_Construct_UFunction_UWashToolComponent_GetChargeNormalised, "GetChargeNormalised" }, // 552281230
		{ &Z_Construct_UFunction_UWashToolComponent_GetCurrentCharge, "GetCurrentCharge" }, // 3407255863
		{ &Z_Construct_UFunction_UWashToolComponent_SetWashRateMultiplier, "SetWashRateMultiplier" }, // 3919664452
		{ &Z_Construct_UFunction_UWashToolComponent_StartSpray, "StartSpray" }, // 2576389780
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWashToolComponent_Statics::NewProp_WashRateMultiplier = { "WashRateMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWashToolComponent, WashRateMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WashRateMultiplier_MetaData), NewProp_WashRateMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWashToolComponent_Statics::NewProp_MaxCharge = { "MaxCharge", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWashToolComponent, MaxCharge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCharge_MetaData), NewProp_MaxCharge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWashToolComponent_Statics::NewProp_CurrentCharge = { "CurrentCharge", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWashToolComponent, CurrentCharge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCharge_MetaData), NewProp_CurrentCharge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWashToolComponent_Statics::NewProp_ChargeDrainPerSecond = { "ChargeDrainPerSecond", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWashToolComponent, ChargeDrainPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeDrainPerSecond_MetaData), NewProp_ChargeDrainPerSecond_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWashToolComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWashToolComponent_Statics::NewProp_BaseWashRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWashToolComponent_Statics::NewProp_SprayRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWashToolComponent_Statics::NewProp_bIsSpraying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWashToolComponent_Statics::NewProp_WashRateMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWashToolComponent_Statics::NewProp_MaxCharge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWashToolComponent_Statics::NewProp_CurrentCharge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWashToolComponent_Statics::NewProp_ChargeDrainPerSecond,
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
		{ Z_Construct_UClass_UWashToolComponent, UWashToolComponent::StaticClass, TEXT("UWashToolComponent"), &Z_Registration_Info_UClass_UWashToolComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWashToolComponent), 3978045416U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h__Script_AdvancedGameDevPRoj_2700394743(TEXT("/Script/AdvancedGameDevPRoj"),
	Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
