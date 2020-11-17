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
    GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
  }
}

void AShooterAIController::Tick(float DeltaTime) 
{
  Super::Tick(DeltaTime);




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
