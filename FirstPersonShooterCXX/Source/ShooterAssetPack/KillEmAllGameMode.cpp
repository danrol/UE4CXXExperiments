// Fill out your copyright notice in the Description page of Project Settings.


#include "KillEmAllGameMode.h"
// #include "Kismet/KismetSystemLibrary.h"



void AKillEmAllGameMode::PawnKilled(APawn* PawnKilled) 
{
  Super::PawnKilled(PawnKilled);

  // UE_LOG(LogTemp, Warning, TEXT("Pawn got killed %s"), *UKismetSystemLibrary::GetDisplayName(PawnKilled));

  APlayerController* PlayerController = Cast<APlayerController>(PawnKilled->GetController());
  if (PlayerController)
  {
    PlayerController->GameHasEnded(nullptr, false);
  }
  else
  {
    UE_LOG(LogTemp, Error, TEXT("Player Controller is null"));
  }
}
