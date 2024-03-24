// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"
#include "DFVBoxEx.generated.h"

/**
 * A Vertical box extended with the ability to insert and move widgets
 */
UCLASS()
class DFINEDUI_API UDFVBoxEx : public UVerticalBox
{
	GENERATED_BODY()

public:
	void MoveUp(UWidget* Child)
	{
		auto CurrentNum = this->GetChildIndex(Child);
		if (CurrentNum > 0)
		{
			auto Children = static_cast<TPanelChildren<SBoxPanel::FSlot>*>(this->MyVerticalBox->GetChildren());
			if (Children)
			{
				Children->Move(CurrentNum, CurrentNum - 1);
				Slots.Swap(CurrentNum, CurrentNum-1);
			}
		}
		InvalidateLayoutAndVolatility();
		ForceLayoutPrepass();
	}

	void MoveDown(UWidget* Child)
	{
		auto CurrentNum = this->GetChildIndex(Child);
		if (CurrentNum < this->GetChildrenCount()-1)
		{
			auto Children = static_cast<TPanelChildren<SBoxPanel::FSlot>*>(this->MyVerticalBox->GetChildren());
			if (Children)
			{
				Children->Move(CurrentNum, CurrentNum + 1);
				Slots.Swap(CurrentNum, CurrentNum+1);
			}
		}
		InvalidateLayoutAndVolatility();
		ForceLayoutPrepass();
	}
};