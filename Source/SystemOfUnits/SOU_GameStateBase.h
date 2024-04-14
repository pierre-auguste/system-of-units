// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"

// Sound
#include "Kismet/GameplayStatics.h"
//#include "Sound/SoundBase.h"
//#include "Sound/SoundCue.h"

#include "SOU_GameStateBase.generated.h"

#define SCALE_MAX 27
#define SCALE_MIN -35
#define ZOOM_MAX 190
#define ZOOM_MIN 50


/**
 * 
 */
UCLASS()
class SYSTEMOFUNITS_API ASOU_GameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SOU Scales")
		int WorldScale;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SOU Scales")
		int WorldZoom;

	UFUNCTION(BlueprintCallable, Category = "SOU Scales", meta = (WorldContext = WorldContextObject))
		void SetScale(int newScale, USoundBase* Sound, UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "SOU Scales")
		int GetScale();

	UFUNCTION(BlueprintCallable, Category = "SOU Scales", meta = (WorldContext = WorldContextObject))
		void SetZoom(int newZoom, USoundBase* Sound, UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "SOU Scales")
		int GetZoom();
	
};
