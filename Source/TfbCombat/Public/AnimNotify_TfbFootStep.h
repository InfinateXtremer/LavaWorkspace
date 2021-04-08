

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_TfbFootStep.generated.h"

/**
 * 
 */
UCLASS(const, hidecategories = Object, collapsecategories, meta = (DisplayName = "Play TFB Footstep"))
class TFBCOMBAT_API UAnimNotify_TfbFootStep : public UAnimNotify
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Crash 4", meta = (DisplayName = "TFB FootStep"))
		UObject* FootStepAsset;
};
