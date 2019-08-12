// Fill out your copyright notice in the Description page of Project Settings.

#include "Door.h"
#include "House/House.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

ADoor::ADoor()
{
	SceneComponent = CreateDefaultSubobject<USceneComponent>(FName(TEXT("SceneComponent")));
	RootComponent = SceneComponent;

	DoorBounds = CreateDefaultSubobject<UBoxComponent>(FName(TEXT("DoorBounds")));

	DoorBounds->SetBoxExtent(FVector(AHouse::TileSize / 2.f, (AHouse::TileSize * 4.f) / 2.f, AHouse::WallHeight / 2.f));
	DoorBounds->SetRelativeLocation(DoorBounds->GetUnscaledBoxExtent());
	DoorBounds->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	DoorBounds->AttachToComponent(SceneComponent, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));

	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName(TEXT("DoorMesh")));


}

void ADoor::BeginPlay()
{
	Super::BeginPlay();

	for(int32 X = -4; X < 4; X++)
	{
		for(int32 Y = 0; Y < 4; Y++)
		{
			AddTileToModel(FIntPoint(X, Y));
		}
	}
}

void ADoor::OnActorEntered_Implementation(AActor* EnteringActor, const FIntPoint& FromTile)
{
	if(!GetContainedActors().Contains(EnteringActor))
	{
		SceneComponent->AddWorldRotation(FRotator(0.f, 90.f, 0.f));
	}

	Super::OnActorEntered_Implementation(EnteringActor, FromTile);

}

void ADoor::OnActorLeave_Implementation(AActor* LeavingActor, const FIntPoint& ToTile)
{
	Super::OnActorLeave_Implementation(LeavingActor, ToTile);

	TArray<FIntPoint> WorldTiledModel;
	GetWorldTiledModel(WorldTiledModel);
	if(!WorldTiledModel.Contains(ToTile))
	{
		SceneComponent->AddWorldRotation(FRotator(0.f, -90.f, 0.f));
	}
}
