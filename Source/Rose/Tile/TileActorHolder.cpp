// Fill out your copyright notice in the Description page of Project Settings.

#include "TileActorHolder.h"
#include "Standard/IGGameMode.h"
#include "House/House.h"
#include "House/HouseBuilder.h"
#include "DrawDebugHelpers.h"

UTileActorHolder::UTileActorHolder()
{

}

bool UTileActorHolder::PlaceTileActor(ATileActor* TileActor, const FIntPoint& TilePos, ETileOrientation Orientation)
{
	TArray<FIntPoint> DesiredModel;
	TileActor->GetTransformedTiledModel(DesiredModel, Orientation, TilePos);

	AHouse* House = GetWorld()->GetAuthGameMode<AIGGameMode>()->GetHouse();

	// Check if this is a valid placement
	for(const FIntPoint& Tile : DesiredModel)
	{
		if(Tile.X < 0 || Tile.Y < 0 || Tile.X >= AHouse::MapSize || Tile.Y >= AHouse::MapSize)
		{
			// Out of bounds, don't allow build
			return false;
		}

		if(!House->GetHouseBuilder()->GetTile(Tile.X, Tile.Y).bIsOpen)
		{
			// One of the desired tiles is not open, don't allow build
			return false;
		}

		if(GetTileActor(Tile))
		{
			// Tile is already occupied, don't allow build
			return false;
		}
	}

	// Set actors world position to desired tile
	TileActor->SetTilePos(TilePos);
	TileActor->SetTileOrientation(Orientation);

	// Update all tiles to point towards new actor
	for(const FIntPoint& Tile : DesiredModel)
	{
		// Place tiled actor on oriented tile
		TileActors.Emplace(Tile, TileActor);
	}

	return true;
}

ATileActor* UTileActorHolder::GetTileActor(const FIntPoint& Tile) const
{
	if(TileActors.Contains(Tile))
	{
		return TileActors[Tile];
	}
	else
	{
		return nullptr;
	}
}
