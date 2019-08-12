// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InteractionCondition.generated.h"

/**
 * 
 */
UCLASS()
class ROSE_API UInteractionCondition : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
		AActor* OwningActor;

public:
	UInteractionCondition();
	UInteractionCondition(AActor* _OwningActor);

protected:
	UFUNCTION(BlueprintNativeEvent)
	bool CheckCondition(const AActor* TriggeringActor) const;

	const AActor* const GetOwningActor() const;
};
