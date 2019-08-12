// Fill out your copyright notice in the Description page of Project Settings.

#include "HouseBuilder.h"

#include "ProceduralMeshComponent.h"
#include "NavigationSystem.h"
#include "DrawDebugHelpers.h"
#include "Standard/IGGameMode.h"
#include "House/House.h"

// Sets default values
AHouseBuilder::AHouseBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	BuildingMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Building Mesh"));

	RootComponent = BuildingMesh;

	TilesPerUV = 2;

}

void AHouseBuilder::GenerateTestHouse()
{
	int32 RoomSize = AHouse::MapSize / 4;
	for(int32 Y = AHouse::MapSize / 2 - RoomSize; Y < AHouse::MapSize / 2 + RoomSize; Y++)
	{
		for(int32 X = AHouse::MapSize / 2 - RoomSize; X < AHouse::MapSize / 2 + RoomSize; X++)
		{
			SetTileIsOpen(X, Y, true);
		}
	}

	for(int32 X = AHouse::MapSize / 2 - RoomSize; X < (AHouse::MapSize / 2 + RoomSize) / 2; X++)
	{
		SetTileIsOpen(X, AHouse::MapSize / 2, false);
	}

	RebuildHouseMesh();
}

// Called when the game starts or when spawned
void AHouseBuilder::BeginPlay()
{

	Super::BeginPlay();

	InstantiateHouseBuilder();

}

void AHouseBuilder::RebuildHouseMesh()
{
	BuildingMesh->ClearAllMeshSections();

	// Create empty spot in middle
	SubmitFloorMesh();
	SubmitWallMesh();

	// Update nav mesh
	FNavigationSystem::UpdateComponentData(*BuildingMesh);
}

void AHouseBuilder::SubmitFloorMesh()
{
	// Data for procedural mesh
	TArray<FVector> Vertices;
	TArray<int32> Triangles;
	TArray<FVector> Normals;
	TArray<FVector2D> UV0;
	TArray<FLinearColor> VertexColors;
	TArray<FProcMeshTangent> Tangents;

	// Add floor data
	for(int32 Y = 0; Y < AHouse::MapSize; Y++)
	{
		for(int32 X = 0; X < AHouse::MapSize; X++)
		{
			// If tile is open
			if(GetTile(X, Y).bIsOpen)
			{
				// 
				int32 FirstVertex = Vertices.Num();

				// Add vertices
				//0    1
				//	  
				//2    3
				AddQuad(
					FVector(X * AHouse::TileSize, Y * AHouse::TileSize, 0.f),
					FVector((X + 1) * AHouse::TileSize, Y * AHouse::TileSize, 0.f),
					FVector(X * AHouse::TileSize, (Y + 1) * AHouse::TileSize, 0.f),
					FVector((X + 1) * AHouse::TileSize, (Y + 1) * AHouse::TileSize, 0.f),
					Vertices, Triangles, Normals, UV0);

			}
		}
	}

	// Submit mesh data to procedural mesh
	BuildingMesh->CreateMeshSection_LinearColor(0, Vertices, Triangles, Normals, UV0, VertexColors, Tangents, true);

}

