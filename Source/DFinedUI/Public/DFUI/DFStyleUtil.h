#pragma once
#include "DFinedUI.h"
#include "Icon.h"
#include "ImageUtils.h"
#include "Components/Border.h"
#include "Components/Button.h"
#include "Components/ButtonSlot.h"
#include "Components/CheckBox.h"
#include "Components/ComboBoxString.h"
#include "Components/EditableTextBox.h"
#include "Components/HorizontalBoxSlot.h"
#include "Components/MultiLineEditableTextBox.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBoxSlot.h"
#include "Engine/Font.h"


class UTextBlock;
class UBorder;

class DFStyleUtil
{
	inline static TMap<FString, UTexture2D*> CachedTextures  = TMap<FString, UTexture2D*>();

public:
	inline static FLinearColor GREY_OUTLINE_LVL_0 = FLinearColor(0.015f, 0.015f, 0.015f);;
	inline static FLinearColor GREY_LVL_N0 = FLinearColor(0.011833f, 0.011833f, 0.011833f);
	inline static FLinearColor GREY_LVL_0 = FLinearColor(0.020833f, 0.020833f, 0.020833f);
	inline static FLinearColor GREY_LVL_1 = FLinearColor(0.029, 0.029, 0.029);;
	inline static FLinearColor GREY_LVL_2 = FLinearColor(0.036458f, 0.036458f, 0.036458f);;
	inline static FLinearColor GREY_LVL_3 = FLinearColor(0.06, 0.06, 0.06);;
	inline static FLinearColor GREY_LVL_4 = FLinearColor(0.140000f, 0.140000f, 0.140000f, 0);;
	inline static FLinearColor LIGHT_TEXT_1 = FLinearColor(200, 200, 200);;
	inline static FSlateFontInfo DEFAULT_FONT = FSlateFontInfo(Cast<UObject>(LoadObject<UFont>(NULL, TEXT("/DFinedUI/DefaultFont.DefaultFont"))), 12, "Roboto");;

	inline static FLinearColor SELECTED_LEVEL_3 = FLinearColor(0.020833f, 0.020833f, 0.030833f);;

	static void LineBorderStyle(UBorder* Border)
	{
		auto Brush = FSlateBrush();
		Brush.DrawAs = ESlateBrushDrawType::RoundedBox;

		auto Outline = FSlateBrushOutlineSettings(
			FVector4(0.f, 0.f, 0.f, 1.f), FSlateColor(GREY_OUTLINE_LVL_0), 1.0
		);
		Outline.RoundingType = ESlateBrushRoundingType::HalfHeightRadius;
		Brush.OutlineSettings = Outline;

		Border->SetBrush(Brush);
		Border->SetBrushColor(GREY_LVL_2);
		Border->SetPadding(FMargin(9, 2));
	}

	static void BasicBorderStyle(UBorder* Border, FLinearColor Color)
	{
		auto Brush = FSlateBrush();
		Brush.DrawAs = ESlateBrushDrawType::Box;
		Border->SetBrush(Brush);
		Border->SetBrushColor(Color);
	}

	static void RoundedBorderStyle(UBorder* Border, FLinearColor Color, int radius)
	{
		auto Brush = FSlateBrush();
		Brush.DrawAs = ESlateBrushDrawType::RoundedBox;
		Brush.OutlineSettings.RoundingType = ESlateBrushRoundingType::FixedRadius;
		Brush.OutlineSettings.CornerRadii = FVector4(radius, radius, radius, radius);
		Border->SetBrush(Brush);
		Border->SetBrushColor(Color);
	}

	static void TextBoxStyle(UEditableTextBox* TextBox)
	{
		TextBox->SetJustification(ETextJustify::Center);

		FSlateBrush NormalBrush = FSlateBrush();
		NormalBrush.DrawAs = ESlateBrushDrawType::RoundedBox;

		auto Outline = FSlateBrushOutlineSettings(FVector4(3.f, 3.f, 3.f, 3.f), GREY_OUTLINE_LVL_0, 1);
		Outline.RoundingType = ESlateBrushRoundingType::FixedRadius;
		NormalBrush.OutlineSettings = Outline;

		TextBox->SetMinDesiredWidth(100);

		TextBox->WidgetStyle = FEditableTextBoxStyle()
		                       .SetBackgroundColor(GREY_LVL_0)
		                       .SetPadding(FMargin(2, 0))
		                       .SetFont(DEFAULT_FONT)
		                       .SetBackgroundImageNormal(NormalBrush)
		                       .SetTextStyle(
			                       FTextBlockStyle()
			                       .SetFont(DEFAULT_FONT)
			                       .SetColorAndOpacity(FSlateColor(LIGHT_TEXT_1))
		                       );
	}

