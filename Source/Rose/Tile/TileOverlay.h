// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TileOverlay.generated.h"

UCLASS()
class ROSE_API ATileOverlay : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY()
		class UStaticMeshComponent* PlaneMesh;

	UPROPERTY()
		class UMaterial* TileOverlayMaterial;

	UPROPERTY()
		class UMaterialInstanceDynamic* TileOverlayMaterialInstance;

	UPROPERTY()
		class UTexture2D* TileOverlayTexture;

	TArray<uint8> TileOverlayData;

public:	
	// Sets default values for this actor's properties
	ATileOverlay();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetTileColor(const FIntPoint& TilePos, const FColor& Color);
	void ClearTileOverlay();

	void RefreshOverlay();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
