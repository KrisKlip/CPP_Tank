// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/TankAimComponent.h"
#include "Public/TankBarrel.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UTankAimComponent::UTankAimComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UTankAimComponent::SetBarrelReference(UTankBarrel* BarrelToSet)
{
	Barrel = BarrelToSet;
}

void UTankAimComponent::AimAt(FVector OutHitLocation, float LaunchSpeed)
{
	
	if (!Barrel) {
		return;
	}

	auto OurTankName = GetOwner()->GetName();
	auto BarrelLocation = Barrel->GetComponentLocation();

	FVector OutLaunchVelocity;
	FVector StartLocation = Barrel->GetSocketLocation(FName("Projectile"));
	bool bHaveAimSolution = UGameplayStatics::SuggestProjectileVelocity
	(
		this,
		OutLaunchVelocity,
		StartLocation,
		OutHitLocation,
		LaunchSpeed,
		ESuggestProjVelocityTraceOption::DoNotTrace
	);

	if(bHaveAimSolution)
	{
		auto AimDirection = OutLaunchVelocity.GetSafeNormal();
		UE_LOG(LogTemp, Warning, TEXT("Aiming at %s"), *AimDirection.ToString());

		MoveBarrelTowards(AimDirection);
		//Find Bar
	}
	//UE_LOG(LogTemp, Warning, TEXT("%s aiming at = %s from %s"), *OurTankName, *OutHitLocation.ToString(), *BarrelLocation.ToString());
}

void UTankAimComponent::MoveBarrelTowards(FVector AimDirection)
{
	auto BarrelRotator = Barrel->GetForwardVector().Rotation();
	auto AimAsRotator = AimDirection.Rotation();
	auto DeltaRotator = AimAsRotator - BarrelRotator;
	UE_LOG(LogTemp, Warning, TEXT("AimAsRotator: %s"), *AimAsRotator.ToString());
	//Get current barrel normal
	//Get desired barrel normal
	//Find Look at rotation
	//Set Socket Rotation

	Barrel->Elevate(1); //TODO REMOVE MAGIC NU<BER
}