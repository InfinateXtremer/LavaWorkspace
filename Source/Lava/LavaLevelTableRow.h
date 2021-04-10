

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "Engine/DataTable.h"
#include "LavaLevelTableRow.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class ELavaAchievementPriority : uint8 {
	LevelUnlocked,
	LevelLocked
};

USTRUCT(BlueprintType)
struct FLavaLevelTableRow : public FTableRowBase
{

	GENERATED_BODY()
		int ProgressionOnCompletion = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UDataTable* CullWorld;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ELavaAchievementPriority CinematicPriority;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName OverlandLevelSelectCinematicName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName OverlandUnlockCinematicName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int RequiredVHSCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText UnlockHint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<UDataTable*> UnlockRequirements;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bUseDefaultUnlockRequirements;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName LevelGem;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasFlashbackRelic;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasNsaneRelic;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasTimeTrialRelic;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasVHS;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasLowDeathsGem;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasWumpaHighPctGem;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasWumpaMediumPctGem;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasWumpaLowPctGem;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasHiddenGem;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasCrateGem;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float TimeTrialSeconds;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int FlashbackCrates;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int WumpaGemHighRequirement;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int WumpaGemMediumRequirement;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int WumpaGemLowRequirement;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int BonusWumpaCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int WumpaCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int CrateCountBizarro;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int CrateCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Index;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<UDataTable*> World;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bAutomaticUpdates;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bCouchPlay;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasLeaderboard;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsBuddy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString LevelAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bShowInUI;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bUnlockedByDefault;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FSoftObjectPath LevelWorldPicturePath;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FSoftObjectPath LevelPreviewPicturePath;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FSoftObjectPath LevelPicturePathNVerted;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FSoftObjectPath LevelPicturePath;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText CharacterName2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText CharacterName1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText DisplayName;




};