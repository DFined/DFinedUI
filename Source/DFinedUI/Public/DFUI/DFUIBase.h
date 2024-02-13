// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DFUIBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDFUILayoutChange);

/**
 * UDFUIBase is a base class for DFUI widgets. Defines basic functionality, such as a root widget, initialized on creation
 * as well as virtual functions for its construction and container functionality
 */
UCLASS()
class DFINEDUI_API UDFUIBase : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	UPanelWidget* RootContainer;

	virtual TSharedRef<SWidget> RebuildWidget() override;

	FOnDFUILayoutChange LayoutChangeDelegate;

public:
	/**
	 * Either get an existing root panel-widget or setup a new one
	*/
	virtual UPanelWidget* GetOrCreateRoot();

	/**
	 * Construct the root widget
	*/
	virtual UPanelWidget* MakeRootWidget() PURE_VIRTUAL("MakeRootWidget", return nullptr;);

	virtual void RebuildWidgetInternal();

	virtual void BaseInit();

	virtual UPanelWidget* GetMountingPoint();
	virtual UPanelSlot* Append(UWidget* Widget);

	FOnDFUILayoutChange* GetLayoutChangeDelegate();
	
	UFUNCTION()
	void LayoutChanged()
	{
		LayoutChangeDelegate.Broadcast();
	}
};
