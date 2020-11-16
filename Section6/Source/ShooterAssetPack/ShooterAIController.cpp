// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAIController.h"
#include "Kismet/GameplayStatics.h"


void AShooterAIController::BeginPlay() 
{
  Super::BeginPlay();
  APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

  SetFocus(PlayerPawn); // Set AI pawn's focus to player's pawn

}
