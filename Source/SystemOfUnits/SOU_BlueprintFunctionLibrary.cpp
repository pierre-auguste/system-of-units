// Fill out your copyright notice in the Description page of Project Settings.


#include "SOU_BlueprintFunctionLibrary.h"
//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, GameState->GetName());


int USOU_BlueprintFunctionLibrary::IntPower(const int x, const int p)
{
	if (p == 0) return 1;
	if (p == 1) return x;

	int tmp = IntPower(x, p / 2);
	if (p % 2 == 0) return tmp * tmp;
	else return x * tmp * tmp;

	return p;
}

FString USOU_BlueprintFunctionLibrary::getReadableScale(const int worldScale, const int worldZoom)
{
	FString printableScale;

	switch (worldScale)
	{
	case -3:
		printableScale.Append("0.001");
		break;
	case -2:
		printableScale.Append("0.01");
		break;
	case -1:
		printableScale.Append("0.1");
		break;
	case 0:
		printableScale.Append("1");
		break;
	case 1:
		printableScale.Append("10");
		break;
	case 2:
		printableScale.Append("100");
		break;
	case 3:
		printableScale.Append("1000");
		break;
	default:
		printableScale.Append("1x10^");
		printableScale.AppendInt(worldScale);
	}

	printableScale.Append(" (");
	printableScale.AppendInt(worldZoom);
	printableScale.Append("%)");

	return printableScale;
}

FVector USOU_BlueprintFunctionLibrary::getMeshScaleToApply(const int meshScale)
{
	UWorld* World = GWorld;
	ASOU_GameStateBase* GameState = World->GetGameState<ASOU_GameStateBase>();

	float scaleDiff = meshScale - GameState->WorldScale;
	float powed = pow(10, scaleDiff);
	float zoom = powed * (float)GameState->WorldZoom / 100;
	return FVector(zoom, zoom, zoom);
}

FString USOU_BlueprintFunctionLibrary::getCharFromInt(const int number)
{
	FString fs;
	char c = 'A' + number;

	return fs.AppendChar(c);
}

FTransform USOU_BlueprintFunctionLibrary::getExperimentPosition()
{
	FVector translation;
	{
		translation.X = 0.0f;
		translation.Y = 150.0f;
		translation.Z = 90.0f;
	}
	FRotator rotation;
	{
		rotation.Roll = 0.0f;
		rotation.Pitch = 0.0f;
		rotation.Yaw = 270.0f;
	}
	FVector scale;
	{
		scale.X = 1.0f;
		scale.Y = 1.0f;
		scale.Z = 1.0f;
	}
	return FTransform(rotation, translation, scale);
}

