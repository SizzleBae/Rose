// Fill out your copyright notice in the Description page of Project Settings.

#include "SpringTrap.h"
#include "Tile/TileBuildableComponent.h"

ASpringTrap::ASpringTrap()
{

	TileBuildableComponent = CreateDefaultSubobject<UTileBuildableComponent>(FName(TEXT("TileBuildableComponent")));

}

void ASpringTrap::BeginPlay()
{
	Super::BeginPlay();

	AddTileToModel(FIntPoint(0, 0));
	AddTileToModel(FIntPoint(1, 0));
	AddTileToModel(FIntPoint(0, 1));
	AddTileToModel(FIntPoint(-1, 0));
	AddTileToModel(FIntPoint(0, -1));
}

void ASpringTrap::OnActorEntered_Implementation(AActor* EnteringActor, const FIntPoint& FromTile)
{
	if(!GetContainedActors().Contains(EnteringActor))
	{
		EnteringActor->AddActorWorldOffset(FVector(0.f, 0.f, 200.f));
	}

	Super::OnActorEntered_Implementation(EnteringActor, FromTile);

}

void ASpringTrap::OnActorLeave_Implementation(AActor* LeavingActor, const FIntPoint& ToTile)
{
	Super::OnActorLeave_Implementation(LeavingActor, ToTile);

}
