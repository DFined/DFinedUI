// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FDFinedUIModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	template <class Type>
	static Type* LoadGlobalObject(FString Path)
	{
		auto Object = LoadObject<Type>(GetTransientPackage(), *Path);
		Object->AddToRoot();
		return Object;
	}
};
