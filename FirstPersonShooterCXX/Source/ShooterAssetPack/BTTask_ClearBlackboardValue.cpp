// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_ClearBlackboardValue.h"
#include "BehaviorTree/BlackboardComponent.h"


UBTTask_ClearBlackboardValue::UBTTask_ClearBlackboardValue() 
{
  NodeName = TEXT("Clear BlackBoard Value"); // Using this name the node will be searvhable using Behaviour tree nodes
}

EBTNodeResult::Type UBTTask_ClearBlackboardValue::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) 
{
  Super::ExecuteTask(OwnerComp, NodeMemory);

  OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());

  return EBTNodeResult::Succeeded;
}
