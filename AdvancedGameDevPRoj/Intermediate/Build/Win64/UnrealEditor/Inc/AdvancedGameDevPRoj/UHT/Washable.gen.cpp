// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Washable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWashable() {}

// ********** Begin Cross Module References ********************************************************
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_UWashable();
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_UWashable_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_AdvancedGameDevPRoj();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UWashable Function ApplyWash *****************************************
struct Washable_eventApplyWash_Parms
{
	float Amount;
};
void IWashable::ApplyWash(float Amount)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ApplyWash instead.");
}
static FName NAME_UWashable_ApplyWash = FName(TEXT("ApplyWash"));
void IWashable::Execute_ApplyWash(UObject* O, float Amount)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UWashable::StaticClass()));
	Washable_eventApplyWash_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UWashable_ApplyWash);
	if (Func)
	{
		Parms.Amount=Amount;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IWashable*)(O->GetNativeInterfaceAddress(UWashable::StaticClass())))
	{
		I->ApplyWash_Implementation(Amount);
	}
}
struct Z_Construct_UFunction_UWashable_ApplyWash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Washable" },
		{ "ModuleRelativePath", "Washable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWashable_ApplyWash_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Washable_eventApplyWash_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWashable_ApplyWash_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWashable_ApplyWash_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashable_ApplyWash_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWashable_ApplyWash_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWashable, nullptr, "ApplyWash", Z_Construct_UFunction_UWashable_ApplyWash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWashable_ApplyWash_Statics::PropPointers), sizeof(Washable_eventApplyWash_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashable_ApplyWash_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWashable_ApplyWash_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Washable_eventApplyWash_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWashable_ApplyWash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWashable_ApplyWash_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IWashable::execApplyWash)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyWash_Implementation(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Interface UWashable Function ApplyWash *******************************************

// ********** Begin Interface UWashable Function GetCleanPercent ***********************************
struct Washable_eventGetCleanPercent_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	Washable_eventGetCleanPercent_Parms()
		: ReturnValue(0)
	{
	}
};
float IWashable::GetCleanPercent() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCleanPercent instead.");
	Washable_eventGetCleanPercent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UWashable_GetCleanPercent = FName(TEXT("GetCleanPercent"));
float IWashable::Execute_GetCleanPercent(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UWashable::StaticClass()));
	Washable_eventGetCleanPercent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UWashable_GetCleanPercent);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IWashable*)(O->GetNativeInterfaceAddress(UWashable::StaticClass())))
	{
		Parms.ReturnValue = I->GetCleanPercent_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UWashable_GetCleanPercent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Washable" },
		{ "ModuleRelativePath", "Washable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWashable_GetCleanPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Washable_eventGetCleanPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWashable_GetCleanPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWashable_GetCleanPercent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashable_GetCleanPercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWashable_GetCleanPercent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWashable, nullptr, "GetCleanPercent", Z_Construct_UFunction_UWashable_GetCleanPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWashable_GetCleanPercent_Statics::PropPointers), sizeof(Washable_eventGetCleanPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashable_GetCleanPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWashable_GetCleanPercent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Washable_eventGetCleanPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWashable_GetCleanPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWashable_GetCleanPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IWashable::execGetCleanPercent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCleanPercent_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UWashable Function GetCleanPercent *************************************

// ********** Begin Interface UWashable Function IsFullyClean **************************************
struct Washable_eventIsFullyClean_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Washable_eventIsFullyClean_Parms()
		: ReturnValue(false)
	{
	}
};
bool IWashable::IsFullyClean() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsFullyClean instead.");
	Washable_eventIsFullyClean_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UWashable_IsFullyClean = FName(TEXT("IsFullyClean"));
bool IWashable::Execute_IsFullyClean(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UWashable::StaticClass()));
	Washable_eventIsFullyClean_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UWashable_IsFullyClean);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IWashable*)(O->GetNativeInterfaceAddress(UWashable::StaticClass())))
	{
		Parms.ReturnValue = I->IsFullyClean_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UWashable_IsFullyClean_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Washable" },
		{ "ModuleRelativePath", "Washable.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWashable_IsFullyClean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Washable_eventIsFullyClean_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWashable_IsFullyClean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Washable_eventIsFullyClean_Parms), &Z_Construct_UFunction_UWashable_IsFullyClean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWashable_IsFullyClean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWashable_IsFullyClean_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashable_IsFullyClean_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWashable_IsFullyClean_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWashable, nullptr, "IsFullyClean", Z_Construct_UFunction_UWashable_IsFullyClean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWashable_IsFullyClean_Statics::PropPointers), sizeof(Washable_eventIsFullyClean_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWashable_IsFullyClean_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWashable_IsFullyClean_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Washable_eventIsFullyClean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWashable_IsFullyClean()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWashable_IsFullyClean_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IWashable::execIsFullyClean)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFullyClean_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UWashable Function IsFullyClean ****************************************

// ********** Begin Interface UWashable ************************************************************
void UWashable::StaticRegisterNativesUWashable()
{
	UClass* Class = UWashable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyWash", &IWashable::execApplyWash },
		{ "GetCleanPercent", &IWashable::execGetCleanPercent },
		{ "IsFullyClean", &IWashable::execIsFullyClean },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWashable;
UClass* UWashable::GetPrivateStaticClass()
{
	using TClass = UWashable;
	if (!Z_Registration_Info_UClass_UWashable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Washable"),
			Z_Registration_Info_UClass_UWashable.InnerSingleton,
			StaticRegisterNativesUWashable,
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
	return Z_Registration_Info_UClass_UWashable.InnerSingleton;
}
UClass* Z_Construct_UClass_UWashable_NoRegister()
{
	return UWashable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWashable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Washable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWashable_ApplyWash, "ApplyWash" }, // 1518919433
		{ &Z_Construct_UFunction_UWashable_GetCleanPercent, "GetCleanPercent" }, // 2821401811
		{ &Z_Construct_UFunction_UWashable_IsFullyClean, "IsFullyClean" }, // 2141146171
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWashable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWashable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedGameDevPRoj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWashable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWashable_Statics::ClassParams = {
	&UWashable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWashable_Statics::Class_MetaDataParams), Z_Construct_UClass_UWashable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWashable()
{
	if (!Z_Registration_Info_UClass_UWashable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWashable.OuterSingleton, Z_Construct_UClass_UWashable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWashable.OuterSingleton;
}
UWashable::UWashable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWashable);
// ********** End Interface UWashable **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Washable_h__Script_AdvancedGameDevPRoj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWashable, UWashable::StaticClass, TEXT("UWashable"), &Z_Registration_Info_UClass_UWashable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWashable), 3564939342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Washable_h__Script_AdvancedGameDevPRoj_70956135(TEXT("/Script/AdvancedGameDevPRoj"),
	Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Washable_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_Washable_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
