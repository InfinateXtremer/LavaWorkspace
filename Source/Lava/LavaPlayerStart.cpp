// Fill out your copyright notice in the Description page of Project Settings.


#include "LavaPlayerStart.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/CapsuleComponent.h"
#include "Components/ArrowComponent.h"
#include "Engine/Texture2D.h"
#include "Components/BillboardComponent.h"

ALavaPlayerStart::ALavaPlayerStart(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bDefaultStart = true;
	
	GetCapsuleComponent()->SetCapsuleRadius(12.0f);
	GetCapsuleComponent()->SetCapsuleHalfHeight(24.0f);

if (!IsRunningCommandlet())
{
	// Structure to hold one-time initialization
	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinderOptional<UTexture2D> PlayerStartTextureObject;
		FName ID_PlayerStart;
		FText NAME_PlayerStart;
		FName ID_Navigation;
		FText NAME_Navigation;
		FConstructorStatics()
			: PlayerStartTextureObject(TEXT("/Game/Editor/S_Crash"))
			, ID_PlayerStart(TEXT("LavaStart"))
			, NAME_PlayerStart(NSLOCTEXT("SpriteCategory", "PlayerStart", "Player Start"))
			, ID_Navigation(TEXT("Navigation"))
			, NAME_Navigation(NSLOCTEXT("SpriteCategory", "Navigation", "Navigation"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

	if (GetGoodSprite())
	{
		GetGoodSprite()->Sprite = ConstructorStatics.PlayerStartTextureObject.Get();
		GetGoodSprite()->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
		GetGoodSprite()->SpriteInfo.Category = ConstructorStatics.ID_PlayerStart;
		GetGoodSprite()->SpriteInfo.DisplayName = ConstructorStatics.NAME_PlayerStart;
	}
	if (GetBadSprite())
	{
		GetBadSprite()->SetVisibility(false);
	}

	if (GetArrowComponent())
	{
		GetArrowComponent()->ArrowColor = FColor(255, 190, 50);
		GetArrowComponent()->SetRelativeLocation(FVector(1.0f, 0.0f, 0.0f));

		GetArrowComponent()->ArrowSize = 1.0f;
		GetArrowComponent()->bTreatAsASprite = true;
		GetArrowComponent()->SpriteInfo.Category = ConstructorStatics.ID_Navigation;
		GetArrowComponent()->SpriteInfo.DisplayName = ConstructorStatics.NAME_Navigation;
		GetArrowComponent()->SetupAttachment(GetCapsuleComponent());
		GetArrowComponent()->bIsScreenSizeScaled = true;
	}
}
}