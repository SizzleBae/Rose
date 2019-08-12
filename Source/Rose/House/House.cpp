// Fill out your copyright notice in the Description page of Project Settings.

#include "House.h"
#include "House/HouseBuilder.h"
#include "Tile/TileActorHolder.h"

const float AHouse::TileSize = 16.f;
const int32 AHouse::MapSize = 100;
const float AHouse::WallHeight = TileSize * 4 * 2;

// Sets default values
AHouse::AHouse()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FClassFinder<AHouseBuilder> HouseBuilderBPClass(TEXT("/Game/Blueprints/House/BP_HouseBuilder"));
	if(HouseBuilderBPClass.Succeeded()) {
		HouseBuilderClass = HouseBuilderBPClass.Class;
	}

}

// Called when the game starts or when spawned
void AHouse::BeginPlay()
{
	Super::BeginPlay();

	// Create the house builder
	HouseBuilder = GetWorld()->SpawnActor<AHouseBuilder>(HouseBuilderClass.Get(), FVector(0.f), FRotator(0.f));

	TileActorHolder = NewObject<UTileActorHolder>(this);

}

// Called every frame
void AHouse::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FIntPoint AHouse::CalculateTilePos(const FVector& WorldPos)
{
	return FIntPoint(int32(WorldPos.X / TileSize), int32(WorldPos.Y / TileSize));
}


FVector AHouse::CalculateWorldPos(const FIntPoint& TilePos)
{
	return FVector(TilePos.X * TileSize, TilePos.Y * TileSize, 0.f);
}

FVector AHouse::CalculateCenterWorldPos(const FIntPoint& TilePos)
{
	return FVector(TilePos.X * TileSize + TileSize / 2.f, TilePos.Y * TileSize + TileSize / 2.f, 0.f);
}

float AHouse::GetTileSize()
{
	return TileSize;
}

int32 AHouse::GetMapSize()
{
	return MapSize;
}

AHouseBuilder* AHouse::GetHouseBuilder() const
{
	return HouseBuilder;
}

class UTileActorHolder* AHouse::GetTileActorHolder() const
{
	return TileActorHolder;
}

