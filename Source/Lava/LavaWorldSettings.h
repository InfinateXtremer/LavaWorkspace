// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "LavaWorldSettings.generated.h"

/**
 * 
 */
UCLASS()
class LAVA_API ALavaWorldSettings : public AWorldSettings
{
	GENERATED_BODY()

public:

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bPlayCreditsAfterOutroCinematic = false;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			TMap<FName,USoftObjectProperty*> OptionalSublevels;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			TMap<FName, USoftObjectProperty*> DefaultSublevels;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			TArray<USoftObjectProperty*> MainPathCheckpoints;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			UObject* DefaultOutroCinematicController;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			UObject* BuddyIntroCinematicController;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			UObject* DefaultIntroCinematicController;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Pass N Play Game Rules"))
			UClass* PassNPlayGameRules;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			UClass* BuddyPathGameRules;

};
