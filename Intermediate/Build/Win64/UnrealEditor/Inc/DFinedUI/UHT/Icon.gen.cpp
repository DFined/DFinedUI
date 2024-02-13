// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DFinedUI/Public/DFUI/Icon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIcon() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DFINEDUI_API UClass* Z_Construct_UClass_UIcon();
	DFINEDUI_API UClass* Z_Construct_UClass_UIcon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DFinedUI();
// End Cross Module References
	void UIcon::StaticRegisterNativesUIcon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIcon);
	UClass* Z_Construct_UClass_UIcon_NoRegister()
	{
		return UIcon::StaticClass();
	}
	struct Z_Construct_UClass_UIcon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIcon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DFinedUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIcon_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIcon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DFUI/Icon.h" },
		{ "ModuleRelativePath", "Public/DFUI/Icon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIcon_Statics::NewProp_TextureRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/DFUI/Icon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIcon_Statics::NewProp_TextureRef = { "TextureRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIcon, TextureRef), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIcon_Statics::NewProp_TextureRef_MetaData), Z_Construct_UClass_UIcon_Statics::NewProp_TextureRef_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIcon_Statics::NewProp_TextureRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIcon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIcon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIcon_Statics::ClassParams = {
		&UIcon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIcon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIcon_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIcon_Statics::Class_MetaDataParams), Z_Construct_UClass_UIcon_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIcon_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UIcon()
	{
		if (!Z_Registration_Info_UClass_UIcon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIcon.OuterSingleton, Z_Construct_UClass_UIcon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIcon.OuterSingleton;
	}
	template<> DFINEDUI_API UClass* StaticClass<UIcon>()
	{
		return UIcon::StaticClass();
	}
	UIcon::UIcon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIcon);
	UIcon::~UIcon() {}
	struct Z_CompiledInDeferFile_FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_Icon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_Icon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIcon, UIcon::StaticClass, TEXT("UIcon"), &Z_Registration_Info_UClass_UIcon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIcon), 1012433292U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_Icon_h_3649577521(TEXT("/Script/DFinedUI"),
		Z_CompiledInDeferFile_FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_Icon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_Icon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
