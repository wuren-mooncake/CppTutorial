// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeReverseGameMode.h"

ATimeManager* ATimeReverseGameMode::GetTimeManager()
{
	if (!TimeManager)
	{
		UE_LOG(LogTemp, Error, TEXT("Tried to call GetTimeManager() bevore it existed"));
	}
	return TimeManager;
}

void ATimeReverseGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	TimeManager = Cast<ATimeManager>(GetWorld()->SpawnActor(ATimeManager::StaticClass()));
	if (!TimeManager)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create TimeManager!"));
	}
}
