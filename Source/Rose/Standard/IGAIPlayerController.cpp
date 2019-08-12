// Fill out your copyright notice in the Description page of Project Settings.

#include "IGAIPlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Engine/World.h"


AIGAIPlayerController::AIGAIPlayerController()
{
	
}

void AIGAIPlayerController::MoveToLocation(const FVector& Location)
{
	
	UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, Location);
}
