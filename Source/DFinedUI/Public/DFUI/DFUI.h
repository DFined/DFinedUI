#pragma once
#include "DFStyleUtil.h"
#include "Blueprint/WidgetTree.h"
#include "Components/HorizontalBox.h"
#include "Components/PanelWidget.h"
#include "Components/TextBlock.h"
#include "DFUI/DFUIBase.h"

class UExpandableArea;
class UBorder;
class UTextBlock;
/**
 * @class DFUI
 * @brief The DFUI class provides utility methods for adding and finding widgets within a user interface.
 */
class DFINEDUI_API DFUI
{
public:
	template <class Type>
	static Type* AddWidget(UDFUIBase* Parent)
	{
		auto Widget = MakeWidget<Type>(Parent);
		Parent->GetMountingPoint()->AddChild(Widget);
		return Widget;
	}


	template <class Type>
	static Type* AddWidget(UPanelWidget* Parent)
	{
		auto Widget = MakeWidget<Type>(Parent);
		Parent->AddChild(Widget);
		return Widget;
	}

	template <class Type>
	static Type* MakeUserWidget(UWidget* Parent)
	{
		auto Widget = CreateWidget<Type>(Parent, Type::StaticClass());
		Widget->BaseInit();
		return Widget;
	}

	template <class Type>
	static Type* MakeBuiltinWidget(UWidget* Parent)
	{
		if (auto WidgetTree = AttemptFindWidgetTree(Parent))
		{
			return WidgetTree->ConstructWidget<Type>(Type::StaticClass());
		}
		throw std::runtime_error("Unable to find widget tree from parent widget. How did you do this?");
	}

	template <class Type>
	static Type* MakeWidget(UWidget* Parent)
	{
		if constexpr (TIsDerivedFrom<Type, UDFUIBase>::IsDerived)
		{
			return MakeUserWidget<Type>(Parent);
		}
		if constexpr (!TIsDerivedFrom<Type, UUserWidget>::IsDerived)
		{
			return MakeBuiltinWidget<Type>(Parent);
		}
		throw std::runtime_error("Cannot use DFUI factory methods for a non-DFUI user widget");
	}

	template <class T>
	static T* AttemptFindWidgetByType(UWidget* Widget)
	{
		if (auto UserWidget = FindOuterParent(Widget))
		{
			if (auto OuterAsTarget = Cast<T>(UserWidget))
			{
				return OuterAsTarget;
			}
			return AttemptFindWidgetByType<T>(UserWidget);
		}
		return nullptr;
	}

	static UUserWidget* FindOuterParent(UWidget* Widget);

	static UWidgetTree* AttemptFindWidgetTree(UWidget* Widget)
	{
		if(auto WidgetTree = Cast<UWidgetTree>(Widget))
		{
			return WidgetTree;
		}
		if(auto UserWidget = Cast<UUserWidget>(Widget))
		{
			return UserWidget->WidgetTree;
		}
		auto Outer = Widget->GetOuter();
		if (auto OuterWidgetTree = Cast<UWidgetTree>(Outer))
		{
			return OuterWidgetTree;
		}
		if (auto OuterUserWidget = Cast<UUserWidget>(Outer))
		{
			return OuterUserWidget->WidgetTree;
		}
		if (auto OuterWidget = Cast<UWidget>(Outer))
		{
			AttemptFindWidgetTree(OuterWidget);
		}
		if (auto ParentWidget = Widget->GetParent())
		{
			return AttemptFindWidgetTree(ParentWidget);
		}
		return nullptr;
	};

	template <class WidgetType>
	static WidgetType* NamedWidget(UPanelWidget* Parent, FString Label)
	{
		auto HBox = AddWidget<UHorizontalBox>(Parent);
		auto LabelWidget = AddWidget<UTextBlock>(HBox);
		LabelWidget->SetText(FText::FromString(Label));
		DFStyleUtil::TextBlockStyle(LabelWidget);
		DFStyleUtil::SafeSetHBoxSlotWidth(LabelWidget->Slot, FSlateChildSize(ESlateSizeRule::Automatic), HAlign_Center);

		auto Widget = AddWidget<WidgetType>(HBox);
		DFStyleUtil::SafeSetHBoxSlotWidth(Widget->Slot, FSlateChildSize(ESlateSizeRule::Fill), HAlign_Fill);
		DFStyleUtil::SetPadding<UHorizontalBoxSlot>(Widget, FMargin(15, 0, 10, 0));

		return Widget;
	}

	static UTextBlock* AddLabel(UPanelWidget* Parent, const FString& Text);

	static UBorder* MakeBorder(UWidget* Parent, const FLinearColor& Color);
	static UBorder* AddBorder(UPanelWidget* Parent, const FLinearColor& Color);

	static UButton* AddButton(UPanelWidget* Panel, FString ButtonLabel);

	static UButton* AddButtonToButtonPanel(UHorizontalBox* Panel, FString ButtonLabel);
	static UButton* AddImageButton(UPanelWidget* Parent, UIcon* Icon, int Size);

	static UExpandableArea* MakeExpandableTab(UPanelWidget* Parent, UWidget* Header, UWidget* Body, bool Expanded);
	static void MoveChildUp(UPanelWidget* Widget, UWidget* Child);

	static void MoveChildDown(UPanelWidget* Widget, UWidget* Child);
	static UTextBlock* MakeLabel(UWidget* Parent, FString Name);
};
