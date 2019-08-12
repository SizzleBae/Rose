// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InteractionAction.generated.h"

/**
 * 
 */
UCLASS()
class ROSE_API UInteractionAction : public UObject
{
	GENERATED_BODY()

private:
	AActor* OwningActor;

public:
	UInteractionAction();
	UInteractionAction(AActor* _OwningActor);

	UFUNCTION(BlueprintNativeEvent)
	void ExecuteAction(AActor* TriggeringActor);
};
