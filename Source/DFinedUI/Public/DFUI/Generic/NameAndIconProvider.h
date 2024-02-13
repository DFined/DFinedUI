// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DFUI/Icon.h"
#include "UObject/Object.h"
#include "NameAndIconProvider.generated.h"

UINTERFACE(BlueprintType, Blueprintable)
class UNameAndIconProvider : public UInterface
{
	GENERATED_BODY()
};

class INameAndIconProvider
{
	GENERATED_BODY()

public:
	virtual FString GetDisplayName() const;
	virtual UIcon* GetIcon();
};