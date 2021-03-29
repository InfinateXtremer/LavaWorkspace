// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LavaMaskDispenser.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LAVA_API ULavaMaskDispenser : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULavaMaskDispenser();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UClass *MaskActorClass;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