void AHouseBuilder::SubmitWallMesh()
{
	// Loop through tiles and find walls
	for(int32 Y = 0; Y < AHouse::MapSize; Y++)
	{
		for(int32 X = 0; X < AHouse::MapSize; X++)
		{
			FTileData* CurrentTile = GetEditableTile(X, Y);

			// First, check if this tile is closed
			if(!CurrentTile->bIsOpen)
			{
				// If one of the neighbour tiles is open, then this is a wall tile
				if(GetTile(X - 1, Y).bIsOpen 
					|| GetTile(X, Y - 1).bIsOpen
					|| GetTile(X + 1, Y).bIsOpen
					|| GetTile(X, Y + 1).bIsOpen
					|| GetTile(X + 1, Y + 1).bIsOpen
					|| GetTile(X + 1, Y - 1).bIsOpen
					|| GetTile(X - 1, Y + 1).bIsOpen
					|| GetTile(X - 1, Y - 1).bIsOpen)
				{
					// It is a closed tile with an open neighbour, this means it is an wall
					CurrentTile->bIsWall = true;
				}
				else
				{
					// A closed wall with no open neighbours, no wall.
					CurrentTile->bIsWall = false;
				}
			}
			else
			{
				// If it is open, then it is not a wall
				CurrentTile->bIsWall = false;
			}
		}
	}

	// Data for procedural mesh
	TArray<FVector> Vertices;
	TArray<int32> Triangles;
	TArray<FVector> Normals;
	TArray<FVector2D> UV0;
	TArray<FLinearColor> VertexColors;
	TArray<FProcMeshTangent> Tangents;

	// Loop through tiles and build side-wall mesh
	for(int32 Y = 0; Y < AHouse::MapSize; Y++)
	{
		for(int32 X = 0; X < AHouse::MapSize; X++)
		{
			if(GetTile(X, Y).bIsWall)
			{
				FVector TilePos = FVector(X * AHouse::TileSize, Y * AHouse::TileSize, 0.f);

				// Place quad facing towards neighbour tiles, only if they are not walls
				if(!GetTile(X - 1, Y).bIsWall)
				{
					AddQuad(
						{TilePos.X, TilePos.Y + AHouse::TileSize, 0.f},
						{TilePos.X, TilePos.Y, 0.f},
						{TilePos.X, TilePos.Y + AHouse::TileSize, AHouse::WallHeight},
						{TilePos.X, TilePos.Y, AHouse::WallHeight},
						Vertices, Triangles, Normals, UV0, 2.f
					);
				}
				if(!GetTile(X + 1, Y).bIsWall)
				{
					AddQuad(
						{TilePos.X + AHouse::TileSize, TilePos.Y, 0.f},
						{TilePos.X + AHouse::TileSize, TilePos.Y + AHouse::TileSize, 0.f},
						{TilePos.X + AHouse::TileSize, TilePos.Y, AHouse::WallHeight},
						{TilePos.X + AHouse::TileSize, TilePos.Y + AHouse::TileSize, AHouse::WallHeight},
						Vertices, Triangles, Normals, UV0, 2.f
					);
				}
				if(!GetTile(X, Y - 1).bIsWall)
				{
					AddQuad(
						{TilePos.X, TilePos.Y, 0.f},
						{TilePos.X + AHouse::TileSize, TilePos.Y, 0.f},
						{TilePos.X, TilePos.Y, AHouse::WallHeight},
						{TilePos.X + AHouse::TileSize, TilePos.Y, AHouse::WallHeight},
						Vertices, Triangles, Normals, UV0, 2.f
					);
				}
				if(!GetTile(X, Y + 1).bIsWall)
				{
					AddQuad(
						{TilePos.X + AHouse::TileSize, TilePos.Y + AHouse::TileSize, 0.f},
						{TilePos.X, TilePos.Y + AHouse::TileSize, 0.f},
						{TilePos.X + AHouse::TileSize, TilePos.Y + AHouse::TileSize, AHouse::WallHeight},
						{TilePos.X, TilePos.Y + AHouse::TileSize, AHouse::WallHeight},
						Vertices, Triangles, Normals, UV0, 2.f
					);
				}
			}
		}
	}

	// Submit side-wall mesh data to procedural mesh
	BuildingMesh->CreateMeshSection_LinearColor(1, Vertices, Triangles, Normals, UV0, VertexColors, Tangents, true);

	Vertices.Empty();
	Triangles.Empty();
	Normals.Empty();
	UV0.Empty();
	VertexColors.Empty();
	Tangents.Empty();

	// Loop through tiles and build top-wall mesh
	for(int32 Y = 0; Y < AHouse::MapSize; Y++)
	{
		for(int32 X = 0; X < AHouse::MapSize; X++)
		{
			if(GetTile(X, Y).bIsWall)
			{
				FVector TilePos = FVector(X * AHouse::TileSize, Y * AHouse::TileSize, 0.f);

				// Place quad at top of wall tile
				AddQuad(
					{TilePos.X, TilePos.Y, AHouse::WallHeight},
					{TilePos.X + AHouse::TileSize, TilePos.Y, AHouse::WallHeight},
					{TilePos.X, TilePos.Y + AHouse::TileSize, AHouse::WallHeight},
					{TilePos.X + AHouse::TileSize, TilePos.Y + AHouse::TileSize, AHouse::WallHeight},
					Vertices, Triangles, Normals, UV0
				);
			}
		}
	}

	// Submit side-wall mesh data to procedural mesh
	BuildingMesh->CreateMeshSection_LinearColor(2, Vertices, Triangles, Normals, UV0, VertexColors, Tangents, true);

}

