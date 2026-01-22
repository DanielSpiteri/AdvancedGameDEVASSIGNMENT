// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UpgradeData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUpgradeData() {}

// ********** Begin Cross Module References ********************************************************
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_UUpgradeData();
ADVANCEDGAMEDEVPROJ_API UClass* Z_Construct_UClass_UUpgradeData_NoRegister();
ADVANCEDGAMEDEVPROJ_API UEnum* Z_Construct_UEnum_AdvancedGameDevPRoj_EUpgradeType();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
UPackage* Z_Construct_UPackage__Script_AdvancedGameDevPRoj();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EUpgradeType **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUpgradeType;
static UEnum* EUpgradeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUpgradeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUpgradeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedGameDevPRoj_EUpgradeType, (UObject*)Z_Construct_UPackage__Script_AdvancedGameDevPRoj(), TEXT("EUpgradeType"));
	}
	return Z_Registration_Info_UEnum_EUpgradeType.OuterSingleton;
}
template<> ADVANCEDGAMEDEVPROJ_API UEnum* StaticEnum<EUpgradeType>()
{
	return EUpgradeType_StaticEnum();
}
struct Z_Construct_UEnum_AdvancedGameDevPRoj_EUpgradeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChargeRefill.DisplayName", "Charge Refill" },
		{ "ChargeRefill.Name", "EUpgradeType::ChargeRefill" },
		{ "ModuleRelativePath", "UpgradeData.h" },
		{ "RangeBoost.DisplayName", "Range Boost" },
		{ "RangeBoost.Name", "EUpgradeType::RangeBoost" },
		{ "SoapBoost.DisplayName", "Soap Boost" },
		{ "SoapBoost.Name", "EUpgradeType::SoapBoost" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUpgradeType::SoapBoost", (int64)EUpgradeType::SoapBoost },
		{ "EUpgradeType::RangeBoost", (int64)EUpgradeType::RangeBoost },
		{ "EUpgradeType::ChargeRefill", (int64)EUpgradeType::ChargeRefill },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedGameDevPRoj_EUpgradeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AdvancedGameDevPRoj,
	nullptr,
	"EUpgradeType",
	"EUpgradeType",
	Z_Construct_UEnum_AdvancedGameDevPRoj_EUpgradeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedGameDevPRoj_EUpgradeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedGameDevPRoj_EUpgradeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AdvancedGameDevPRoj_EUpgradeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AdvancedGameDevPRoj_EUpgradeType()
{
	if (!Z_Registration_Info_UEnum_EUpgradeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUpgradeType.InnerSingleton, Z_Construct_UEnum_AdvancedGameDevPRoj_EUpgradeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUpgradeType.InnerSingleton;
}
// ********** End Enum EUpgradeType ****************************************************************

// ********** Begin Class UUpgradeData *************************************************************
void UUpgradeData::StaticRegisterNativesUUpgradeData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUpgradeData;
UClass* UUpgradeData::GetPrivateStaticClass()
{
	using TClass = UUpgradeData;
	if (!Z_Registration_Info_UClass_UUpgradeData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UpgradeData"),
			Z_Registration_Info_UClass_UUpgradeData.InnerSingleton,
			StaticRegisterNativesUUpgradeData,
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
	return Z_Registration_Info_UClass_UUpgradeData.InnerSingleton;
}
UClass* Z_Construct_UClass_UUpgradeData_NoRegister()
{
	return UUpgradeData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUpgradeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UpgradeData.h" },
		{ "ModuleRelativePath", "UpgradeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "UpgradeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "UpgradeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "Upgrade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If Duration <= 0, treat as instant (e.g., charge refill)\n" },
#endif
		{ "ModuleRelativePath", "UpgradeData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If Duration <= 0, treat as instant (e.g., charge refill)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WashRateMultiplier_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "UpgradeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeBonus_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "UpgradeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeBonus_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "UpgradeData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WashRateMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeBonus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChargeBonus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpgradeData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUpgradeData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUpgradeData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpgradeData, Type), Z_Construct_UEnum_AdvancedGameDevPRoj_EUpgradeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2879150946
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUpgradeData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpgradeData, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUpgradeData_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpgradeData, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUpgradeData_Statics::NewProp_WashRateMultiplier = { "WashRateMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpgradeData, WashRateMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WashRateMultiplier_MetaData), NewProp_WashRateMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUpgradeData_Statics::NewProp_RangeBonus = { "RangeBonus", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpgradeData, RangeBonus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeBonus_MetaData), NewProp_RangeBonus_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUpgradeData_Statics::NewProp_ChargeBonus = { "ChargeBonus", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpgradeData, ChargeBonus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeBonus_MetaData), NewProp_ChargeBonus_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUpgradeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgradeData_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgradeData_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgradeData_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgradeData_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgradeData_Statics::NewProp_WashRateMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgradeData_Statics::NewProp_RangeBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgradeData_Statics::NewProp_ChargeBonus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUpgradeData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedGameDevPRoj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUpgradeData_Statics::ClassParams = {
	&UUpgradeData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUpgradeData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeData_Statics::Class_MetaDataParams), Z_Construct_UClass_UUpgradeData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUpgradeData()
{
	if (!Z_Registration_Info_UClass_UUpgradeData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUpgradeData.OuterSingleton, Z_Construct_UClass_UUpgradeData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUpgradeData.OuterSingleton;
}
UUpgradeData::UUpgradeData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUpgradeData);
UUpgradeData::~UUpgradeData() {}
// ********** End Class UUpgradeData ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_UpgradeData_h__Script_AdvancedGameDevPRoj_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUpgradeType_StaticEnum, TEXT("EUpgradeType"), &Z_Registration_Info_UEnum_EUpgradeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2879150946U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUpgradeData, UUpgradeData::StaticClass, TEXT("UUpgradeData"), &Z_Registration_Info_UClass_UUpgradeData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUpgradeData), 1552672081U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_UpgradeData_h__Script_AdvancedGameDevPRoj_394521617(TEXT("/Script/AdvancedGameDevPRoj"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_UpgradeData_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_UpgradeData_h__Script_AdvancedGameDevPRoj_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_UpgradeData_h__Script_AdvancedGameDevPRoj_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_adv_game_prog_CarWash_AdvancedGameDevPRoj_Source_AdvancedGameDevPRoj_UpgradeData_h__Script_AdvancedGameDevPRoj_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