	static void TextBlockStyle(UTextBlock* TextBlock)
	{
		TextBlock->SetFont(DEFAULT_FONT);
	}

	static void TextAreaStyle(UMultiLineEditableTextBox* TextBlock)
	{
		TextBlock->WidgetStyle.SetFont(DEFAULT_FONT);
		TextBlock->WidgetStyle.SetBackgroundColor(GREY_LVL_0);
	}

	static void CheckBoxStyle(UCheckBox* TextBlock)
	{
		auto Style = TextBlock->GetWidgetStyle();
		Style.SetPadding(FMargin(0));
		auto Brush = Style.BackgroundImage;
		Brush.DrawAs = ESlateBrushDrawType::RoundedBox;
		Brush.OutlineSettings.RoundingType = ESlateBrushRoundingType::FixedRadius;
		Brush.OutlineSettings.CornerRadii = FVector4(4, 4, 4, 4);
		Brush.OutlineSettings.Color = GREY_LVL_3;
		Brush.OutlineSettings.Width = 1;
		Brush.TintColor = GREY_LVL_4;
		Style.SetBackgroundImage(Brush);
		Style.SetBackgroundHoveredImage(Brush);
		Style.SetBackgroundPressedImage(Brush);
		Style.SetForegroundColor(GREY_LVL_N0);
		TextBlock->SetWidgetStyle(Style);
	}

	static void TextButtonStyle(UButton* Button, FLinearColor Color)
	{
		Button->SetBackgroundColor(Color);
		Button->WidgetStyle.Normal.OutlineSettings.Color = GREY_LVL_3;

		auto Child = Cast<UTextBlock>(Button->GetChildAt(0));
		if (Child)
		{
			UButtonSlot* Slot = Cast<UButtonSlot>(Child->Slot);
			TextBlockStyle(Child);
			if (Slot)
			{
				Slot->SetPadding(FMargin(5, 0));
			}
		}
	}

	static void ImgButtonStyle(UButton* Button, UTexture2D* Img, float size)
	{
		auto Style = FButtonStyle();
		auto Brush = SetupImageBrush(Img, size);
		Style.SetNormal(Brush);
		Style.SetPressed(Brush);
		Style.SetHovered(Brush);
		Style.Hovered.TintColor = FLinearColor(1, 1, 1, 0.5);
		Style.Pressed.TintColor = FLinearColor(0.2, 0.2, 0.2);
		Button->SetStyle(Style);
	}

	static void ImgButtonStyle(UButton* Button, UIcon* Icon, float size)
	{
		auto Img = LoadCachedTexture(Icon);
		auto Style = FButtonStyle();
		auto Brush = SetupImageBrush(Img, size);
		Style.SetNormal(Brush);
		Style.SetPressed(Brush);
		Style.SetHovered(Brush);
		Style.Hovered.TintColor = FLinearColor(1, 1, 1, 0.5);
		Style.Pressed.TintColor = FLinearColor(0.2, 0.2, 0.2);
		Button->SetStyle(Style);
	}

	static FSlateBrush SetupImageBrush(UTexture2D* Icon, float size)
	{
		auto Brush = FSlateBrush();
		Brush.DrawAs = ESlateBrushDrawType::Image;
		Brush.SetResourceObject(Icon);
		Brush.SetImageSize(UE::Slate::FDeprecateVector2DParameter(size, size));
		return Brush;
	}

	static void SafeSetVBoxSlotWidth(TObjectPtr<UPanelSlot> Slot, FSlateChildSize SlateChildSize)
	{
		if (auto BoxSlot = Cast<UVerticalBoxSlot>(Slot))
		{
			BoxSlot->SetSize(SlateChildSize);
			if (SlateChildSize.SizeRule == ESlateSizeRule::Automatic)
			{
				BoxSlot->SetVerticalAlignment(VAlign_Center);
				BoxSlot->SetHorizontalAlignment(HAlign_Center);
			}
			else
			{
				BoxSlot->SetVerticalAlignment(VAlign_Fill);
				BoxSlot->SetHorizontalAlignment(HAlign_Fill);
			}
		}
	}

