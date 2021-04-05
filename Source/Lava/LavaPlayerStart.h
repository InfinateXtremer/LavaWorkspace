// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "LavaPlayerStart.generated.h"

/**
 * 
 */
UCLASS()
class LAVA_API ALavaPlayerStart : public APlayerStart
{
	GENERATED_BODY()

public:
	ALavaPlayerStart(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDefaultStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 Team;

	/** Not needed for now
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UObject *ActivationComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UObject> TargetCamera;
	 */
};
