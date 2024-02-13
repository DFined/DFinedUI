#pragma once
#include "Icon.h"
#include "Components/Button.h"
#include "Components/CheckBox.h"
#include "Components/ComboBoxString.h"
#include "Components/EditableTextBox.h"
#include "Components/HorizontalBoxSlot.h"
#include "Components/MultiLineEditableTextBox.h"

class UTextBlock;
class UBorder;

class DFStyleUtil
{
	static TMap<FString, UTexture2D*> CachedTextures;

public:
	static FLinearColor GREY_OUTLINE_LVL_0;
	static FLinearColor GREY_LVL_N0;
	static FLinearColor GREY_LVL_0;
	static FLinearColor GREY_LVL_1;
	static FLinearColor GREY_LVL_2;
	static FLinearColor GREY_LVL_3;
	static FLinearColor GREY_LVL_4;
	static FLinearColor LIGHT_TEXT_1;
	static FSlateFontInfo DEFAULT_FONT;

	static FLinearColor SELECTED_LEVEL_3;

	static void LineBorderStyle(UBorder* Border);
	static void BasicBorderStyle(UBorder* Border, FLinearColor Color);
	static void RoundedBorderStyle(UBorder* Border, FLinearColor Color, int radius);
	static void TextBoxStyle(UEditableTextBox* Border);
	static void TextBlockStyle(UTextBlock* TextBlock);
	static void TextAreaStyle(UMultiLineEditableTextBox* TextBlock);
	static void CheckBoxStyle(UCheckBox* TextBlock);
	static void TextButtonStyle(UButton* Button, FLinearColor Color);
	static void ImgButtonStyle(UButton* Button, UTexture2D* Img, float size);
	static void ImgButtonStyle(UButton* Button, UIcon* Icon, float size);

	static FSlateBrush SetupImageBrush(UTexture2D* Icon, float size);
	
	static void SafeSetVBoxSlotWidth(TObjectPtr<UPanelSlot> Slot, FSlateChildSize SlateChildSize);

	static UTexture2D* DEFAULT_TEXTURE;

	template <class SlotType>
	static void SafeSetSlotAlignment(UPanelSlot* Slot, EHorizontalAlignment HAlign, EVerticalAlignment VAlign)
	{
		auto TypedSlot = Cast<SlotType>(Slot);

		TypedSlot->SetHorizontalAlignment(HAlign);
		TypedSlot->SetVerticalAlignment(VAlign);
	}

	static void SafeSetHBoxSlotWidth(UPanelSlot* Slot, FSlateChildSize Size);
	static void SafeSetHBoxSlotWidth(UPanelSlot* Slot, FSlateChildSize Size, EHorizontalAlignment Alignment);
	static void SafeSetHBoxSlotWidth(UPanelSlot* Slot, FSlateChildSize Size, EHorizontalAlignment HAlignment,
	                                 EVerticalAlignment VAlignment);
	static void SafeSetVBoxSlotAlignment(UPanelSlot* Slot, EHorizontalAlignment Alignment);
	static UTexture2D* LoadCachedTexture(UIcon* Icon);
	static UTexture2D* LoadCachedTextureInternal(UIcon* Icon);

	template <class SlotType>
	static void SetPadding(UWidget* Widget, FMargin Margin)
	{
		auto Slot = Cast<SlotType>(Widget->Slot);
		if (Slot)
		{
			Slot->SetPadding(Margin);
		}
	}


	static void ComboBox(UComboBoxString* Box)
	{
		Box->ContentPadding = FMargin(0);
		Box->Font = DEFAULT_FONT;
		Box->ItemStyle.SetTextColor(LIGHT_TEXT_1);
		FSlateBrush& Style = Box->WidgetStyle.ComboButtonStyle.ButtonStyle.Normal;
		Style.DrawAs = ESlateBrushDrawType::RoundedBox;
		Style.TintColor = GREY_LVL_0;
		Style.OutlineSettings.Color = GREY_LVL_2;
		Style.OutlineSettings.Width = 2;
		Box->WidgetStyle.ContentPadding = FMargin(0);

		FSlateBrush& HoveredStyle = Box->WidgetStyle.ComboButtonStyle.ButtonStyle.Hovered;
		HoveredStyle.TintColor = GREY_LVL_0;
		HoveredStyle.OutlineSettings.Color = GREY_LVL_2;
		HoveredStyle.OutlineSettings.Width = 2;

		FSlateBrush& PressedStyle = Box->WidgetStyle.ComboButtonStyle.ButtonStyle.Pressed;
		PressedStyle.TintColor = GREY_LVL_0;
		PressedStyle.OutlineSettings.Color = GREY_LVL_2;
		PressedStyle.OutlineSettings.Width = 2;

		Box->ForegroundColor = LIGHT_TEXT_1;
	}
};
