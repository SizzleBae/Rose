// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "IGPlayerCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/RoseDirectionalSpriteComponent.h"
#include "Engine/CollisionProfile.h"
#include "Tile/TileTrackerComponent.h"
#include "Materials/Material.h"
#include "Engine/World.h"

AIGPlayerCharacter::AIGPlayerCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Create capsule component
	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(FName(TEXT("CapsuleComponent")));
	RootComponent = CapsuleComponent;
	CapsuleComponent->InitCapsuleSize(32.f, 64.f);
	CapsuleComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);

	CapsuleComponent->CanCharacterStepUpOn = ECB_No;
	CapsuleComponent->SetShouldUpdatePhysicsVolume(true);
	CapsuleComponent->SetCanEverAffectNavigation(false);
	CapsuleComponent->bDynamicObstacle = true;

	// Create sprite component
	SpriteComponent = CreateDefaultSubobject<URoseDirectionalSpriteComponent>(FName(TEXT("SpriteComponent")));
	SpriteComponent->SetSpriteWorldSize(FVector2D(64.f, 64.f));
	SpriteComponent->SetDirectionCount(4);
	SpriteComponent->SetFrameCount(8);
	SpriteComponent->SetFPS(8);
	SpriteComponent->SetupAttachment(CapsuleComponent);

	// Create character movement component
	PawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(FName(TEXT("PawnMovement")));
	PawnMovement->SetUpdatedComponent(CapsuleComponent);
	PawnMovement->MaxSpeed = 200.f;

	// Create tile tracker component
	TileTrackerComponent = CreateDefaultSubobject<UTileTrackerComponent>(FName(TEXT("TileTrackerComponent")));

	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

}

void AIGPlayerCharacter::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

	// Gravity
	PawnMovement->AddInputVector(FVector(0.f, 0.f, -1.f));

	// Make the character face the way it is moving, used for sprite rendering
	FVector PlaneVelocity = GetVelocity() * FVector(1.f, 1.f, 0.f);
	if(PlaneVelocity.SizeSquared() > 0.f)
	{
		SetActorRotation(PlaneVelocity.ToOrientationRotator());
	}
}

void AIGPlayerCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	PawnMovement->UpdateNavAgent(*CapsuleComponent);
}
