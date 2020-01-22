// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Stats/Stats.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"
#include "UObject/ScriptMacros.h"
#include "Engine/DataTable.h"
#include "AnimalAssetHelper.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FAnimalAssetTableRow :public FTableRowBase
{
    GENERATED_USTRUCT_BODY()

public:
    FAnimalAssetTableRow() :
        Title("")
        , StrikingPower(0)
        , PowerVariation(0)
    {}

    /** 'Name' row is AnimalCode. */

    /** 'Title' row is AnimalName. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AnimalAsset)
        FString Title;

    /** 'StrikingPower' row is Animal's Striking Power. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AnimalAsset)
        uint8 StrikingPower;

    /** 'PowerVariation' row is Animal's Striking Power Variation. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AnimalAsset)
        uint8 PowerVariation;

    /** AnimalCode에 맞는 동물 SkeletalMesh. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AnimalAsset)
        TSoftObjectPtr<class USkeletalMesh> AnimalSKMesh;

    /* 업적에 사용할 아이콘입니다. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AnimalAsset)
        TSoftObjectPtr<class UStaticMesh> AnimalHabitatSTMesh;

};
/*
UCLASS()
class THETREE_API UAnimalAssetHelper : public UObject
{
	GENERATED_BODY()
	
};*/
