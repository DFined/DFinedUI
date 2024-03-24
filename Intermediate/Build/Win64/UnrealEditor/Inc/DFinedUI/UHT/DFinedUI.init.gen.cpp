// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDFinedUI_init() {}
	DFINEDUI_API UFunction* Z_Construct_UDelegateFunction_DFinedUI_OnDFUILayoutChange__DelegateSignature();
	DFINEDUI_API UFunction* Z_Construct_UDelegateFunction_DFinedUI_OnTilePressed__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DFinedUI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DFinedUI()
	{
		if (!Z_Registration_Info_UPackage__Script_DFinedUI.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DFinedUI_OnDFUILayoutChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DFinedUI_OnTilePressed__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DFinedUI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5E4D1901,
				0xB7238AE2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DFinedUI.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DFinedUI.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DFinedUI(Z_Construct_UPackage__Script_DFinedUI, TEXT("/Script/DFinedUI"), Z_Registration_Info_UPackage__Script_DFinedUI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5E4D1901, 0xB7238AE2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
