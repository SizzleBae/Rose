// Fill out your copyright notice in the Description page of Project Settings.

#include "TileActor.h"
#include "Components/PrimitiveComponent.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/Material.h"
#include "House/House.h"

// Sets default values
ATileActor::ATileActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	static ConstructorHelpers::FObjectFinder<UMaterial> GhostMaterialFinder(TEXT("Material'/Game/Materials/M_Ghost'"));
	if(GhostMaterialFinder.Succeeded())
	{
		GhostMaterial = GhostMaterialFinder.Object;
	}

	TileOrientation = ETileOrientation::North;
}

// Called when the game starts or when spawned
void ATileActor::BeginPlay()
{
	Super::BeginPlay();
	
	TiledModel.Empty();

	GhostMaterialInstance = UMaterialInstanceDynamic::Create(GhostMaterial, this);

}

// Called every frame
void ATileActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATileActor::SetGhostMode(bool _bIsGhostMode)
{
	bIsGhostMode = _bIsGhostMode;

	// If ghost mode, set all static mesh materials to ghost material, if not, return to original material
	for(UActorComponent* Component : GetComponents())
	{
		UStaticMeshComponent* StaticMeshComponent = Cast<UStaticMeshComponent>(Component);

		if(IsValid(StaticMeshComponent))
		{
			if(_bIsGhostMode)
			{
				IntermediateMaterials.Add(StaticMeshComponent, StaticMeshComponent->GetMaterial(0));
				StaticMeshComponent->SetMaterial(0, GhostMaterialInstance);
			}
			else
			{
				if(IntermediateMaterials.Contains(StaticMeshComponent))
				{
					StaticMeshComponent->SetMaterial(0, IntermediateMaterials[StaticMeshComponent]);
				}
			}
		}
	}

	OnGhostModeChanged(bIsGhostMode);
}

void ATileActor::SetGhostColor(const FColor& NewColor)
{
	GhostMaterialInstance->SetVectorParameterValue(FName(TEXT("GhostColor")), NewColor);
}

void ATileActor::OnActorEntered_Implementation(AActor* EnteringActor, const FIntPoint& FromTile)
{
	// Add entering actor to contained actors list, if it is not already in list
	if(!ContainedActors.Contains(EnteringActor))
	{
		ContainedActors.Add(EnteringActor);
	}
}

void ATileActor::OnActorLeave_Implementation(AActor* LeavingActor, const FIntPoint& ToTile)
{
	// Remove the leaving actor from the contained actors list, 
	// if he enters a tile that is within this tile actor, then add it back in
	if(ContainedActors.Contains(LeavingActor))
	{
		ContainedActors.Remove(LeavingActor);

		TArray<FIntPoint> WorldTiledModel;
		GetWorldTiledModel(WorldTiledModel);
		for(const FIntPoint& Tile : WorldTiledModel)
		{
			if(Tile == ToTile)
			{
				ContainedActors.Add(LeavingActor);
				break;
			}
		}
	}
}

const TArray<FIntPoint>& ATileActor::GetTiledModel() const
{
	return TiledModel;
}

const TArray<AActor*>& ATileActor::GetContainedActors() const
{
	return ContainedActors;
}

void ATileActor::GetWorldTiledModel(TArray<FIntPoint>& OutModel) const
{
	GetTransformedTiledModel(OutModel, TileOrientation, TilePos);
}

void ATileActor::GetTransformedTiledModel(TArray<FIntPoint>& OutModel, ETileOrientation DesiredOrientation, const FIntPoint& DesiredTilePos) const
{
	OutModel.Empty();

	for(const FIntPoint& Tile : GetTiledModel())
	{
		float DeltaAngle = (int32)DesiredOrientation * 90.f;

		// Rotate tile based on orientation
		FVector RotatedTile = FVector(Tile).RotateAngleAxis(DeltaAngle, FVector(0.f, 0.f, 1.f));

		// Place tiled actor on oriented tile
		OutModel.Add(FIntPoint(FMath::RoundToInt(RotatedTile.X), FMath::RoundToInt(RotatedTile.Y)) + DesiredTilePos);
	}
}

void ATileActor::SetTileOrientation(ETileOrientation NewOrientation)
{
	TileOrientation = NewOrientation;

	UpdateActorLocation();
}

ETileOrientation ATileActor::GetTileOrientation() const
{
	return TileOrientation;
}

void ATileActor::SetTilePos(const FIntPoint& NewPos)
{
	TilePos = NewPos;

	UpdateActorLocation();
}

const FIntPoint& ATileActor::GetTilePos() const
{
	return TilePos;
}

void ATileActor::AddTileToModel(const FIntPoint& Tile)
{
	if(!TiledModel.Contains(Tile))
	{
		TiledModel.Add(Tile);
	}
}

void ATileActor::UpdateActorLocation()
{
	// Make tile actors rotation and location match its orientation
	SetActorRotation(FRotator(0.f, 90.f * (int32)TileOrientation, 0.f));
	FVector TileCenter = FVector(AHouse::TileSize / 2.f, AHouse::TileSize / 2.f, 0.f);
	FVector RotationOffset = -TileCenter;
	RotationOffset = RotationOffset.RotateAngleAxis(90.f * (int32)TileOrientation, FVector(0.f, 0.f, 1.f));

	SetActorLocation(AHouse::CalculateWorldPos(TilePos) + RotationOffset + TileCenter);
}

void ATileActor::OnGhostModeChanged_Implementation(bool bNewMode)
{

}
