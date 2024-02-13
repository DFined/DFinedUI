// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DFinedUI/Public/DFUI/NamedIconTile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNamedIconTile() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DFINEDUI_API UClass* Z_Construct_UClass_UDFUIBase();
	DFINEDUI_API UClass* Z_Construct_UClass_UNameAndIconProvider_NoRegister();
	DFINEDUI_API UClass* Z_Construct_UClass_UNamedIconTile();
	DFINEDUI_API UClass* Z_Construct_UClass_UNamedIconTile_NoRegister();
	DFINEDUI_API UFunction* Z_Construct_UDelegateFunction_DFinedUI_OnTilePressed__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DFinedUI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DFinedUI_OnTilePressed__DelegateSignature_Statics
	{
		struct _Script_DFinedUI_eventOnTilePressed_Parms
		{
			UObject* Data;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DFinedUI_OnTilePressed__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DFinedUI_eventOnTilePressed_Parms, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DFinedUI_OnTilePressed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DFinedUI_OnTilePressed__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DFinedUI_OnTilePressed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DFUI/NamedIconTile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DFinedUI_OnTilePressed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DFinedUI, nullptr, "OnTilePressed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DFinedUI_OnTilePressed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DFinedUI_OnTilePressed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DFinedUI_OnTilePressed__DelegateSignature_Statics::_Script_DFinedUI_eventOnTilePressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DFinedUI_OnTilePressed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DFinedUI_OnTilePressed__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DFinedUI_OnTilePressed__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DFinedUI_OnTilePressed__DelegateSignature_Statics::_Script_DFinedUI_eventOnTilePressed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DFinedUI_OnTilePressed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DFinedUI_OnTilePressed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTilePressed_DelegateWrapper(const FMulticastScriptDelegate& OnTilePressed, UObject* Data)
{
	struct _Script_DFinedUI_eventOnTilePressed_Parms
	{
		UObject* Data;
	};
	_Script_DFinedUI_eventOnTilePressed_Parms Parms;
	Parms.Data=Data;
	OnTilePressed.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UNamedIconTile::execAddTo)
	{
		P_GET_OBJECT(UPanelWidget,Z_Param_Parent);
		P_GET_TINTERFACE(INameAndIconProvider,Z_Param_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNamedIconTile**)Z_Param__Result=UNamedIconTile::AddTo(Z_Param_Parent,Z_Param_InData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNamedIconTile::execOnPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPressed();
		P_NATIVE_END;
	}
	void UNamedIconTile::StaticRegisterNativesUNamedIconTile()
	{
		UClass* Class = UNamedIconTile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTo", &UNamedIconTile::execAddTo },
			{ "OnPressed", &UNamedIconTile::execOnPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNamedIconTile_AddTo_Statics
	{
		struct NamedIconTile_eventAddTo_Parms
		{
			UPanelWidget* Parent;
			TScriptInterface<INameAndIconProvider> InData;
			UNamedIconTile* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NamedIconTile_eventAddTo_Parms, Parent), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::NewProp_Parent_MetaData), Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::NewProp_Parent_MetaData) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NamedIconTile_eventAddTo_Parms, InData), Z_Construct_UClass_UNameAndIconProvider_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NamedIconTile_eventAddTo_Parms, ReturnValue), Z_Construct_UClass_UNamedIconTile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::NewProp_InData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DFUI/NamedIconTile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNamedIconTile, nullptr, "AddTo", nullptr, nullptr, Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::NamedIconTile_eventAddTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::NamedIconTile_eventAddTo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNamedIconTile_AddTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNamedIconTile_AddTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNamedIconTile_OnPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNamedIconTile_OnPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DFUI/NamedIconTile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNamedIconTile_OnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNamedIconTile, nullptr, "OnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNamedIconTile_OnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNamedIconTile_OnPressed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UNamedIconTile_OnPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNamedIconTile_OnPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNamedIconTile);
	UClass* Z_Construct_UClass_UNamedIconTile_NoRegister()
	{
		return UNamedIconTile::StaticClass();
	}
	struct Z_Construct_UClass_UNamedIconTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonWrapper_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonWrapper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNamedIconTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDFUIBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DFinedUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNamedIconTile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNamedIconTile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNamedIconTile_AddTo, "AddTo" }, // 1353764153
		{ &Z_Construct_UFunction_UNamedIconTile_OnPressed, "OnPressed" }, // 3549119211
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNamedIconTile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNamedIconTile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DFUI/NamedIconTile.h" },
		{ "ModuleRelativePath", "Public/DFUI/NamedIconTile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNamedIconTile_Statics::NewProp_ButtonWrapper_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DFUI/NamedIconTile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNamedIconTile_Statics::NewProp_ButtonWrapper = { "ButtonWrapper", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNamedIconTile, ButtonWrapper), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNamedIconTile_Statics::NewProp_ButtonWrapper_MetaData), Z_Construct_UClass_UNamedIconTile_Statics::NewProp_ButtonWrapper_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNamedIconTile_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/DFUI/NamedIconTile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNamedIconTile_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNamedIconTile, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNamedIconTile_Statics::NewProp_Data_MetaData), Z_Construct_UClass_UNamedIconTile_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNamedIconTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNamedIconTile_Statics::NewProp_ButtonWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNamedIconTile_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNamedIconTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNamedIconTile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNamedIconTile_Statics::ClassParams = {
		&UNamedIconTile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNamedIconTile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNamedIconTile_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNamedIconTile_Statics::Class_MetaDataParams), Z_Construct_UClass_UNamedIconTile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNamedIconTile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNamedIconTile()
	{
		if (!Z_Registration_Info_UClass_UNamedIconTile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNamedIconTile.OuterSingleton, Z_Construct_UClass_UNamedIconTile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNamedIconTile.OuterSingleton;
	}
	template<> DFINEDUI_API UClass* StaticClass<UNamedIconTile>()
	{
		return UNamedIconTile::StaticClass();
	}
	UNamedIconTile::UNamedIconTile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNamedIconTile);
	UNamedIconTile::~UNamedIconTile() {}
	struct Z_CompiledInDeferFile_FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNamedIconTile, UNamedIconTile::StaticClass, TEXT("UNamedIconTile"), &Z_Registration_Info_UClass_UNamedIconTile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNamedIconTile), 343996680U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_168704324(TEXT("/Script/DFinedUI"),
		Z_CompiledInDeferFile_FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
