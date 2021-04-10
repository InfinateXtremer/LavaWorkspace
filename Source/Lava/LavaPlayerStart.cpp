// Fill out your copyright notice in the Description page of Project Settings.


#include "LavaPlayerStart.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/CapsuleComponent.h"
#include "Components/ArrowComponent.h"
#include "Engine/Texture2D.h"
#include "Components/BillboardComponent.h"

//https://cpp.hotexamples.com/site/file?hash=0x2f245c85355fdf1d8bd94c584ab266c6f53e131c718beee6aecbe50444382d9e&fullName=ValorGame-master/Source/ValorGame/Private/Components/ValorMinionSpawner.cpp&project=Shirasho/ValorGame
ALavaPlayerStart::ALavaPlayerStart(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bDefaultStart = true;

	GetCapsuleComponent()->InitCapsuleSize(12.0f, 24.0f);


	static ConstructorHelpers::FObjectFinder<UTexture2D> PlayerStartTextureObject(TEXT("/UserInterfaceArtProduction/Textures/Portraits/UI_Portrait_Crash_Default"));
	static ConstructorHelpers::FObjectFinder<UTexture2D> EnginePlayerStartTextureObject(TEXT("/Engine/EditorResources/S_Player"));

	if (PlayerStartTextureObject.Object != nullptr)
	{
		GetGoodSprite()->Sprite = PlayerStartTextureObject.Object;
	}
	else
	{
		GetGoodSprite()->Sprite = EnginePlayerStartTextureObject.Object;
	}
}