// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "IGPlayerController.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "IGPlayerCharacter.h"
#include "IGGameMode.h"
#include "IGAIPlayerController.h"
#include "IGPlayerCamera.h"
#include "House/HouseBuilder.h"
#include "House/House.h"
#include "Tile/TileActorHolder.h"
#include "Engine/World.h"
#include "Tile/TileOverlay.h"
#include "UObject/ConstructorHelpers.h"

AIGPlayerController::AIGPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;

	PrimaryActionState = EPrimaryActionState::PA_Move;
	SelectedPlaceable = nullptr;

	BuildOrientation = ETileOrientation::East;

	// Get the blueprint class for the player character
	static ConstructorHelpers::FClassFinder<APawn> PlayerCharacterBP(TEXT("/Game/Blueprints/Standard/BP_IGPlayerCharacter"));
	if(PlayerCharacterBP.Succeeded())
	{
		PlayerCharacterClass = PlayerCharacterBP.Class;
	}

}

void AIGPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// Get the game mode
	GameMode = GetWorld()->GetAuthGameMode<AIGGameMode>();

	// Get camera pawn
	PlayerCamera = Cast<AIGPlayerCamera>(GetPawn());

	// Spawn AI controller to controll the actual player pawn
	AIPlayerController = GetWorld()->SpawnActor<AIGAIPlayerController>(FVector(0.f), FRotator(0.f));

	// Spawn actual player character
	PlayerCharacter = GetWorld()->SpawnActor<AIGPlayerCharacter>(PlayerCharacterClass, FVector(AHouse::MapSize * AHouse::TileSize * 0.5f, AHouse::MapSize * AHouse::TileSize * 0.5f, 300.f), FRotator(0.f));

	// Make the AI controller possess the new player pawn
	AIPlayerController->Possess(PlayerCharacter);

	TileOverlay = GetWorld()->SpawnActor<ATileOverlay>();

}

void AIGPlayerController::Tick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	TileOverlay->ClearTileOverlay();
	if(PrimaryActionState == EPrimaryActionState::PA_Spawn && IsValid(SelectedPlaceable))
	{
		// Make sure that the build ghost has been created and represents the chosen class
		if(!BuildGhost || BuildGhost->GetClass() != SelectedPlaceable)
		{
			if(IsValid(BuildGhost))
			{
				BuildGhost->Destroy();
			}

			BuildGhost = Cast<ATileActor>(GetWorld()->SpawnActor(SelectedPlaceable));
			BuildGhost->SetGhostMode(true);
		}

		// Update orientation and position based on user input
		BuildGhost->SetTileOrientation(BuildOrientation);
		BuildGhost->SetTilePos(FindTileUnderMouse());

		// Update overlay
		bool bIsBuildable = true;
		TArray<FIntPoint> WorldModel;
		BuildGhost->GetWorldTiledModel(WorldModel);
		for(const FIntPoint& Tile : WorldModel)
		{
			if(GameMode->GetHouse()->GetHouseBuilder()->GetTile(Tile.X, Tile.Y).bIsOpen &&
				!(GameMode->GetHouse()->GetTileActorHolder()->GetTileActor(Tile)))

			{
				// If tile is buildable, set color to be green
				TileOverlay->SetTileColor(Tile, FColor(0, 255, 0));
			}
			else
			{
				// If tile is not buildable, set color to be red
				TileOverlay->SetTileColor(Tile, FColor(255, 0, 0));
				bIsBuildable = false;
			}
		}

		// Update ghost color to match buildability
		if(bIsBuildable)
		{
			BuildGhost->SetGhostColor(FColor(0, 255, 0));
		}
		else
		{
			BuildGhost->SetGhostColor(FColor(255, 0, 0));
		}
	}
	else if(BuildGhost)
	{
		BuildGhost->Destroy();
		BuildGhost = nullptr;
	}
	TileOverlay->RefreshOverlay();

}

void AIGPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	// Action bindings
	InputComponent->BindAction("PrimaryAction", IE_Pressed, this, &AIGPlayerController::OnPrimaryActionPressed);
	InputComponent->BindAction("PrimaryAction", IE_Released, this, &AIGPlayerController::OnPrimaryActionReleased);
	InputComponent->BindAction("RotatePlacement", IE_Pressed, this, &AIGPlayerController::OnRotatePlacement);

	// Axis bindings
	InputComponent->BindAxis("MoveRight", this, &AIGPlayerController::OnMoveRight);
	InputComponent->BindAxis("MoveForward", this, &AIGPlayerController::OnMoveForward);
}

void AIGPlayerController::MoveToMouseCursor()
{

	// Trace to see what is under the mouse cursor
	FHitResult Hit;
	GetHitResultUnderCursor(ECC_Visibility, false, Hit);

	if (Hit.bBlockingHit)
	{
		// We hit something, move there
		SetNewMoveDestination(Hit.ImpactPoint);
	}
}

void AIGPlayerController::SetNewMoveDestination(const FVector Location)
{
	APawn* const MyPawn = GetPawn();
	if (MyPawn)
	{
		float const Distance = FVector::Dist(Location, MyPawn->GetActorLocation());

		// We need to issue move command only if far enough in order for walk animation to play correctly
		if (Distance > 120.0f)
		{
			AIPlayerController->MoveToLocation(Location);
		}
	}
}

