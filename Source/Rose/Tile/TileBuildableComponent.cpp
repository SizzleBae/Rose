// Fill out your copyright notice in the Description page of Project Settings.

#include "TileBuildableComponent.h"
#include "Tile/TileActor.h"

TMap<FName, UClass*> UTileBuildableComponent::BuildableTileActors;

// Sets default values for this component's properties
UTileBuildableComponent::UTileBuildableComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	bWantsInitializeComponent = true;
}

void UTileBuildableComponent::BeginPlay()
{
	Super::BeginPlay();

	
}

void UTileBuildableComponent::InitializeComponent()
{
	Super::InitializeComponent();

}

// Called every frame
void UTileBuildableComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

const TMap<FName, UClass*>& UTileBuildableComponent::GetBuildableTileActors()
{
	return BuildableTileActors;
}
