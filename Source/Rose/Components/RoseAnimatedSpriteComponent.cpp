// Fill out your copyright notice in the Description page of Project Settings.

#include "RoseAnimatedSpriteComponent.h"

URoseAnimatedSpriteComponent::URoseAnimatedSpriteComponent()
{
	SetFrameCount(1);
	SetFPS(1);

	ElapsedTime = 0.f;
	CurrentFrame = 0;
}

void URoseAnimatedSpriteComponent::BeginPlay()
{
	Super::BeginPlay();


}

void URoseAnimatedSpriteComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	ElapsedTime += DeltaTime;
	while(ElapsedTime >= (1.f / FPS))
	{
		ElapsedTime -= (1.f / FPS);

		SetFrame(CurrentFrame + 1);
	}
}

void URoseAnimatedSpriteComponent::SetFrame(int32 NewFrame)
{
	CurrentFrame = NewFrame;
	if(CurrentFrame >= FrameCount)
	{
		CurrentFrame = CurrentFrame % FrameCount;
	}

	SetSpriteSheetGridPosY(CurrentFrame);
}

void URoseAnimatedSpriteComponent::SetFrameCount(int32 NewFrameCount)
{
	FrameCount = NewFrameCount;

	SetSpriteSheetGridSizeY(FrameCount);
}

void URoseAnimatedSpriteComponent::SetFPS(float NewFPS)
{
	FPS = NewFPS;
}