	inline static UTexture2D* DEFAULT_TEXTURE = FDFinedUIModule::LoadGlobalObject<UTexture2D>("/Game/FireVRks/UI/Icons/UnknownTexture.UnknownTexture");;

	template <class SlotType>
	static void SafeSetSlotAlignment(UPanelSlot* Slot, EHorizontalAlignment HAlign, EVerticalAlignment VAlign)
	{
		auto TypedSlot = Cast<SlotType>(Slot);

		TypedSlot->SetHorizontalAlignment(HAlign);
		TypedSlot->SetVerticalAlignment(VAlign);
	}

	static void SafeSetHBoxSlotWidth(UPanelSlot* Slot, FSlateChildSize Size)
	{
		if (auto BoxSlot = Cast<UHorizontalBoxSlot>(Slot))
		{
			BoxSlot->SetSize(Size);
			BoxSlot->SetHorizontalAlignment(HAlign_Fill);
			if (Size.SizeRule == ESlateSizeRule::Automatic)
			{
				BoxSlot->SetVerticalAlignment(VAlign_Center);
			}
			else
			{
				BoxSlot->SetVerticalAlignment(VAlign_Fill);
			}
		}
	}

	static void SafeSetHBoxSlotWidth(UPanelSlot* Slot, FSlateChildSize Size, EHorizontalAlignment Alignment)
	{
		SafeSetHBoxSlotWidth(Slot, Size);
		if (auto BoxSlot = Cast<UHorizontalBoxSlot>(Slot))
		{
			BoxSlot->SetHorizontalAlignment(Alignment);
		}
	}
	
	static void SafeSetHBoxSlotWidth(UPanelSlot* Slot, FSlateChildSize Size, EHorizontalAlignment HAlignment, EVerticalAlignment VAlignment)
	{
		SafeSetHBoxSlotWidth(Slot, Size, HAlignment);
		if (auto BoxSlot = Cast<UHorizontalBoxSlot>(Slot))
		{
			BoxSlot->SetVerticalAlignment(VAlignment);
		}
	}
	
	static void SafeSetVBoxSlotAlignment(UPanelSlot* Slot, EHorizontalAlignment Alignment)
	{
		if (auto BoxSlot = Cast<UVerticalBoxSlot>(Slot))
		{
			BoxSlot->SetHorizontalAlignment(Alignment);
			BoxSlot->SetVerticalAlignment(VAlign_Center);
		}
	}
	
	static UTexture2D* LoadCachedTexture(UIcon* Icon)
	{
		if (Icon->GetTextureRef())
		{
			return Icon->GetTextureRef();
		}
		auto Texture = LoadCachedTextureInternal(Icon);
		Icon->SetTextureRef(Texture);
		return Texture;
	}
	
	static UTexture2D* LoadCachedTextureInternal(UIcon* Icon)
	{
		auto Texture = CachedTextures.Find(Icon->GetPath());
		if (Texture)
		{
			return *Texture;
		}
		auto NewTexture = LoadObject<UTexture2D>(Icon, *Icon->GetPath());
		if (NewTexture)
		{
			if (Icon->IsUseCache())
			{
				CachedTextures.Add(Icon->GetPath(), NewTexture);
			}
			return NewTexture;
		}

		auto Img = FImage();
		//Couldn't load image as a resource. Try to load it as a file
		if (FImageUtils::LoadImage(*Icon->GetPath(), Img))
		{
			Img.ChangeFormat(ERawImageFormat::BGRA8, EGammaSpace::Linear);
			auto RawData = Img.RawData;
			auto Data = Img.RawData.GetData();
			auto Size = Img.RawData.Num();
			NewTexture = UTexture2D::CreateTransient(Img.GetWidth(), Img.GetHeight(), PF_B8G8R8A8);
			void* TextureData = NewTexture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);

			FMemory::Memcpy(TextureData, Data, Size);
			NewTexture->GetPlatformData()->Mips[0].BulkData.Unlock();
			NewTexture->UpdateResource();
			return NewTexture;
		}

		return DEFAULT_TEXTURE;
	}

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
