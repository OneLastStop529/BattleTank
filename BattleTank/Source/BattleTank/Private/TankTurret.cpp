// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/TankTurret.h"

void UTankTurret::Rotate(float RelativeSpeed)
{

	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);
	auto RotationChange = RelativeSpeed * MaxDegreePerSecond * GetWorld()->DeltaTimeSeconds;
	auto RawRotationChange = RelativeRotation.Yaw + RotationChange;
	SetRelativeRotation(FRotator(0, RawRotationChange, 0));
}

