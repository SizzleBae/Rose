// Fill out your copyright notice in the Description page of Project Settings.

#include "TileOverlay.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/Material.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/Texture.h"
#include "House/House.h"

// Sets default values
ATileOverlay::ATileOverlay()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	PlaneMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName(TEXT("PlaneMesh")));
	PlaneMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// Center the plane mesh to the house
	PlaneMesh->SetWorldScale3D(FVector(0.01f * AHouse::TileSize * AHouse::MapSize, 0.01f * AHouse::TileSize * AHouse::MapSize, 1.f));
	PlaneMesh->SetWorldLocation(FVector(AHouse::MapSize * AHouse::TileSize * 0.5f, AHouse::MapSize * AHouse::TileSize * 0.5f, 1.f));

	// Set the plane mesh's static mesh
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneMeshFinder(TEXT("StaticMesh'/Engine/BasicShapes/Plane.Plane'"));
	if(PlaneMeshFinder.Succeeded())
	{
		UStaticMesh* PlaneMeshData = PlaneMeshFinder.Object;
		PlaneMesh->SetStaticMesh(PlaneMeshData);
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> TileOverlayMaterialFinder(TEXT("Material'/Game/Materials/M_TileOverlay.M_TileOverlay'"));
	if(TileOverlayMaterialFinder.Succeeded())
	{
		TileOverlayMaterial = TileOverlayMaterialFinder.Object;
	}

	// Prepare texture
	TileOverlayTexture = UTexture2D::CreateTransient(AHouse::MapSize, AHouse::MapSize);

	TileOverlayTexture->LODGroup = TextureGroup::TEXTUREGROUP_Pixels2D;
	TileOverlayTexture->MipGenSettings = TextureMipGenSettings::TMGS_NoMipmaps;
	TileOverlayTexture->LODBias = 0;
	TileOverlayTexture->CompressionSettings = TextureCompressionSettings::TC_EditorIcon;

	// Prepare data array
	TileOverlayData.AddZeroed(AHouse::MapSize * AHouse::MapSize * 4);
	RefreshOverlay();
}

// Called when the game starts or when spawned
void ATileOverlay::BeginPlay()
{
	Super::BeginPlay();

	// Create and assign material instance
	TileOverlayMaterialInstance = PlaneMesh->CreateDynamicMaterialInstance(0, TileOverlayMaterial);

	// Assign texture to material
	TileOverlayMaterialInstance->SetTextureParameterValue(FName(TEXT("TileColor")), TileOverlayTexture);

}

// Called every frame
void ATileOverlay::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATileOverlay::SetTileColor(const FIntPoint& TilePos, const FColor& Color)
{
	if(TilePos.X < 0 || TilePos.Y < 0 || TilePos.X >= AHouse::MapSize || TilePos.Y >= AHouse::MapSize)
	{
		// Out of bounds return and do nothing
		return;
	}

	TileOverlayData[4 * (TilePos.Y * AHouse::MapSize + TilePos.X) + 0] = Color.B;
	TileOverlayData[4 * (TilePos.Y * AHouse::MapSize + TilePos.X) + 1] = Color.G;
	TileOverlayData[4 * (TilePos.Y * AHouse::MapSize + TilePos.X) + 2] = Color.R;
	TileOverlayData[4 * (TilePos.Y * AHouse::MapSize + TilePos.X) + 3] = Color.A;
}

void ATileOverlay::ClearTileOverlay()
{
	TileOverlayData.Empty(AHouse::MapSize * AHouse::MapSize * 4);
	TileOverlayData.AddZeroed(AHouse::MapSize * AHouse::MapSize * 4);
}

void ATileOverlay::RefreshOverlay()
{
	uint8* Dest = (uint8*)TileOverlayTexture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);

	FMemory::Memcpy(Dest, TileOverlayData.GetData(), TileOverlayData.Num());

	TileOverlayTexture->PlatformData->Mips[0].BulkData.Unlock();
	TileOverlayTexture->UpdateResource();
}
