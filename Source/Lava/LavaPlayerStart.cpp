// Fill out your copyright notice in the Description page of Project Settings.


#include "LavaPlayerStart.h"
#include "Components/CapsuleComponent.h"

ALavaPlayerStart::ALavaPlayerStart(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	GetCapsuleComponent()->SetCapsuleRadius(12.0f);
	GetCapsuleComponent()->SetCapsuleHalfHeight(24.0f);
}