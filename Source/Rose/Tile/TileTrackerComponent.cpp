// Fill out your copyright notice in the Description page of Project Settings.

#include "TileTrackerComponent.h"
#include "House/House.h"
#include "Tile/TileActorHolder.h"
#include "EngineUtils.h"
#include "Standard/IGGameMode.h"

// Sets default values for this component's properties
UTileTrackerComponent::UTileTrackerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UTileTrackerComponent::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void UTileTrackerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Find house to access tile system
	AHouse* House = GetWorld()->GetAuthGameMode<AIGGameMode>()->GetHouse();

	FIntPoint CurrentTilePos = AHouse::CalculateTilePos(GetOwner()->GetActorLocation());

	if(CurrentTilePos != LastTilePos)
	{
		// Actor has entered a new tile, notify potential tile actor
		ATileActor* CurrentTileActor = House->GetTileActorHolder()->GetTileActor(CurrentTilePos);
		if(CurrentTileActor)
		{
			CurrentTileActor->OnActorEntered(GetOwner(), LastTilePos);
		}

		// Actor has left old tile, notify old tile
		ATileActor* LastTileActor = House->GetTileActorHolder()->GetTileActor(LastTilePos);
		if(LastTileActor)
		{
			LastTileActor->OnActorLeave(GetOwner(), CurrentTilePos);
		}
	}

	// Update tile position
	LastTilePos = CurrentTilePos;
}

