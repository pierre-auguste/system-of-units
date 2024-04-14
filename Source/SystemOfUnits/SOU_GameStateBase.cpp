// Fill out your copyright notice in the Description page of Project Settings.


#include "SOU_GameStateBase.h"

void ASOU_GameStateBase::SetScale(int newScale, USoundBase* Sound, UObject* WorldContextObject)
{
	if (newScale <= SCALE_MAX && newScale >= SCALE_MIN)
		WorldScale = newScale;
	else
		UGameplayStatics::PlaySound2D(WorldContextObject, Sound);
}

int ASOU_GameStateBase::GetScale()
{
	return WorldScale;
}

void ASOU_GameStateBase::SetZoom(int newZoom, USoundBase* Sound, UObject* WorldContextObject)
{
	if (newZoom <= ZOOM_MAX && newZoom >= ZOOM_MIN)
		WorldZoom = newZoom;
	else
		UGameplayStatics::PlaySound2D(WorldContextObject, Sound);
}

int ASOU_GameStateBase::GetZoom()
{
	return WorldZoom;
}
