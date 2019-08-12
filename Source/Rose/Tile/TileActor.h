// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TileActor.generated.h"

UENUM(BlueprintType)
enum class ETileOrientation : uint8
{
	North UMETA(DisplayName = "North"),
	East UMETA(DisplayName = "East"),
	South UMETA(DisplayName = "South"),
	West UMETA(DisplayName = "West")
};

UCLASS()
class ROSE_API ATileActor : public AActor
{
	GENERATED_BODY()

private:
	FIntPoint TilePos;
	ETileOrientation TileOrientation;

	TArray<FIntPoint> TiledModel;

	TArray<AActor*> ContainedActors;

	TMap<UStaticMeshComponent*, UMaterialInterface*> IntermediateMaterials;

	bool bIsGhostMode;

	UPROPERTY()
	UMaterial* GhostMaterial;

	UPROPERTY()
	UMaterialInstanceDynamic* GhostMaterialInstance;

public:
	// Sets default values for this actor's properties
	ATileActor();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnActorEntered(AActor* EnteringActor, const FIntPoint& FromTile);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnActorLeave(AActor* LeavingActor, const FIntPoint& ToTile);

	void SetGhostMode(bool _bIsGhostMode);
	void SetGhostColor(const FColor& NewColor);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const TArray<FIntPoint>& GetTiledModel() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const TArray<AActor*>& GetContainedActors() const;

	void GetWorldTiledModel(TArray<FIntPoint>& OutModel) const;
	void GetTransformedTiledModel(TArray<FIntPoint>& OutModel, ETileOrientation DesiredOrientation, const FIntPoint& DesiredTilePos) const;

	void SetTileOrientation(ETileOrientation NewOrientation);
	ETileOrientation GetTileOrientation() const;

	void SetTilePos(const FIntPoint& NewPos);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FIntPoint& GetTilePos() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void AddTileToModel(const FIntPoint& Tile);

	UFUNCTION(BlueprintNativeEvent)
	void OnGhostModeChanged(bool bNewMode);

private:
	void UpdateActorLocation();

};
