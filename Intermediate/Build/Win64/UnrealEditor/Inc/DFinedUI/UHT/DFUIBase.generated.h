// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DFUI/DFUIBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DFINEDUI_DFUIBase_generated_h
#error "DFUIBase.generated.h already included, missing '#pragma once' in DFUIBase.h"
#endif
#define DFINEDUI_DFUIBase_generated_h

#define FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_9_DELEGATE \
DFINEDUI_API void FOnDFUILayoutChange_DelegateWrapper(const FMulticastScriptDelegate& OnDFUILayoutChange);


#define FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_18_SPARSE_DATA
#define FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLayoutChanged);


#define FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_18_ACCESSORS
#define FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDFUIBase(); \
	friend struct Z_Construct_UClass_UDFUIBase_Statics; \
public: \
	DECLARE_CLASS(UDFUIBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DFinedUI"), NO_API) \
	DECLARE_SERIALIZER(UDFUIBase)


#define FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDFUIBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDFUIBase(UDFUIBase&&); \
	NO_API UDFUIBase(const UDFUIBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDFUIBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDFUIBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDFUIBase) \
	NO_API virtual ~UDFUIBase();


#define FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_15_PROLOG
#define FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_18_SPARSE_DATA \
	FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_18_ACCESSORS \
	FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DFINEDUI_API UClass* StaticClass<class UDFUIBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_DFUIBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
