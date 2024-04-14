// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "SOU_GameStateBase.h"

#include "SOU_BlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class SYSTEMOFUNITS_API USOU_BlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, Category = "SOU Scales")
		static int IntPower(const int x, const int p);

	UFUNCTION(BlueprintPure, Category = "SOU Scales")
		static FString getReadableScale(const int worldScale, const int worldZoom);

	UFUNCTION(BlueprintPure, Category = "SOU Scales")
		static FVector getMeshScaleToApply(const int meshScale);

	UFUNCTION(BlueprintPure, Category = "SOU Scales")
		static FString getCharFromInt(const int number);

	UFUNCTION(BlueprintPure, Category = "SOU Params")
		static FTransform getExperimentPosition();
	
};
