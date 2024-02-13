#pragma once
#include "Icon.generated.h"

UCLASS()
class DFINEDUI_API UIcon : public UObject
{
	GENERATED_BODY()
	
	FString Path;
	bool UseCache;

	UPROPERTY()
	UTexture2D* TextureRef;
	
public:
	static UIcon* New(UObject* Outer, const FString& Path, const bool UseCache)
	{
		const auto Icon = NewObject<UIcon>(Outer);
		Icon->Path = Path;
		Icon->UseCache = UseCache;
		return Icon;		
	}

	FString GetPath();
	bool IsUseCache();

	void SetPath(const FString& Path);
	void SetUseCache(bool bUseCache);

	UTexture2D* GetTextureRef() const;
	void SetTextureRef(UTexture2D* TextureRef);
};