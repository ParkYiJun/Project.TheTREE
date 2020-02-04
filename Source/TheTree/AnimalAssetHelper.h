// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Stats/Stats.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"
#include "UObject/ScriptMacros.h"
#include "Engine/DataTable.h"
#include "Animation/AnimInstance.h"
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

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AnimalAsset)
        TSoftObjectPtr<class UStaticMesh> AnimalHabitatSTMesh;

};

USTRUCT(BlueprintType)
struct FST_Load
{
    GENERATED_USTRUCT_BODY()

public:
    FST_Load() {}
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
        TSoftObjectPtr<class USkeletalMesh> AnimalSkeletalMesh;
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
        TSoftClassPtr<class UAnimInstance> AnimalAnimBPClass;

};

USTRUCT(BlueprintType)
struct FST_Dictionary 
{
    GENERATED_USTRUCT_BODY()

public:
    FST_Dictionary(){}

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
        FString Title;
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
        FST_Load AnimalLoad;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AnimalState)
        uint8 StrikingPower;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AnimalState)
        uint8 PowerVariation;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dictionary)
        bool IsSettled;
};

USTRUCT(BlueprintType)
struct FST_Settle
{
    GENERATED_USTRUCT_BODY()

public:
    FST_Settle() {}
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
        TSoftObjectPtr<class UStaticMesh> Habitat;
};


/*
UCLASS()
class THETREE_API UAnimalAssetHelper : public UObject
{
	GENERATED_BODY()
	
};*/
