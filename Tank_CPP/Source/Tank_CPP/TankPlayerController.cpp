// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"
#include "Engine/World.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Player Controller Begin Play"));
	auto ControlledTank = GetControlledTank();
	if (!ControlledTank) 
	{
		UE_LOG(LogTemp, Warning, TEXT("NO TANK"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Possesing %s"), *(ControlledTank->GetName()));
	}
	
}
void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick( DeltaTime );
	AimTowardCrosshair();
}
void ATankPlayerController::AimTowardCrosshair()
{
	if (!GetControlledTank()) {
		return;
	}
	
	FVector OutHitLocation; // Out parameter

	if (GetSightRayHitLocation(OutHitLocation)) // is going to line-trace
	{
		GetControlledTank()->AimAt(OutHitLocation);
	}
	else
	{
		return;
	}
}

bool ATankPlayerController::GetSightRayHitLocation(FVector& OutHitLocation) const
{
	// find crosshair position
	int32 ViewportSizeX, ViewportSizeY;

	// Get Viewport Size
	GetViewportSize(ViewportSizeX, ViewportSizeY);

	//Find Screen Location of Crosshair
	auto ScreenLocation = FVector2D( ViewportSizeX * CrossHairXLocation, ViewportSizeY * CrossHairYLocation );
	// UE_LOG(LogTemp, Warning, TEXT("Screen Location = %s"), *ScreenLocation.ToString());
	

	// De-project the screen prosition of the crosshair to a world direction
	FVector LookDirection;
	if (GetLookDirection(ScreenLocation, LookDirection))
	{
		//UE_LOG(LogTemp, Warning, TEXT("Look Direction = %s"), *LookDirection.ToString());

		// line-trace along that look direction, and see what we hit (up to max range)
		GetLookVectorHitLocation(LookDirection, OutHitLocation);		
	}
	
	
	return true;
}

bool ATankPlayerController::GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const
{
	FVector WorldLocation;
	return DeprojectScreenPositionToWorld(
		ScreenLocation.X,
		ScreenLocation.Y,
		WorldLocation,
		LookDirection
	);
}
bool ATankPlayerController::GetLookVectorHitLocation(FVector LookDirection, FVector& OutHitLocation) const
{
	
	FHitResult HitResult;
	auto StartLocation = PlayerCameraManager->GetCameraLocation();
	auto EndLocation = StartLocation + (LookDirection * LineTraceRange);
	
	if (GetWorld()->LineTraceSingleByChannel(
		HitResult,
		StartLocation,
		EndLocation,
		ECollisionChannel::ECC_Visibility)
		)
	{
		OutHitLocation = HitResult.Location;
		return true;
	}
	return false;
}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}