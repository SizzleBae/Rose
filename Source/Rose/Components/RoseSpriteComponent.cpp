// Fill out your copyright notice in the Description page of Project Settings.

#include "RoseSpriteComponent.h"
#include "Kismet/GameplayStatics.h" 
#include "Camera/PlayerCameraManager.h"
#include "Materials/Material.h"
#include "Components/CapsuleComponent.h"

URoseSpriteComponent::URoseSpriteComponent()
{
	SetCollisionEnabled(ECollisionEnabled::NoCollision);

	PrimaryComponentTick.TickGroup = ETickingGroup::TG_PrePhysics;
	PrimaryComponentTick.bCanEverTick = true;
	bAutoActivate = true;
	SetComponentTickEnabled(true);

	SpriteSheetGridSize = FIntPoint(1, 1);
	SpriteSheetGridPos = FIntPoint(0, 0);

	bAbsoluteRotation = true;
	bEnableSpriteCollision = false;

	// Set the static mesh to be a plane
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneMeshObject(TEXT("StaticMesh'/Engine/BasicShapes/Plane'"));
	if(PlaneMeshObject.Succeeded())
	{
		SetStaticMesh(PlaneMeshObject.Object);
	}

	static ConstructorHelpers::FObjectFinder<UTexture2D> SpriteDefaultTextureObject(TEXT("Texture2D'/Game/Textures/SpriteSheet_Rose'"));
	if(SpriteDefaultTextureObject.Succeeded())
	{
		SpriteTexture = SpriteDefaultTextureObject.Object;
	}

	// Set the material to be the sprite material
	static ConstructorHelpers::FObjectFinder<UMaterial> SpriteMaterialObject(TEXT("Material'/Game/Materials/M_RoseSpriteMaterial'"));
	if(SpriteMaterialObject.Succeeded())
	{
		SpriteMaterialParent = SpriteMaterialObject.Object;
	}
}

void URoseSpriteComponent::BeginPlay()
{
	Super::BeginPlay();

	// Set the material to be the sprite material
	SpriteMaterialInstance = CreateDynamicMaterialInstance(0, SpriteMaterialParent, FName(TEXT("SpriteMaterialInstance")));

	SetSpriteTexture(SpriteTexture);
	SetSpriteSheetGridSize(SpriteSheetGridSize);
	SetSpriteSheetGridPos(SpriteSheetGridPos);

}

void URoseSpriteComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Billboard the sprite
	FRotator CameraRotation = UGameplayStatics::GetPlayerCameraManager(this, 0)->GetCameraRotation();
	FRotator SpriteRotation = FRotator(CameraRotation.Roll, CameraRotation.Yaw + 90.f, CameraRotation.Pitch + 90.f);

	SetWorldRotation(SpriteRotation);

	// Sprite collision manipulates the capsule collision component of the owner to match the sprite's rendered height
	if(bEnableSpriteCollision)
	{
		UCapsuleComponent* Capsule = Cast<UCapsuleComponent>(GetOwner()->FindComponentByClass<UCapsuleComponent>());
	
		if(IsValid(Capsule))
		{
			float SpriteActualHeight = FMath::Abs(FMath::Sin(FMath::DegreesToRadians(SpriteRotation.Roll))) * (WorldSize.Y / 2.f);

			Capsule->SetCapsuleHalfHeight(SpriteActualHeight);
		}
	}

}

void URoseSpriteComponent::SetSpriteTexture(UTexture2D* InSpriteTexture)
{
	SpriteTexture = InSpriteTexture;

	// Update material texture parameter
	SpriteMaterialInstance->SetTextureParameterValue(FName(TEXT("SpriteTexture")), SpriteTexture);

}

void URoseSpriteComponent::SetSpriteSheetGridSize(const FIntPoint& InSpriteSheetGridSize)
{
	SpriteSheetGridSize = InSpriteSheetGridSize;

	// Update UVs
	UpdateSpriteUVs();

}

void URoseSpriteComponent::SetSpriteSheetGridSizeX(int32 NewX)
{
	SpriteSheetGridSize.X = NewX;

	UpdateSpriteUVs();
}

void URoseSpriteComponent::SetSpriteSheetGridSizeY(int32 NewY)
{
	SpriteSheetGridSize.Y = NewY;

	UpdateSpriteUVs();
}

void URoseSpriteComponent::SetSpriteSheetGridPos(const FIntPoint& InSpriteSheetGridPos)
{
	SpriteSheetGridPos = InSpriteSheetGridPos;

	UpdateSpriteUVs();
}

void URoseSpriteComponent::SetSpriteSheetGridPosX(int32 NewX)
{
	SpriteSheetGridPos.X = NewX;

	UpdateSpriteUVs();
}

void URoseSpriteComponent::SetSpriteSheetGridPosY(int32 NewY)
{
	SpriteSheetGridPos.Y = NewY;

	UpdateSpriteUVs();
}

void URoseSpriteComponent::SetSpriteWorldSize(const FVector2D& _WorldSize)
{
	WorldSize = _WorldSize;

	// Update plane size
	FVector Scale = FVector(0.01f * (WorldSize.X), 0.01f * (WorldSize.Y), 1.f);
	SetWorldScale3D(Scale);

}

void URoseSpriteComponent::UpdateSpriteUVs()
{
	if(!IsValid(SpriteMaterialInstance))
	{
		return;
	}

	// Update UVs
	SpriteMaterialInstance->SetScalarParameterValue(FName(TEXT("Tile U")), 1.f / SpriteSheetGridSize.X);
	SpriteMaterialInstance->SetScalarParameterValue(FName(TEXT("Tile V")), 1.f / SpriteSheetGridSize.Y);
	SpriteMaterialInstance->SetScalarParameterValue(FName(TEXT("Shift U")), (1.f / SpriteSheetGridSize.X) * SpriteSheetGridPos.X);
	SpriteMaterialInstance->SetScalarParameterValue(FName(TEXT("Shift V")), (1.f / SpriteSheetGridSize.Y) * SpriteSheetGridPos.Y);

}
