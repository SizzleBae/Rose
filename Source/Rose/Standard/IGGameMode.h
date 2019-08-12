// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "IGGameMode.generated.h"

UCLASS()
class AIGGameMode : public AGameModeBase
{
	GENERATED_BODY()

private:
	UPROPERTY()
	class AHouse* House;

	UPROPERTY()
	class AIGPlayerController* PlayerController;

public:
	AIGGameMode();

	UFUNCTION(BlueprintCallable, Category="IGGameMode")
	class AHouse* GetHouse() const;

protected:
	virtual void BeginPlay() override;

};



