// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/TankAIController.h"
#include "Engine/World.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("AI Controller Begin Play"));
	auto ControlledTank = GetControlledTank();
	auto PlayerTank = GetPlayerTank();
	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("NO Player TANK"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Controller =  %s"), *(PlayerTank->GetName()));

	}

}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AimTowardPlayer();
	//Fire if ready
}

void ATankAIController::AimTowardPlayer()
{
	if (!GetPlayerTank()) {
		return;
	}
	auto PlayerTank = GetPlayerTank();
	FVector AimLocation = PlayerTank->GetActorLocation();
	GetControlledTank()->AimAt(AimLocation);

	//UE_LOG(LogTemp, Warning, TEXT("Aiming At = %s"), *AimLocation.ToString());

	
}

ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

ATank* ATankAIController::GetPlayerTank() const
{
	auto PlayerController = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerController)
	{
		return nullptr;
	}
	else
	{
		return Cast<ATank>(PlayerController);
	}
}