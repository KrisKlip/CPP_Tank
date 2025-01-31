// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Public/Tank.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class TANK_CPP_API ATankAIController : public AAIController
{
	GENERATED_BODY()

private:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	ATank* GetControlledTank() const;
	
	
	ATank* GetPlayerTank() const;

	void AimTowardPlayer();
};
