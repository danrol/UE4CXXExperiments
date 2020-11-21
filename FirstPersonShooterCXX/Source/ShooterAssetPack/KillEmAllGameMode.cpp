// Fill out your copyright notice in the Description page of Project Settings.


#include "KillEmAllGameMode.h"
#include "EngineUtils.h"
#include "GameFramework/Controller.h"
#include "ShooterAIController.h"
// #include "Kismet/KismetSystemLibrary.h"



void AKillEmAllGameMode::PawnKilled(APawn* PawnKilled) 
{
  Super::PawnKilled(PawnKilled);

  // UE_LOG(LogTemp, Warning, TEXT("Pawn got killed %s"), *UKismetSystemLibrary::GetDisplayName(PawnKilled));

  APlayerController* PlayerController = Cast<APlayerController>(PawnKilled->GetController());
  if (PlayerController)
  {
    EndGame(false);
  }
  else
  {
    UE_LOG(LogTemp, Error, TEXT("Player Controller is null"));
  }

  for(AShooterAIController* AIController : TActorRange<AShooterAIController>(GetWorld()))
  {
    if (AIController->IsDead() == false)
    {
      return;
    }
  }
  EndGame(true);
}

void AKillEmAllGameMode::EndGame(bool bIsPlayerWinner) 
{
  for (AController* Controller : TActorRange<AController>(GetWorld()))
  {
    bool bIsWinner = Controller->IsPlayerController() == bIsPlayerWinner;
    Controller->GameHasEnded(Controller->GetPawn(), bIsWinner);
  }
}
