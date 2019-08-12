// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "RoseSpriteComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ROSE_API URoseSpriteComponent : public UStaticMeshComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	UMaterial* SpriteMaterialParent;

	UPROPERTY()
	UMaterialInstanceDynamic* SpriteMaterialInstance;

	UPROPERTY(EditAnywhere, BlueprintSetter="SetSpriteTexture")
	UTexture2D* SpriteTexture;

	UPROPERTY(EditAnywhere, BlueprintSetter="SetSpriteSheetGridSize")
	FIntPoint SpriteSheetGridSize;

	UPROPERTY(EditAnywhere, BlueprintSetter="SetSpriteSheetGridPos")
	FIntPoint SpriteSheetGridPos;

	UPROPERTY(EditAnywhere)
	bool bEnableSpriteCollision;

	FVector2D WorldSize;

public:
	URoseSpriteComponent();

	virtual void BeginPlay() override;

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

	UFUNCTION(BlueprintSetter)
	void SetSpriteTexture(UTexture2D* InSpriteTexture);

	UFUNCTION(BlueprintSetter)
	void SetSpriteSheetGridSize(const FIntPoint& InSpriteSheetGridSize);

	void SetSpriteSheetGridSizeX(int32 NewX);
	void SetSpriteSheetGridSizeY(int32 NewY);

	UFUNCTION(BlueprintSetter)
	void SetSpriteSheetGridPos(const FIntPoint& InSpriteSheetGridPos);

	void SetSpriteSheetGridPosX(int32 NewX);
	void SetSpriteSheetGridPosY(int32 NewY);

	void SetSpriteWorldSize(const FVector2D& WorldSize);

private:
	void UpdateSpriteUVs();

};
