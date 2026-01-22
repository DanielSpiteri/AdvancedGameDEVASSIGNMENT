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
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_UUpgradeData_NoRegister();
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_UWashToolComponent();
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_UWashToolComponent_NoRegister();
ADVANCEDGAMEDEVPROJ_API UScriptStruct* Z_Construct_UScriptStruct_FActiveUpgrade();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AdvancedGameDevPRoj();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FActiveUpgrade ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FActiveUpgrade;
class UScriptStruct* FActiveUpgrade::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FActiveUpgrade.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FActiveUpgrade.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveUpgrade, (UObject*)Z_Construct_UPackage__Script_AdvancedGameDevPRoj(), TEXT("ActiveUpgrade"));
	}
	return Z_Registration_Info_UScriptStruct_FActiveUpgrade.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FActiveUpgrade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WashToolComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "ActiveUpgrade" },
		{ "ModuleRelativePath", "WashToolComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeRemaining_MetaData[] = {
		{ "Category", "ActiveUpgrade" },
		{ "ModuleRelativePath", "WashToolComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveUpgrade>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActiveUpgrade_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveUpgrade, Data), Z_Construct_UClass_UUpgradeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActiveUpgrade_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveUpgrade, TimeRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeRemaining_MetaData), NewProp_TimeRemaining_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveUpgrade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveUpgrade_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveUpgrade_Statics::NewProp_TimeRemaining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveUpgrade_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveUpgrade_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedGameDevPRoj,
	nullptr,
	&NewStructOps,
	"ActiveUpgrade",
	Z_Construct_UScriptStruct_FActiveUpgrade_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveUpgrade_Statics::PropPointers),
	sizeof(FActiveUpgrade),
	alignof(FActiveUpgrade),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveUpgrade_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveUpgrade_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActiveUpgrade()
{
	if (!Z_Registration_Info_UScriptStruct_FActiveUpgrade.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FActiveUpgrade.InnerSingleton, Z_Construct_UScriptStruct_FActiveUpgrade_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FActiveUpgrade.InnerSingleton;
}
// ********** End ScriptStruct FActiveUpgrade ******************************************************

// ********** Begin Class UWashToolComponent Function ApplyUpgrade *********************************
struct Z_Construct_UFunction_UWashToolComponent_ApplyUpgrade_Statics
{
	struct WashToolComponent_eventApplyUpgrade_Parms
	{
		const UUpgradeData* Upgrade;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Upgrades" },
		{ "ModuleRelativePath", "WashToolComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Upgrade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Upgrade;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWashToolComponent_ApplyUpgrade_Statics::NewProp_Upgrade = { "Upgrade", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WashToolComponent_eventApplyUpgrade_Parms, Upgrade), Z_Construct_UClass_UUpgradeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Upgrade_MetaData), NewProp_Upgrade_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWashToolComponent_ApplyUpgrade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWashToolComponent_ApplyUpgrade_Statics::NewProp_Upgrade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_ApplyUpgrade_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWashToolComponent_ApplyUpgrade_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWashToolComponent, nullptr, "ApplyUpgrade", Z_Construct_UFunction_UWashToolComponent_ApplyUpgrade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_ApplyUpgrade_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWashToolComponent_ApplyUpgrade_Statics::WashToolComponent_eventApplyUpgrade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_ApplyUpgrade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWashToolComponent_ApplyUpgrade_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWashToolComponent_ApplyUpgrade_Statics::WashToolComponent_eventApplyUpgrade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWashToolComponent_ApplyUpgrade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWashToolComponent_ApplyUpgrade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWashToolComponent::execApplyUpgrade)
{
	P_GET_OBJECT(UUpgradeData,Z_Param_Upgrade);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyUpgrade(Z_Param_Upgrade);
	P_NATIVE_END;
}
// ********** End Class UWashToolComponent Function ApplyUpgrade ***********************************

// ********** Begin Class UWashToolComponent Function GetActiveUpgrades ****************************
struct Z_Construct_UFunction_UWashToolComponent_GetActiveUpgrades_Statics
{
	struct WashToolComponent_eventGetActiveUpgrades_Parms
	{
		TArray<FActiveUpgrade> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Upgrades" },
		{ "ModuleRelativePath", "WashToolComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWashToolComponent_GetActiveUpgrades_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveUpgrade, METADATA_PARAMS(0, nullptr) }; // 2734370492
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWashToolComponent_GetActiveUpgrades_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WashToolComponent_eventGetActiveUpgrades_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2734370492
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWashToolComponent_GetActiveUpgrades_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWashToolComponent_GetActiveUpgrades_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWashToolComponent_GetActiveUpgrades_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_GetActiveUpgrades_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWashToolComponent_GetActiveUpgrades_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWashToolComponent, nullptr, "GetActiveUpgrades", Z_Construct_UFunction_UWashToolComponent_GetActiveUpgrades_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_GetActiveUpgrades_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWashToolComponent_GetActiveUpgrades_Statics::WashToolComponent_eventGetActiveUpgrades_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_GetActiveUpgrades_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWashToolComponent_GetActiveUpgrades_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWashToolComponent_GetActiveUpgrades_Statics::WashToolComponent_eventGetActiveUpgrades_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWashToolComponent_GetActiveUpgrades()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWashToolComponent_GetActiveUpgrades_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWashToolComponent::execGetActiveUpgrades)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FActiveUpgrade>*)Z_Param__Result=P_THIS->GetActiveUpgrades();
	P_NATIVE_END;
}
// ********** End Class UWashToolComponent Function GetActiveUpgrades ******************************

// ********** Begin Class UWashToolComponent Function GetChargePercent *****************************
struct Z_Construct_UFunction_UWashToolComponent_GetChargePercent_Statics
{
	struct WashToolComponent_eventGetChargePercent_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Washing|Charge" },
		{ "ModuleRelativePath", "WashToolComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWashToolComponent_GetChargePercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WashToolComponent_eventGetChargePercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWashToolComponent_GetChargePercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWashToolComponent_GetChargePercent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_GetChargePercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWashToolComponent_GetChargePercent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWashToolComponent, nullptr, "GetChargePercent", Z_Construct_UFunction_UWashToolComponent_GetChargePercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_GetChargePercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWashToolComponent_GetChargePercent_Statics::WashToolComponent_eventGetChargePercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_GetChargePercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWashToolComponent_GetChargePercent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWashToolComponent_GetChargePercent_Statics::WashToolComponent_eventGetChargePercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWashToolComponent_GetChargePercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWashToolComponent_GetChargePercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWashToolComponent::execGetChargePercent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetChargePercent();
	P_NATIVE_END;
}
// ********** End Class UWashToolComponent Function GetChargePercent *******************************

// ********** Begin Class UWashToolComponent Function GetCleanPercentLookingAt *********************
struct Z_Construct_UFunction_UWashToolComponent_GetCleanPercentLookingAt_Statics
{
	struct WashToolComponent_eventGetCleanPercentLookingAt_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Washing" },
		{ "ModuleRelativePath", "WashToolComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWashToolComponent_GetCleanPercentLookingAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WashToolComponent_eventGetCleanPercentLookingAt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWashToolComponent_GetCleanPercentLookingAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWashToolComponent_GetCleanPercentLookingAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_GetCleanPercentLookingAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWashToolComponent_GetCleanPercentLookingAt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWashToolComponent, nullptr, "GetCleanPercentLookingAt", Z_Construct_UFunction_UWashToolComponent_GetCleanPercentLookingAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_GetCleanPercentLookingAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWashToolComponent_GetCleanPercentLookingAt_Statics::WashToolComponent_eventGetCleanPercentLookingAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashToolComponent_GetCleanPercentLookingAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWashToolComponent_GetCleanPercentLookingAt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWashToolComponent_GetCleanPercentLookingAt_Statics::WashToolComponent_eventGetCleanPercentLookingAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWashToolComponent_GetCleanPercentLookingAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWashToolComponent_GetCleanPercentLookingAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWashToolComponent::execGetCleanPercentLookingAt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCleanPercentLookingAt();
	P_NATIVE_END;
}
// ********** End Class UWashToolComponent Function GetCleanPercentLookingAt ***********************

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
		{ "ApplyUpgrade", &UWashToolComponent::execApplyUpgrade },
		{ "GetActiveUpgrades", &UWashToolComponent::execGetActiveUpgrades },
		{ "GetChargePercent", &UWashToolComponent::execGetChargePercent },
		{ "GetCleanPercentLookingAt", &UWashToolComponent::execGetCleanPercentLookingAt },
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
		{ "Comment", "// Base values\n" },
#endif
		{ "ModuleRelativePath", "WashToolComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base values" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseSprayRange_MetaData[] = {
		{ "Category", "Washing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// dirt per second\n" },
#endif
		{ "ModuleRelativePath", "WashToolComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "dirt per second" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCharge_MetaData[] = {
		{ "Category", "Washing|Charge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional resource (charge)\n" },
#endif
		{ "ModuleRelativePath", "WashToolComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional resource (charge)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeDrainPerSecond_MetaData[] = {
		{ "Category", "Washing|Charge" },
		{ "ModuleRelativePath", "WashToolComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCharge_MetaData[] = {
		{ "Category", "Washing|Charge" },
		{ "ModuleRelativePath", "WashToolComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSpraying_MetaData[] = {
		{ "Category", "Washing" },
		{ "ModuleRelativePath", "WashToolComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveUpgrades_MetaData[] = {
		{ "Category", "Upgrades" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Active upgrades\n" },
#endif
		{ "ModuleRelativePath", "WashToolComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Active upgrades" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseWashRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSprayRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCharge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChargeDrainPerSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentCharge;
	static void NewProp_bIsSpraying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSpraying;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveUpgrades_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveUpgrades;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWashToolComponent_ApplyUpgrade, "ApplyUpgrade" }, // 1334321928
		{ &Z_Construct_UFunction_UWashToolComponent_GetActiveUpgrades, "GetActiveUpgrades" }, // 617227268
		{ &Z_Construct_UFunction_UWashToolComponent_GetChargePercent, "GetChargePercent" }, // 3785333786
		{ &Z_Construct_UFunction_UWashToolComponent_GetCleanPercentLookingAt, "GetCleanPercentLookingAt" }, // 3830510772
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWashToolComponent_Statics::NewProp_BaseSprayRange = { "BaseSprayRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWashToolComponent, BaseSprayRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseSprayRange_MetaData), NewProp_BaseSprayRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWashToolComponent_Statics::NewProp_MaxCharge = { "MaxCharge", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWashToolComponent, MaxCharge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCharge_MetaData), NewProp_MaxCharge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWashToolComponent_Statics::NewProp_ChargeDrainPerSecond = { "ChargeDrainPerSecond", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWashToolComponent, ChargeDrainPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeDrainPerSecond_MetaData), NewProp_ChargeDrainPerSecond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWashToolComponent_Statics::NewProp_CurrentCharge = { "CurrentCharge", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWashToolComponent, CurrentCharge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCharge_MetaData), NewProp_CurrentCharge_MetaData) };
void Z_Construct_UClass_UWashToolComponent_Statics::NewProp_bIsSpraying_SetBit(void* Obj)
{
	((UWashToolComponent*)Obj)->bIsSpraying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWashToolComponent_Statics::NewProp_bIsSpraying = { "bIsSpraying", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWashToolComponent), &Z_Construct_UClass_UWashToolComponent_Statics::NewProp_bIsSpraying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSpraying_MetaData), NewProp_bIsSpraying_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWashToolComponent_Statics::NewProp_ActiveUpgrades_Inner = { "ActiveUpgrades", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveUpgrade, METADATA_PARAMS(0, nullptr) }; // 2734370492
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWashToolComponent_Statics::NewProp_ActiveUpgrades = { "ActiveUpgrades", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWashToolComponent, ActiveUpgrades), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveUpgrades_MetaData), NewProp_ActiveUpgrades_MetaData) }; // 2734370492
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWashToolComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWashToolComponent_Statics::NewProp_BaseWashRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWashToolComponent_Statics::NewProp_BaseSprayRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWashToolComponent_Statics::NewProp_MaxCharge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWashToolComponent_Statics::NewProp_ChargeDrainPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWashToolComponent_Statics::NewProp_CurrentCharge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWashToolComponent_Statics::NewProp_bIsSpraying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWashToolComponent_Statics::NewProp_ActiveUpgrades_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWashToolComponent_Statics::NewProp_ActiveUpgrades,
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
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h__Script_AdvancedGameDevPRoj_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActiveUpgrade::StaticStruct, Z_Construct_UScriptStruct_FActiveUpgrade_Statics::NewStructOps, TEXT("ActiveUpgrade"), &Z_Registration_Info_UScriptStruct_FActiveUpgrade, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveUpgrade), 2734370492U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWashToolComponent, UWashToolComponent::StaticClass, TEXT("UWashToolComponent"), &Z_Registration_Info_UClass_UWashToolComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWashToolComponent), 335023721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h__Script_AdvancedGameDevPRoj_1239679395(TEXT("/Script/AdvancedGameDevPRoj"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h__Script_AdvancedGameDevPRoj_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_WashToolComponent_h__Script_AdvancedGameDevPRoj_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
