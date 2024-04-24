#include "DFUI/DFUI.h"

#include "Components/Border.h"
#include "Components/ExpandableArea.h"
#include "Components/Spacer.h"
#include "DFUI/DFStyleUtil.h"

UUserWidget* DFUI::FindOuterParent(UWidget* Widget)
{
	auto Parent = Widget->GetParent();
	if (Parent == nullptr)
	{
		if (auto Outer = Cast<UWidgetTree>(Widget->GetOuter()))
		{
			if (auto ParentUWidget = Cast<UUserWidget>(Outer->GetOuter()))
			{
				return ParentUWidget;
			}
		}
	}
	if (auto ParentAsWidget = Cast<UWidget>(Parent))
	{
		return FindOuterParent(ParentAsWidget);
	}
	return nullptr;
}

UTextBlock* DFUI::AddLabel(UPanelWidget* Parent, const FString& Text)
{
	auto Label = AddWidget<UTextBlock>(Parent);
	Label->SetText(FText::FromString(Text));
	DFStyleUtil::TextBlockStyle(Label);
	return Label;
}

UBorder* DFUI::MakeBorder(UWidget* Parent, const FLinearColor& Color)
{
	auto Border = MakeWidget<UBorder>(Parent);
	DFStyleUtil::BasicBorderStyle(Border, Color);
	return Border;
}

UBorder* DFUI::AddBorder(UPanelWidget* Parent, const FLinearColor& Color)
{
	auto Border = MakeBorder(Parent, Color);
	Parent->AddChild(Border);
	return Border;
}

UButton* DFUI::AddButton(UPanelWidget* Panel, FString ButtonLabel)
{
	auto Button = AddWidget<UButton>(Panel);
	DFStyleUtil::SafeSetHBoxSlotWidth(Button->Slot, FSlateChildSize(ESlateSizeRule::Automatic));
	DFStyleUtil::TextButtonStyle(Button, DFStyleUtil::GREY_LVL_3);

	auto Label = AddWidget<UTextBlock>(Button);
	Label->SetText(FText::FromString(ButtonLabel));
	DFStyleUtil::TextBlockStyle(Label);
	return Button;
}

UButton* DFUI::AddButtonToButtonPanel(UHorizontalBox* Panel, FString ButtonLabel)
{
	if (Panel->GetChildrenCount() == 0)
	{
		auto Spacer = AddWidget<USpacer>(Panel);
		DFStyleUtil::SafeSetHBoxSlotWidth(Spacer->Slot, FSlateChildSize(ESlateSizeRule::Fill));
	}

	auto Button = AddWidget<UButton>(Panel);
	DFStyleUtil::SafeSetHBoxSlotWidth(Button->Slot, FSlateChildSize(ESlateSizeRule::Automatic));
	DFStyleUtil::TextButtonStyle(Button, DFStyleUtil::GREY_LVL_3);

	auto Label = AddWidget<UTextBlock>(Button);
	Label->SetText(FText::FromString(ButtonLabel));
	DFStyleUtil::TextBlockStyle(Label);


	auto Spacer = AddWidget<USpacer>(Panel);
	DFStyleUtil::SafeSetHBoxSlotWidth(Spacer->Slot, FSlateChildSize(ESlateSizeRule::Fill));

	return Button;
}

UButton* DFUI::AddImageButton(UPanelWidget* Parent, UIcon* Icon, int Size)
{
	auto Btn = AddWidget<UButton>(Parent);
	DFStyleUtil::ImgButtonStyle(Btn, Icon, Size);
	return Btn;
}

UExpandableArea* DFUI::MakeExpandableTab(UPanelWidget* Parent, UWidget* Header, UWidget* Body, bool Expanded)
{
	auto Area = MakeWidget<UExpandableArea>(Parent);
	Area->SetContentForSlot("Header", Header);
	Area->SetContentForSlot("Body", Body);
	Area->SetIsExpanded(Expanded);
	Parent->AddChild(Area);
	return Area;
}

void DFUI::MoveChildUp(UPanelWidget* Widget, UWidget* Child)
{
	//TODO This doesn't work. To be removed
	auto Num = Widget->GetChildIndex(Child);
	if (Num > 0)
	{
		auto Slots = Widget->GetSlots();
		Slots[Num]->Content = Slots[Num-1]->Content;
		Slots[Num - 1]->Content = Child;		
	}
	Widget->InvalidateLayoutAndVolatility();
	Widget->ForceLayoutPrepass();
}

void DFUI::MoveChildDown(UPanelWidget* Widget, UWidget* Child)
{
	auto Num = Widget->GetChildIndex(Child);
	if (Num < Widget->GetChildrenCount() - 1)
	{
		auto Slots = Widget->GetSlots();
		auto PrevSlot = Slots[Num + 1];
		Slots[Num + 1] = Slots[Num];
		Slots[Num] = PrevSlot;
	}
}

UTextBlock* DFUI::MakeLabel(UWidget* Parent, FString Name)
{
	auto NameBox = MakeWidget<UTextBlock>(Parent);
	NameBox->SetText(FText::FromString(Name));
	DFStyleUtil::TextBlockStyle(NameBox);
	return NameBox;
}

UHorizontalBox* DFUI::AddBorderedHBox(UPanelWidget* Parent, FLinearColor Color)
{
	auto Border = AddBorder(Parent, Color);
	auto Box = AddWidget<UHorizontalBox>(Border);
	return Box;
}
