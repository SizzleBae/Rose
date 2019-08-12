// Fill out your copyright notice in the Description page of Project Settings.

#include "InteractionCondition.h"

UInteractionCondition::UInteractionCondition()
{

}

UInteractionCondition::UInteractionCondition(AActor* _OwningActor)
	: OwningActor(_OwningActor)
{

}

bool UInteractionCondition::CheckCondition_Implementation(const AActor* TriggeringActor) const
{
	return false;
}

const AActor* const UInteractionCondition::GetOwningActor() const
{
	return OwningActor;
}
