// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "DFUI/DFUIBase.h"
#include "Generic/NameAndIconProvider.h"

#include "NamedIconTile.generated.h"

class UNameAndIconProvider;
class UButton;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTilePressed, UObject*, Data);

UCLASS()
class DFINEDUI_API UNamedIconTile : public UDFUIBase
{
	GENERATED_BODY()

	UPROPERTY()
	UButton* ButtonWrapper;

	UPROPERTY()
	UObject* Data;

	FOnTilePressed OnTilePressed;

public:
	UFUNCTION()
	void OnPressed();
	virtual UPanelWidget* MakeRootWidget() override;

	void Init(INameAndIconProvider* InData);
	
	FOnTilePressed& GetOnTilePressed();

	UFUNCTION(BlueprintCallable)
	static UNamedIconTile* AddTo(UPanelWidget* Parent, TScriptInterface<INameAndIconProvider> InData);
};
