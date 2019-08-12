// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TileActor.h"
#include "TileActorHolder.generated.h"
/**
 * 
 */
UCLASS()
class ROSE_API UTileActorHolder : public UObject
{
	GENERATED_BODY()
	
private:
	UPROPERTY()
	TMap<FIntPoint, ATileActor*> TileActors;

public:
	UTileActorHolder();

	bool PlaceTileActor(ATileActor* TileActor, const FIntPoint& TilePos, ETileOrientation Orientation);

	ATileActor* GetTileActor(const FIntPoint& Tile) const;

};
