// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tile/TileActor.h"
#include "SpringTrap.generated.h"

/**
 * 
 */
UCLASS()
class ROSE_API ASpringTrap : public ATileActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite)
	class UTileBuildableComponent* TileBuildableComponent;

public:
	ASpringTrap();

	virtual void OnActorEntered_Implementation(AActor* EnteringActor, const FIntPoint& FromTile) override;

	virtual void OnActorLeave_Implementation(AActor* LeavingActor, const FIntPoint& ToTile) override;

protected:
	virtual void BeginPlay() override;

};
