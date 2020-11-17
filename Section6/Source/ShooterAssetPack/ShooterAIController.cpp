// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAIController.h"
#include "Kismet/GameplayStatics.h"


void AShooterAIController::BeginPlay() 
{
  Super::BeginPlay();
  PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
}

void AShooterAIController::Tick(float DeltaTime) 
{
  Super::Tick(DeltaSeconds);
  SetFocus(PlayerPawn); // Set AI pawn's focus to player's pawn
  MoveToActor(PlayerPawn, 200.f);

}