void AHouseBuilder::InstantiateHouseBuilder()
{
	// Prepare tile array for describing open and closed tiles, fill it with closed tiles
	OpenMap.Empty();
	for(int i = 0; i < AHouse::MapSize * AHouse::MapSize; i++)
	{
		OpenMap.AddDefaulted();
	}
}

void AHouseBuilder::SetTile(int32 X, int32 Y, const FTileData& NewTile)
{
	// Bounds check
	if(X >= 0 && Y >= 0 && X < AHouse::MapSize && Y < AHouse::MapSize)
	{
		OpenMap[X + Y * AHouse::MapSize] = NewTile;
	}
}

void AHouseBuilder::SetTileIsOpen(int32 X, int32 Y, bool bIsOpen)
{
	// Bounds check
	if(X >= 0 && Y >= 0 && X < AHouse::MapSize && Y < AHouse::MapSize)
	{
		OpenMap[X + Y * AHouse::MapSize].bIsOpen = bIsOpen;
	}
}

FTileData AHouseBuilder::GetTile(int32 X, int32 Y) const
{
	// Bounds check
	if(X >= 0 && Y >= 0 && X < AHouse::MapSize && Y < AHouse::MapSize)
	{
		return OpenMap[X + Y * AHouse::MapSize];
	}

	return FTileData();
}

FTileData* AHouseBuilder::GetEditableTile(int32 X, int32 Y)
{
	// Bounds check
	if(X >= 0 && Y >= 0 && X < AHouse::MapSize && Y < AHouse::MapSize)
	{
		return &OpenMap[X + Y * AHouse::MapSize];
	}
	
	return nullptr;
}

// Called every frame
void AHouseBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHouseBuilder::AddQuad(const FVector& v1, const FVector& v2, const FVector& v3, const FVector& v4, TArray<FVector>& Vertices, TArray<int32>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, float UVScale)
{
	// Get the first vertex index
	int32 FirstVertex = Vertices.Num();

	// Add two triangles
	Triangles.Add(FirstVertex + 1);
	Triangles.Add(FirstVertex + 0);
	Triangles.Add(FirstVertex + 2);

	Triangles.Add(FirstVertex + 1);
	Triangles.Add(FirstVertex + 2);
	Triangles.Add(FirstVertex + 3);

	// Add vertices
	Vertices.Add(v1);
	Vertices.Add(v2);
	Vertices.Add(v3);
	Vertices.Add(v4);

	// Calculate local axies 
	FVector Forward = (v2 - v1).GetUnsafeNormal();
	FVector Right = (v3 - v1).GetUnsafeNormal();
	FVector Up = FVector::CrossProduct(Forward, Right);

	// Up vector represents normal
	Normals.Add(Up);
	Normals.Add(Up);
	Normals.Add(Up);
	Normals.Add(Up);

	// Map uvs to corner of texture for quad
	UVScale = 1.f / (TilesPerUV * AHouse::TileSize * UVScale);
	UV0.Add(FVector2D(FVector::DotProduct(Forward, v1) * UVScale, FVector::DotProduct(Right, v1) * UVScale));
	UV0.Add(FVector2D(FVector::DotProduct(Forward, v2) * UVScale, FVector::DotProduct(Right, v1) * UVScale));
	UV0.Add(FVector2D(FVector::DotProduct(Forward, v1) * UVScale, FVector::DotProduct(Right, v3) * UVScale));
	UV0.Add(FVector2D(FVector::DotProduct(Forward, v2) * UVScale, FVector::DotProduct(Right, v3) * UVScale));
}
