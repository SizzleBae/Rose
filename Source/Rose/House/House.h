// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "House.generated.h"

UCLASS()
class ROSE_API AHouse : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY()
	class AHouseBuilder* HouseBuilder;

	UPROPERTY()
	class UTileActorHolder* TileActorHolder;

	// BP Classes
	TSubclassOf<class AHouseBuilder> HouseBuilderClass;

public:
	static const int32 MapSize;
	static const float TileSize;
	static const float WallHeight;

public:	
	// Sets default values for this actor's properties
	AHouse();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	static FIntPoint CalculateTilePos(const FVector& WorldPos);
	static FVector CalculateWorldPos(const FIntPoint& TilePos);
	static FVector CalculateCenterWorldPos(const FIntPoint& TilePos);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "House")
		static float GetTileSize();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "House")
		static int32 GetMapSize();

	UFUNCTION(BlueprintCallable, Category = "House")
	class AHouseBuilder* GetHouseBuilder() const;
	UFUNCTION(BlueprintCallable, Category = "House")
	class UTileActorHolder* GetTileActorHolder() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
