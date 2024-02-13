// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DFinedUI/Public/DFUI/DFUIBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDFUIBase() {}
// Cross Module References
	DFINEDUI_API UClass* Z_Construct_UClass_UDFUIBase();
	DFINEDUI_API UClass* Z_Construct_UClass_UDFUIBase_NoRegister();
	DFINEDUI_API UFunction* Z_Construct_UDelegateFunction_DFinedUI_OnDFUILayoutChange__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DFinedUI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DFinedUI_OnDFUILayoutChange__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DFinedUI_OnDFUILayoutChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DFUI/DFUIBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DFinedUI_OnDFUILayoutChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DFinedUI, nullptr, "OnDFUILayoutChange__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DFinedUI_OnDFUILayoutChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DFinedUI_OnDFUILayoutChange__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_DFinedUI_OnDFUILayoutChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DFinedUI_OnDFUILayoutChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDFUILayoutChange_DelegateWrapper(const FMulticastScriptDelegate& OnDFUILayoutChange)
{
	OnDFUILayoutChange.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UDFUIBase::execLayoutChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LayoutChanged();
		P_NATIVE_END;
	}
	void UDFUIBase::StaticRegisterNativesUDFUIBase()
	{
		UClass* Class = UDFUIBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LayoutChanged", &UDFUIBase::execLayoutChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDFUIBase_LayoutChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDFUIBase_LayoutChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DFUI/DFUIBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDFUIBase_LayoutChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDFUIBase, nullptr, "LayoutChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDFUIBase_LayoutChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDFUIBase_LayoutChanged_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDFUIBase_LayoutChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDFUIBase_LayoutChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDFUIBase);
	UClass* Z_Construct_UClass_UDFUIBase_NoRegister()
	{
		return UDFUIBase::StaticClass();
	}
	struct Z_Construct_UClass_UDFUIBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDFUIBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DFinedUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDFUIBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDFUIBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDFUIBase_LayoutChanged, "LayoutChanged" }, // 1934417076
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDFUIBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDFUIBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UDFUIBase is a base class for DFUI widgets. Defines basic functionality, such as a root widget, initialized on creation\n * as well as virtual functions for its construction and container functionality\n */" },
#endif
		{ "IncludePath", "DFUI/DFUIBase.h" },
		{ "ModuleRelativePath", "Public/DFUI/DFUIBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UDFUIBase is a base class for DFUI widgets. Defines basic functionality, such as a root widget, initialized on creation\nas well as virtual functions for its construction and container functionality" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDFUIBase_Statics::NewProp_RootContainer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DFUI/DFUIBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDFUIBase_Statics::NewProp_RootContainer = { "RootContainer", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDFUIBase, RootContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDFUIBase_Statics::NewProp_RootContainer_MetaData), Z_Construct_UClass_UDFUIBase_Statics::NewProp_RootContainer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDFUIBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDFUIBase_Statics::NewProp_RootContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDFUIBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDFUIBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDFUIBase_Statics::ClassParams = {
		&UDFUIBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDFUIBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDFUIBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDFUIBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDFUIBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDFUIBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDFUIBase()
	{
		if (!Z_Registration_Info_UClass_UDFUIBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDFUIBase.OuterSingleton, Z_Construct_UClass_UDFUIBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDFUIBase.OuterSingleton;
	}
	template<> DFINEDUI_API UClass* StaticClass<UDFUIBase>()
	{
		return UDFUIBase::StaticClass();
	}
	UDFUIBase::UDFUIBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDFUIBase);
	UDFUIBase::~UDFUIBase() {}
	struct Z_CompiledInDeferFile_FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDFUIBase, UDFUIBase::StaticClass, TEXT("UDFUIBase"), &Z_Registration_Info_UClass_UDFUIBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDFUIBase), 935860337U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_2352144647(TEXT("/Script/DFinedUI"),
		Z_CompiledInDeferFile_FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
