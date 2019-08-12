// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TileBuildableComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ROSE_API UTileBuildableComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	static TMap<FName, UClass*> BuildableTileActors;

public:	
	// Sets default values for this component's properties
	UTileBuildableComponent();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="TileBuild")
	static const TMap<FName, UClass*>& GetBuildableTileActors();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

		
public:
	virtual void InitializeComponent() override;

};
