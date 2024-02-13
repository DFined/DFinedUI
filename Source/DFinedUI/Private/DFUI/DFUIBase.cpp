// Fill out your copyright notice in the Description page of Project Settings.


#include "DFUI/DFUIBase.h"

#include "Blueprint/WidgetTree.h"

TSharedRef<SWidget> UDFUIBase::RebuildWidget()
{
	RebuildWidgetInternal();
	return Super::RebuildWidget();
}

UPanelWidget* UDFUIBase::GetOrCreateRoot() {

	if (WidgetTree)
	{
		if (!RootContainer)
		{
			RootContainer = this->MakeRootWidget();
			WidgetTree->SetContentForSlot("Root", RootContainer);
			//For some WTF reason this actually seems to be the correct way to do this?!
			WidgetTree->RootWidget = RootContainer;
		}
		return RootContainer;
	}
	return nullptr;
}

void UDFUIBase::RebuildWidgetInternal()
{
	GetOrCreateRoot();
}

void UDFUIBase::BaseInit()
{
	GetOrCreateRoot();
}

UPanelWidget* UDFUIBase::GetMountingPoint()
{
	return RootContainer;
}

UPanelSlot* UDFUIBase::Append(UWidget* Widget)
{
	return GetMountingPoint()->AddChild(Widget);
}

FOnDFUILayoutChange* UDFUIBase::GetLayoutChangeDelegate()
{
	return &LayoutChangeDelegate;
}
