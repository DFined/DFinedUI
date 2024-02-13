// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DFinedUI/Public/DFUI/Generic/NameAndIconProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNameAndIconProvider() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	DFINEDUI_API UClass* Z_Construct_UClass_UNameAndIconProvider();
	DFINEDUI_API UClass* Z_Construct_UClass_UNameAndIconProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DFinedUI();
// End Cross Module References
	void UNameAndIconProvider::StaticRegisterNativesUNameAndIconProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNameAndIconProvider);
	UClass* Z_Construct_UClass_UNameAndIconProvider_NoRegister()
	{
		return UNameAndIconProvider::StaticClass();
	}
	struct Z_Construct_UClass_UNameAndIconProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNameAndIconProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DFinedUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNameAndIconProvider_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNameAndIconProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DFUI/Generic/NameAndIconProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNameAndIconProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INameAndIconProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNameAndIconProvider_Statics::ClassParams = {
		&UNameAndIconProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNameAndIconProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UNameAndIconProvider_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNameAndIconProvider()
	{
		if (!Z_Registration_Info_UClass_UNameAndIconProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNameAndIconProvider.OuterSingleton, Z_Construct_UClass_UNameAndIconProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNameAndIconProvider.OuterSingleton;
	}
	template<> DFINEDUI_API UClass* StaticClass<UNameAndIconProvider>()
	{
		return UNameAndIconProvider::StaticClass();
	}
	UNameAndIconProvider::UNameAndIconProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNameAndIconProvider);
	UNameAndIconProvider::~UNameAndIconProvider() {}
	struct Z_CompiledInDeferFile_FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_Generic_NameAndIconProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_Generic_NameAndIconProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNameAndIconProvider, UNameAndIconProvider::StaticClass, TEXT("UNameAndIconProvider"), &Z_Registration_Info_UClass_UNameAndIconProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNameAndIconProvider), 3936976769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_Generic_NameAndIconProvider_h_1496205081(TEXT("/Script/DFinedUI"),
		Z_CompiledInDeferFile_FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_Generic_NameAndIconProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_Generic_NameAndIconProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
