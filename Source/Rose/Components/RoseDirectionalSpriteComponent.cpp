// Fill out your copyright notice in the Description page of Project Settings.

#include "RoseDirectionalSpriteComponent.h"
#include "Kismet/GameplayStatics.h" 
#include "Camera/PlayerCameraManager.h"
#include "Rose.h"

URoseDirectionalSpriteComponent::URoseDirectionalSpriteComponent()
{
	SetDirectionCount(4);
}

void URoseDirectionalSpriteComponent::BeginPlay()
{
	Super::BeginPlay();


}

void URoseDirectionalSpriteComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	float Angle = GetOwner()->GetActorRotation().Yaw - UGameplayStatics::GetPlayerCameraManager(this, 0)->GetCameraRotation().Yaw;
	
	Angle += (1.f / DirectionCount) * 0.5f * 360.f;

	// Force the angle between 0 and 360 deg
	Angle = Angle - (floor(Angle / 360.f) * 360.f);

	int32 RelativeDirection = (Angle / 360.f) * DirectionCount;

	SetSpriteSheetGridPosX(RelativeDirection);

}

void URoseDirectionalSpriteComponent::SetDirectionCount(int32 NewDirectionCount)
{
	DirectionCount = NewDirectionCount;

	SetSpriteSheetGridSizeX(DirectionCount);
}
