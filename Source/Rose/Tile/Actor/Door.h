// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tile/TileActor.h"
#include "Door.generated.h"

/**
 * 
 */
UCLASS()
class ROSE_API ADoor : public ATileActor
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	class USceneComponent* SceneComponent;

	UPROPERTY(BlueprintReadOnly)
	class UBoxComponent* DoorBounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* DoorMesh;

public:
	ADoor();

	virtual void OnActorEntered_Implementation(AActor* EnteringActor, const FIntPoint& FromTile) override;

	virtual void OnActorLeave_Implementation(AActor* LeavingActor, const FIntPoint& ToTile) override;

protected:
	virtual void BeginPlay() override;

};
