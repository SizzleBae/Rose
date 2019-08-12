// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InteractionAction.h"
#include "InteractionCondition.h"
#include "Interaction.generated.h"

/**
 * 
 */
UCLASS()
class ROSE_API UInteraction : public UObject
{
	GENERATED_BODY()

private:
	AActor* OwningActor;

	TArray<UInteractionAction> Actions;
	TArray<UInteractionCondition> Conditions;
	
public:
	UInteraction();
	UInteraction(AActor* _OwningActor);

	template<typename Type>
	void AddAction()
	{
		Actions.Add(Type(OwningActor));
	}

};
