// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedGameDevPRojCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAdvancedGameDevPRojCharacter() {}

// ********** Begin Cross Module References ********************************************************
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_AAdvancedGameDevPRojCharacter();
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_AAdvancedGameDevPRojCharacter_NoRegister();
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_UWashToolComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdvancedGameDevPRoj();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAdvancedGameDevPRojCharacter Function DoAim *****************************
struct Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoAim_Statics
{
	struct AdvancedGameDevPRojCharacter_eventDoAim_Parms
	{
		float Yaw;
		float Pitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "AdvancedGameDevPRojCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoAim_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedGameDevPRojCharacter_eventDoAim_Parms, Yaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoAim_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedGameDevPRojCharacter_eventDoAim_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoAim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoAim_Statics::NewProp_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoAim_Statics::NewProp_Pitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoAim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoAim_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAdvancedGameDevPRojCharacter, nullptr, "DoAim", Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoAim_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoAim_Statics::AdvancedGameDevPRojCharacter_eventDoAim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoAim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoAim_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoAim_Statics::AdvancedGameDevPRojCharacter_eventDoAim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoAim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoAim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAdvancedGameDevPRojCharacter::execDoAim)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoAim(Z_Param_Yaw,Z_Param_Pitch);
	P_NATIVE_END;
}
// ********** End Class AAdvancedGameDevPRojCharacter Function DoAim *******************************

// ********** Begin Class AAdvancedGameDevPRojCharacter Function DoJumpEnd *************************
struct Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoJumpEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "AdvancedGameDevPRojCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoJumpEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAdvancedGameDevPRojCharacter, nullptr, "DoJumpEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoJumpEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoJumpEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoJumpEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoJumpEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAdvancedGameDevPRojCharacter::execDoJumpEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpEnd();
	P_NATIVE_END;
}
// ********** End Class AAdvancedGameDevPRojCharacter Function DoJumpEnd ***************************

// ********** Begin Class AAdvancedGameDevPRojCharacter Function DoJumpStart ***********************
struct Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoJumpStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "AdvancedGameDevPRojCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoJumpStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAdvancedGameDevPRojCharacter, nullptr, "DoJumpStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoJumpStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoJumpStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoJumpStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoJumpStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAdvancedGameDevPRojCharacter::execDoJumpStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpStart();
	P_NATIVE_END;
}
// ********** End Class AAdvancedGameDevPRojCharacter Function DoJumpStart *************************

