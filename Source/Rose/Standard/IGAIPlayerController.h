// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "IGAIPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ROSE_API AIGAIPlayerController : public AAIController
{
	GENERATED_BODY()

public:
	AIGAIPlayerController();

	void MoveToLocation(const FVector& Location);

};
