#include "DFUI/Icon.h"

FString UIcon::GetPath()
{
	return Path;
}

bool UIcon::IsUseCache()
{
	return UseCache;
}

UTexture2D* UIcon::GetTextureRef() const
{
	return TextureRef;
}

void UIcon::SetTextureRef(UTexture2D* bTextureRef)
{
	this->TextureRef = bTextureRef;
}

void UIcon::SetPath(const FString& bPath)
{
	this->Path = bPath;
}

void UIcon::SetUseCache(bool bUseCache)
{
	UseCache = bUseCache;
}

