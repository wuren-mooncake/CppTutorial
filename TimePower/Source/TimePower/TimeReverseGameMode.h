// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TimeManager.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TimeReverseGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TIMEPOWER_API ATimeReverseGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	ATimeManager* GetTimeManager();
	
protected:
	UPROPERTY(BlueprintReadOnly)
	ATimeManager* TimeManager = nullptr;

public:
	void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;

};
