// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "IGGameMode.h"
#include "IGPlayerController.h"
#include "IGPlayerCamera.h"
#include "IGPlayerCharacter.h"
#include "House/House.h"
#include "Tile/Actor/SpringTrap.h"
#include "Tile/TileActorHolder.h"
#include "House/HouseBuilder.h"
#include "UObject/ConstructorHelpers.h"

AIGGameMode::AIGGameMode()
{
	// Find bluperint classes
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/Blueprints/Standard/BP_IGPlayerController"));
	if(PlayerControllerBPClass.Succeeded())
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}

	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Standard/BP_IGPlayerCamera"));
	if (PlayerPawnBPClass.Succeeded())
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

AHouse* AIGGameMode::GetHouse() const
{
	return House;
}

void AIGGameMode::BeginPlay()
{
	Super::BeginPlay();

	House = GetWorld()->SpawnActor<AHouse>();
	House->GetHouseBuilder()->GenerateTestHouse();

	// Get the player controller for this instance
	PlayerController = GetWorld()->GetFirstPlayerController<AIGPlayerController>();


}
