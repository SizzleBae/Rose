// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Tile/TileActor.h"
#include "IGPlayerController.generated.h"

UENUM(BlueprintType)
enum class EPrimaryActionState : uint8
{
	PA_None UMETA(DisplayName = "None"),
	PA_Move UMETA(DisplayName = "Move"),
	PA_BuildRoom UMETA(DisplayName = "BuildRoom"),
	PA_RemoveRoom UMETA(DisplayName = "RemoveRoom"),
	PA_Spawn UMETA(DisplayName = "Spawn")
};

struct FLine2D
{
	FVector Position;
	FVector Direction;

	FLine2D()
		: Position(0.f, 0.f, 0.f)
		, Direction(0.f, 0.f, 0.f)
	{

	}

	FLine2D(FVector Position, FVector Direction)
		: Position(Position)
		, Direction(Direction)
	{

	}
};

UCLASS()
class AIGPlayerController : public APlayerController
{
	GENERATED_BODY()

private:
	UPROPERTY()
		class AIGAIPlayerController* AIPlayerController;

	UPROPERTY()
		class AIGPlayerCharacter* PlayerCharacter;

	UPROPERTY()
		class AIGPlayerCamera* PlayerCamera;

	UPROPERTY()
		class AIGGameMode* GameMode;

	UPROPERTY()
		class ATileOverlay* TileOverlay;

	TSubclassOf<class AIGPlayerCharacter> PlayerCharacterClass;

	EPrimaryActionState PrimaryActionState;

	FLine2D MousePressWorld;

	UClass* SelectedPlaceable;

	ETileOrientation BuildOrientation;

	UPROPERTY()
	ATileActor* BuildGhost;

public:
	AIGPlayerController();

	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetPrimaryActionState(EPrimaryActionState NewState);

	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetSelectedPlaceable(UClass* NewSelectedPlaceable);

protected:

	virtual void BeginPlay() override;

	// Begin PlayerController interface
	virtual void Tick(float DeltaTime) override;
	virtual void SetupInputComponent() override;
	// End PlayerController interface

	/** Navigate player to the current mouse cursor location. */
	void MoveToMouseCursor();

	/** Navigate player to the given world location. */
	void SetNewMoveDestination(const FVector Location);

	void GetTileBoxSelection(const FLine2D& Start, const FLine2D& End, TArray<FIntPoint>& OutTiles);

	/* Functions for receiving input */
	void OnPrimaryActionPressed();
	void OnPrimaryActionReleased();

	void OnMoveRight(float Value);
	void OnMoveForward(float Value);

	void OnRotatePlacement();

private:
	FIntPoint FindTileUnderMouse() const;
	FIntPoint RaycastTile(const FLine2D& Line) const;
	FIntPoint RaycastTile(const FVector& Location, const FVector& Direction) const;

	FLine2D GetMouseInWorld() const;

};
