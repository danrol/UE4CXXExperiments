// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Shoot.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "ShooterAIController.h"
#include "Characters/ShooterCharacter.h"


UBTTask_Shoot::UBTTask_Shoot() 
{
  NodeName = TEXT("Shoot");
}

EBTNodeResult::Type UBTTask_Shoot::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) 
{
  Super::ExecuteTask(OwnerComp, NodeMemory);

  if(!OwnerComp.GetAIOwner())
  {
    return EBTNodeResult::Failed;
  }
  AShooterAIController* ShooterAIController= Cast<AShooterAIController>(OwnerComp.GetAIOwner());
  if(!ShooterAIController->GetPawn())
  {
    return EBTNodeResult::Failed;
  }
  AShooterCharacter* ShooterCharater = Cast<AShooterCharacter>(ShooterAIController->GetPawn());

  ShooterCharater->Shoot();

  return EBTNodeResult::Succeeded;
}
