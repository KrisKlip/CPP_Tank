// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/TankBarrel.h"

void UTankBarrel::Elevate(float RelativeSpeed)
{
	auto ElevationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto RawNewElevation = RelativeRotation.Pitch + ElevationChange;

	SetRelativeRotation(FRotator(RawNewElevation, 0, 0));
	UE_LOG(LogTemp, Warning, TEXT("RawNewEleveation = %f"));

}
