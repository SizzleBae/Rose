// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HouseBuilder.generated.h"

USTRUCT(Blueprintable)
struct ROSE_API FTileData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsOpen = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsWall = false;

};

UCLASS()
class ROSE_API AHouseBuilder : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "HouseBuilder")
	class UProceduralMeshComponent* BuildingMesh;

private:
	TArray<FTileData> OpenMap;

protected:
	UPROPERTY(EditDefaultsOnly, Category = "HouseBuilder")
	int32 TilesPerUV;

public:
	// Sets default values for this actor's properties
	AHouseBuilder();

	void GenerateTestHouse();

	UFUNCTION(BlueprintCallable, Category = "HouseBuilder")
	void SetTile(int32 X, int32 Y, const FTileData& NewTile);

	UFUNCTION(BlueprintCallable, Category = "HouseBuilder")
	void SetTileIsOpen(int32 X, int32 Y, bool bIsOpen);

	UFUNCTION(BlueprintCallable, Category = "HouseBuilder")
	FTileData GetTile(int32 X, int32 Y) const;

	UFUNCTION(BlueprintCallable, Category = "HouseBuilder")
	void RebuildHouseMesh();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FTileData* GetEditableTile(int32 X, int32 Y);

private:
	void InstantiateHouseBuilder();

	void SubmitFloorMesh();

	void SubmitWallMesh();

	void AddQuad(const FVector& v1, 
		const FVector& v2, 
		const FVector& v3, 
		const FVector& v4, 
		TArray<FVector>& Vertices, 
		TArray<int32>& Triangles, 
		TArray<FVector>& Normals, 
		TArray<FVector2D>& UV0,
		float UVScale = 1.f);

};