// ********** Begin Class AAdvancedGameDevPRojCharacter Function DoMove ****************************
struct Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoMove_Statics
{
	struct AdvancedGameDevPRojCharacter_eventDoMove_Parms
	{
		float Right;
		float Forward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "AdvancedGameDevPRojCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoMove_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedGameDevPRojCharacter_eventDoMove_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoMove_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdvancedGameDevPRojCharacter_eventDoMove_Parms, Forward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoMove_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoMove_Statics::NewProp_Forward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAdvancedGameDevPRojCharacter, nullptr, "DoMove", Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoMove_Statics::AdvancedGameDevPRojCharacter_eventDoMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoMove_Statics::AdvancedGameDevPRojCharacter_eventDoMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAdvancedGameDevPRojCharacter::execDoMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoMove(Z_Param_Right,Z_Param_Forward);
	P_NATIVE_END;
}
// ********** End Class AAdvancedGameDevPRojCharacter Function DoMove ******************************

// ********** Begin Class AAdvancedGameDevPRojCharacter Function ToggleMenu ************************
struct Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_ToggleMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Toggle function (C++ logic)\n" },
#endif
		{ "ModuleRelativePath", "AdvancedGameDevPRojCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle function (C++ logic)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_ToggleMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAdvancedGameDevPRojCharacter, nullptr, "ToggleMenu", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_ToggleMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_ToggleMenu_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_ToggleMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_ToggleMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAdvancedGameDevPRojCharacter::execToggleMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleMenu();
	P_NATIVE_END;
}
// ********** End Class AAdvancedGameDevPRojCharacter Function ToggleMenu **************************

// ********** Begin Class AAdvancedGameDevPRojCharacter ********************************************
void AAdvancedGameDevPRojCharacter::StaticRegisterNativesAAdvancedGameDevPRojCharacter()
{
	UClass* Class = AAdvancedGameDevPRojCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoAim", &AAdvancedGameDevPRojCharacter::execDoAim },
		{ "DoJumpEnd", &AAdvancedGameDevPRojCharacter::execDoJumpEnd },
		{ "DoJumpStart", &AAdvancedGameDevPRojCharacter::execDoJumpStart },
		{ "DoMove", &AAdvancedGameDevPRojCharacter::execDoMove },
		{ "ToggleMenu", &AAdvancedGameDevPRojCharacter::execToggleMenu },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAdvancedGameDevPRojCharacter;
UClass* AAdvancedGameDevPRojCharacter::GetPrivateStaticClass()
{
	using TClass = AAdvancedGameDevPRojCharacter;
	if (!Z_Registration_Info_UClass_AAdvancedGameDevPRojCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AdvancedGameDevPRojCharacter"),
			Z_Registration_Info_UClass_AAdvancedGameDevPRojCharacter.InnerSingleton,
			StaticRegisterNativesAAdvancedGameDevPRojCharacter,
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
	return Z_Registration_Info_UClass_AAdvancedGameDevPRojCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AAdvancedGameDevPRojCharacter_NoRegister()
{
	return AAdvancedGameDevPRojCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A basic first person character\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AdvancedGameDevPRojCharacter.h" },
		{ "ModuleRelativePath", "AdvancedGameDevPRojCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A basic first person character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: first person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AdvancedGameDevPRojCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: first person view (arms; seen only by self)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AdvancedGameDevPRojCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WashTool_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Washing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wash tool component (owned by character) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AdvancedGameDevPRojCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wash tool component (owned by character)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "AdvancedGameDevPRojCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "AdvancedGameDevPRojCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "AdvancedGameDevPRojCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mouse Look Input Action */" },
#endif
		{ "ModuleRelativePath", "AdvancedGameDevPRojCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mouse Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context */" },
#endif
		{ "ModuleRelativePath", "AdvancedGameDevPRojCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Spray_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spray */" },
#endif
		{ "ModuleRelativePath", "AdvancedGameDevPRojCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spray" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Menu_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Menu */" },
#endif
		{ "ModuleRelativePath", "AdvancedGameDevPRojCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Menu" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusMenuClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===================== UI MENU =====================\n" },
#endif
		{ "ModuleRelativePath", "AdvancedGameDevPRojCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===================== UI MENU =====================" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusMenuInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AdvancedGameDevPRojCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WashTool;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseLookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Spray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Menu;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StatusMenuClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatusMenuInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoAim, "DoAim" }, // 2293699420
		{ &Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoJumpEnd, "DoJumpEnd" }, // 2272083769
		{ &Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoJumpStart, "DoJumpStart" }, // 471575238
		{ &Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_DoMove, "DoMove" }, // 1847708546
		{ &Z_Construct_UFunction_AAdvancedGameDevPRojCharacter_ToggleMenu, "ToggleMenu" }, // 442010664
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvancedGameDevPRojCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_FirstPersonMesh = { "FirstPersonMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdvancedGameDevPRojCharacter, FirstPersonMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonMesh_MetaData), NewProp_FirstPersonMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdvancedGameDevPRojCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_WashTool = { "WashTool", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdvancedGameDevPRojCharacter, WashTool), Z_Construct_UClass_UWashToolComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WashTool_MetaData), NewProp_WashTool_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdvancedGameDevPRojCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdvancedGameDevPRojCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdvancedGameDevPRojCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_MouseLookAction = { "MouseLookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdvancedGameDevPRojCharacter, MouseLookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseLookAction_MetaData), NewProp_MouseLookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdvancedGameDevPRojCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_IA_Spray = { "IA_Spray", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdvancedGameDevPRojCharacter, IA_Spray), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Spray_MetaData), NewProp_IA_Spray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_IA_Menu = { "IA_Menu", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdvancedGameDevPRojCharacter, IA_Menu), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Menu_MetaData), NewProp_IA_Menu_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_StatusMenuClass = { "StatusMenuClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdvancedGameDevPRojCharacter, StatusMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusMenuClass_MetaData), NewProp_StatusMenuClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_StatusMenuInstance = { "StatusMenuInstance", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdvancedGameDevPRojCharacter, StatusMenuInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusMenuInstance_MetaData), NewProp_StatusMenuInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_FirstPersonMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_WashTool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_MouseLookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_IA_Spray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_IA_Menu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_StatusMenuClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::NewProp_StatusMenuInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedGameDevPRoj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::ClassParams = {
	&AAdvancedGameDevPRojCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::PropPointers),
	0,
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAdvancedGameDevPRojCharacter()
{
	if (!Z_Registration_Info_UClass_AAdvancedGameDevPRojCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAdvancedGameDevPRojCharacter.OuterSingleton, Z_Construct_UClass_AAdvancedGameDevPRojCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAdvancedGameDevPRojCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvancedGameDevPRojCharacter);
AAdvancedGameDevPRojCharacter::~AAdvancedGameDevPRojCharacter() {}
// ********** End Class AAdvancedGameDevPRojCharacter **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_AdvancedGameDevPRojCharacter_h__Script_AdvancedGameDevPRoj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAdvancedGameDevPRojCharacter, AAdvancedGameDevPRojCharacter::StaticClass, TEXT("AAdvancedGameDevPRojCharacter"), &Z_Registration_Info_UClass_AAdvancedGameDevPRojCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAdvancedGameDevPRojCharacter), 2491449820U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_AdvancedGameDevPRojCharacter_h__Script_AdvancedGameDevPRoj_2105766950(TEXT("/Script/AdvancedGameDevPRoj"),
	Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_AdvancedGameDevPRojCharacter_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_AdvancedGameDev_AdvancedGameDEVASSIGNMENT_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_AdvancedGameDevPRojCharacter_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
