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
