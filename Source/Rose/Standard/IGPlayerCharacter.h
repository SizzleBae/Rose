// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "IGPlayerCharacter.generated.h"

UCLASS(Blueprintable)
class AIGPlayerCharacter : public APawn
{
	GENERATED_BODY()

protected:
	//UPROPERTY()
	//class USceneComponent* SceneComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UTileTrackerComponent* TileTrackerComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UFloatingPawnMovement* PawnMovement;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UCapsuleComponent* CapsuleComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class URoseDirectionalSpriteComponent* SpriteComponent;

public:
	AIGPlayerCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	virtual void PostInitializeComponents() override;

};
