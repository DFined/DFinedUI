// Fill out your copyright notice in the Description page of Project Settings.


#include "DFUI/NamedIconTile.h"

#include "Components/Border.h"
#include "Components/Button.h"
#include "Components/ButtonSlot.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "DFUI/Generic/NameAndIconProvider.h"
#include "DFUI/DFStyleUtil.h"
#include "DFUI/DFUI.h"

void UNamedIconTile::OnPressed()
{
	OnTilePressed.Broadcast(Data);
}

UPanelWidget* UNamedIconTile::MakeRootWidget()
{
	ButtonWrapper = DFUI::MakeWidget<UButton>(this);
	FButtonStyle Style = FButtonStyle();
	Style.SetPressedPadding(FMargin(0));
	Style.SetNormalPadding(FMargin(0));
	ButtonWrapper->SetStyle(Style);
	ButtonWrapper->OnPressed.AddUniqueDynamic(this, &UNamedIconTile::OnPressed);
	return ButtonWrapper;
}

void UNamedIconTile::Init(INameAndIconProvider* InData)
{
	Data = Cast<UObject>(InData);
	auto Border = DFUI::AddWidget<UBorder>(ButtonWrapper);
	DFStyleUtil::BasicBorderStyle(Border, DFStyleUtil::GREY_LVL_2);
	DFStyleUtil::SetPadding<UButtonSlot>(Border, FMargin(0));
	auto VBox = DFUI::AddWidget<UVerticalBox>(Border);
	auto Image = DFUI::AddWidget<UImage>(VBox);
	Image->SetDesiredSizeOverride(FVector2D(128, 128));
	Image->SetBrushFromTexture(InData->GetIcon()->GetTextureRef());
	
	auto Label = DFUI::AddLabel(VBox, InData->GetDisplayName());
	Label->SetAutoWrapText(true);
}

FOnTilePressed& UNamedIconTile::GetOnTilePressed()
{
	return OnTilePressed;
}

UNamedIconTile* UNamedIconTile::AddTo(UPanelWidget* Parent, TScriptInterface<INameAndIconProvider> InData)
{
	auto Widget = DFUI::AddWidget<UNamedIconTile>(Parent);
	Widget->Init(Cast<INameAndIconProvider>(InData.GetInterface()));
	return Widget;
}
