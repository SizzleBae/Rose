// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/RoseAnimatedSpriteComponent.h"
#include "RoseDirectionalSpriteComponent.generated.h"

/**
 * 
 */
UCLASS()
class ROSE_API URoseDirectionalSpriteComponent : public URoseAnimatedSpriteComponent
{
	GENERATED_BODY()
	
private:
	int32 DirectionCount;

public:
	URoseDirectionalSpriteComponent();

	virtual void BeginPlay() override;

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetDirectionCount(int32 NewDirectionCount);

};
