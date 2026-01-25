// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedGameDevPRoj_init() {}
	ADVANCEDGAMEDEVPROJ_API UFunction* Z_Construct_UDelegateFunction_AdvancedGameDevPRoj_BulletCountUpdatedDelegate__DelegateSignature();
	ADVANCEDGAMEDEVPROJ_API UFunction* Z_Construct_UDelegateFunction_AdvancedGameDevPRoj_DamagedDelegate__DelegateSignature();
	ADVANCEDGAMEDEVPROJ_API UFunction* Z_Construct_UDelegateFunction_AdvancedGameDevPRoj_OnDied__DelegateSignature();
	ADVANCEDGAMEDEVPROJ_API UFunction* Z_Construct_UDelegateFunction_AdvancedGameDevPRoj_OnHealthChanged__DelegateSignature();
	ADVANCEDGAMEDEVPROJ_API UFunction* Z_Construct_UDelegateFunction_AdvancedGameDevPRoj_PawnDeathDelegate__DelegateSignature();
	ADVANCEDGAMEDEVPROJ_API UFunction* Z_Construct_UDelegateFunction_AdvancedGameDevPRoj_SprintStateChangedDelegate__DelegateSignature();
	ADVANCEDGAMEDEVPROJ_API UFunction* Z_Construct_UDelegateFunction_AdvancedGameDevPRoj_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AdvancedGameDevPRoj;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AdvancedGameDevPRoj()
	{
		if (!Z_Registration_Info_UPackage__Script_AdvancedGameDevPRoj.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvancedGameDevPRoj_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvancedGameDevPRoj_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvancedGameDevPRoj_OnDied__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvancedGameDevPRoj_OnHealthChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvancedGameDevPRoj_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvancedGameDevPRoj_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvancedGameDevPRoj_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AdvancedGameDevPRoj",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFCF472E1,
				0x1DB80687,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AdvancedGameDevPRoj.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AdvancedGameDevPRoj.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AdvancedGameDevPRoj(Z_Construct_UPackage__Script_AdvancedGameDevPRoj, TEXT("/Script/AdvancedGameDevPRoj"), Z_Registration_Info_UPackage__Script_AdvancedGameDevPRoj, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFCF472E1, 0x1DB80687));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
