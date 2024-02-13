// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DFUI/NamedIconTile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class INameAndIconProvider;
class UNamedIconTile;
class UObject;
class UPanelWidget;
#ifdef DFINEDUI_NamedIconTile_generated_h
#error "NamedIconTile.generated.h already included, missing '#pragma once' in NamedIconTile.h"
#endif
#define DFINEDUI_NamedIconTile_generated_h

#define FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_12_DELEGATE \
DFINEDUI_API void FOnTilePressed_DelegateWrapper(const FMulticastScriptDelegate& OnTilePressed, UObject* Data);


#define FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_17_SPARSE_DATA
#define FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddTo); \
	DECLARE_FUNCTION(execOnPressed);


#define FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_17_ACCESSORS
#define FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNamedIconTile(); \
	friend struct Z_Construct_UClass_UNamedIconTile_Statics; \
public: \
	DECLARE_CLASS(UNamedIconTile, UDFUIBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DFinedUI"), NO_API) \
	DECLARE_SERIALIZER(UNamedIconTile)


#define FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNamedIconTile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNamedIconTile(UNamedIconTile&&); \
	NO_API UNamedIconTile(const UNamedIconTile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNamedIconTile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNamedIconTile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNamedIconTile) \
	NO_API virtual ~UNamedIconTile();


#define FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_14_PROLOG
#define FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_17_SPARSE_DATA \
	FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_17_ACCESSORS \
	FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_17_INCLASS_NO_PURE_DECLS \
	FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DFINEDUI_API UClass* StaticClass<class UNamedIconTile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Plugins_DFinedUI_Source_DFinedUI_Public_DFUI_NamedIconTile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
