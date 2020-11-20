// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"


void AShooterAIController::BeginPlay() 
{
  Super::BeginPlay();
  PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

    if (AIBehavior)
  {
    RunBehaviorTree(AIBehavior);
    GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), GetPawn()->GetActorLocation());
  }
}

void AShooterAIController::Tick(float DeltaTime) 
{
  Super::Tick(DeltaTime);


  // if(AIBehavior)
  // {
  // if(LineOfSightTo(PlayerPawn))
  // {
  //   GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
  //   GetBlackboardComponent()->SetValueAsVector(TEXT("LastKnownPlayerLocation"), PlayerPawn->GetActorLocation());
  // }
  // else
  // {
  //   GetBlackboardComponent()->ClearValue(TEXT("PlayerLocation"));
  // }
  // }
  

  // if(LineOfSightTo(PlayerPawn))
  // {
  //   MoveToActor(PlayerPawn, AcceptanceRadius); // Constantly move to player 
  //   SetFocus(PlayerPawn); // Set AI pawn's focus to player's pawn
  // }
  // else
  // {
  //   ClearFocus(EAIFocusPriority::Gameplay);
  //   StopMovement();
  // }
}
