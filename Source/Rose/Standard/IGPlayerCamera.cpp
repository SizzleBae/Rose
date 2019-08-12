// Fill out your copyright notice in the Description page of Project Settings.

#include "IGPlayerCamera.h"

#include "Components/DecalComponent.h"
#include "House/House.h"
#include "Camera/CameraComponent.h"

// Sets default values
AIGPlayerCamera::AIGPlayerCamera()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	SceneComponent->SetRelativeLocation(FVector(0.f, 0.f, 0.f));

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SceneComponent);
	Camera->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
	Camera->SetRelativeRotation(FRotator(-50.f, 0.f, 0.f));

	RootComponent = SceneComponent;

	// Create a decal in the world to show the cursor's location
	CursorToWorld = CreateDefaultSubobject<UDecalComponent>("CursorToWorld");
	CursorToWorld->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UMaterial> DecalMaterialAsset(TEXT("Material'/Game/Materials/M_Cursor_Decal.M_Cursor_Decal'"));
	if(DecalMaterialAsset.Succeeded())
	{
		CursorToWorld->SetDecalMaterial(DecalMaterialAsset.Object);
	}
	CursorToWorld->DecalSize = FVector(16.0f, 32.0f, 32.0f);
	CursorToWorld->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f).Quaternion());

	MovementSpeed = 400.f;
}

// Called when the game starts or when spawned
void AIGPlayerCamera::BeginPlay()
{
	Super::BeginPlay();

	SetActorLocationAndRotation(FVector(AHouse::TileSize * AHouse::MapSize * 0.5f, AHouse::TileSize * AHouse::MapSize * 0.5f, 200.f), FRotator(0.f, 0.f, 0.f));
}

// Called every frame
void AIGPlayerCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Consume movement input
	FVector MovementInput = ConsumeMovementInputVector();
	MovementInput.Normalize();

	AddActorLocalOffset(MovementInput * MovementSpeed * DeltaTime);

	// Update cursor decal
	if(CursorToWorld != nullptr)
	{
		if(APlayerController* PC = Cast<APlayerController>(GetController()))
		{
			FHitResult TraceHitResult;
			PC->GetHitResultUnderCursor(ECC_Visibility, true, TraceHitResult);
			FVector CursorFV = TraceHitResult.ImpactNormal;
			FRotator CursorR = CursorFV.Rotation();
			CursorToWorld->SetWorldLocation(TraceHitResult.Location);
			CursorToWorld->SetWorldRotation(CursorR);
		}
	}
}

// Called to bind functionality to input
void AIGPlayerCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