void AIGPlayerController::GetTileBoxSelection(const FLine2D& Start, const FLine2D& End, TArray<FIntPoint>& OutTiles)
{
	// Make sure to empty the out list
	OutTiles.Empty();

	// Find the tiles intersecting the input lines
	FIntPoint TileStart = RaycastTile(Start);
	FIntPoint TileEnd = RaycastTile(End);

	// Sort from smallest to biggest
	FIntPoint Min;
	FIntPoint Max;
	if(TileStart.X < TileEnd.X)
	{
		Min.X = TileStart.X;
		Max.X = TileEnd.X;
	}
	else
	{
		Min.X = TileEnd.X;
		Max.X = TileStart.X;
	}
	if(TileStart.Y < TileEnd.Y)
	{
		Min.Y = TileStart.Y;
		Max.Y = TileEnd.Y;
	}
	else
	{
		Min.Y = TileEnd.Y;
		Max.Y = TileStart.Y;
	}

	// Find all the tiles contained inside the tile
	for(int32 X = Min.X; X <= Max.X; X++)
	{
		for(int32 Y = Min.Y; Y <= Max.Y; Y++)
		{
			OutTiles.Add(FIntPoint(X, Y));
		}
	}
}

void AIGPlayerController::OnPrimaryActionPressed()
{
	switch(PrimaryActionState)
	{
	case EPrimaryActionState::PA_Move:
		MoveToMouseCursor();
		break;
	case EPrimaryActionState::PA_BuildRoom:
		MousePressWorld = GetMouseInWorld();
		break;
	case EPrimaryActionState::PA_RemoveRoom:
		MousePressWorld = GetMouseInWorld();
		break;
	case EPrimaryActionState::PA_Spawn:
		// Spawn new selected placeable
		if(SelectedPlaceable)
		{
			ATileActor* NewPlaceable = Cast<ATileActor>(GetWorld()->SpawnActor(SelectedPlaceable));

			if(!GameMode->GetHouse()->GetTileActorHolder()->PlaceTileActor(NewPlaceable, FindTileUnderMouse(), BuildOrientation))
			{
				NewPlaceable->Destroy();
			}
		}
		break;
	}
}

void AIGPlayerController::OnPrimaryActionReleased()
{
	TArray<FIntPoint> SelectedTiles;

	switch(PrimaryActionState)
	{
	case EPrimaryActionState::PA_Move:
		MoveToMouseCursor();
		break;
	case EPrimaryActionState::PA_BuildRoom:
		GetTileBoxSelection(MousePressWorld, GetMouseInWorld(), SelectedTiles);

		for(const FIntPoint& Tile : SelectedTiles)
		{
			GameMode->GetHouse()->GetHouseBuilder()->SetTileIsOpen(Tile.X, Tile.Y, true);
		}

		GameMode->GetHouse()->GetHouseBuilder()->RebuildHouseMesh();
		break;
	case EPrimaryActionState::PA_RemoveRoom:
		GetTileBoxSelection(MousePressWorld, GetMouseInWorld(), SelectedTiles);

		for(const FIntPoint& Tile : SelectedTiles)
		{
			GameMode->GetHouse()->GetHouseBuilder()->SetTileIsOpen(Tile.X, Tile.Y, false);
		}

		GameMode->GetHouse()->GetHouseBuilder()->RebuildHouseMesh();
		break;
	}
}

void AIGPlayerController::OnMoveRight(float Value)
{
	PlayerCamera->AddMovementInput(PlayerCamera->GetActorRightVector(), Value);
}

void AIGPlayerController::OnMoveForward(float Value)
{
	PlayerCamera->AddMovementInput(PlayerCamera->GetActorForwardVector(), Value);
}

void AIGPlayerController::OnRotatePlacement()
{
	BuildOrientation = (ETileOrientation)((int32)BuildOrientation + 1);
	
	if(BuildOrientation > ETileOrientation::West)
	{
		BuildOrientation = ETileOrientation::North;
	}
}

FIntPoint AIGPlayerController::FindTileUnderMouse() const
{
	// Raycast mouse orientation to tile grid, and return result
	return RaycastTile(GetMouseInWorld());
	
}

FIntPoint AIGPlayerController::RaycastTile(const FVector& Location, const FVector& Direction) const
{
	// Project ray onto tile
	FVector PlanePos = FMath::LinePlaneIntersection(Location, Location + Direction, FVector(0.f, 0.f, 0.f), FVector(0.f, 0.f, 1.f));

	// Find the tile position from plane world point
	PlanePos /= AHouse::TileSize;

	// Trunctuate and return value
	return FIntPoint(FMath::TruncToInt(PlanePos.X), FMath::TruncToInt(PlanePos.Y));

}

FIntPoint AIGPlayerController::RaycastTile(const FLine2D& Line) const
{
	return RaycastTile(Line.Position, Line.Direction);
}

FLine2D AIGPlayerController::GetMouseInWorld() const
{
	// First, find the mouse's world location and direction
	FVector MouseWorldLocation;
	FVector MouseWorldDirection;
	DeprojectMousePositionToWorld(MouseWorldLocation, MouseWorldDirection);

	return FLine2D(MouseWorldLocation, MouseWorldDirection);
}

void AIGPlayerController::SetPrimaryActionState(EPrimaryActionState NewState)
{
	PrimaryActionState = NewState;
}

void AIGPlayerController::SetSelectedPlaceable(UClass* NewSelectedPlaceable)
{
	SelectedPlaceable = NewSelectedPlaceable;
}