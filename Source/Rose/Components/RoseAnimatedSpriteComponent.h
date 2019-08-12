// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/RoseSpriteComponent.h"
#include "RoseAnimatedSpriteComponent.generated.h"

/**
 * 
 */
UCLASS()
class ROSE_API URoseAnimatedSpriteComponent : public URoseSpriteComponent
{
	GENERATED_BODY()
	
private:
	float ElapsedTime;
	int32 CurrentFrame;

	UPROPERTY(BlueprintSetter="SetFrameCount")
	int32 FrameCount;
	UPROPERTY(BlueprintSetter="SetFPS")
	float FPS;

public:
	URoseAnimatedSpriteComponent();

	virtual void BeginPlay() override;

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

	UFUNCTION(BlueprintSetter)
		void SetFrameCount(int32 NewFrameCount);

	UFUNCTION(BlueprintSetter)
		void SetFPS(float NewFPS);

	UFUNCTION(BlueprintCallable)
		void SetFrame(int32 NewFrame);
};
