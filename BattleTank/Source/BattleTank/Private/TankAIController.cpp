// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/TankAIController.h"
#include "../Public/Tank.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"







void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	
	
}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Warning, TEXT("AIController Tick() called"));
	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto AIControlledTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());

	if (PlayerTank)
	{
		// UE_LOG(LogTemp, Warning, TEXT("%s found"), *PlayerTank->GetActorLocation().ToString());

		AIControlledTank->AimAt(PlayerTank->GetActorLocation());
		AIControlledTank->Fire();
	}

}


