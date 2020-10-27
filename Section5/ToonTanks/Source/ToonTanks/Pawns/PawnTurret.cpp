// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnTurret.h"
#include "Kismet/GameplayStatics.h"
#include "PawnTank.h"


APawnTurret::APawnTurret() 
{
  
}

void APawnTurret::BeginPlay() 
{
  Super::BeginPlay();

  // alternative way to get timer manager - GetWorldTimerManager()
  GetWorld()->GetTimerManager().SetTimer(FireRateTimerHandle, this, &APawnTurret::CheckFireCondition, FireRate, true); 
  
  PlayerPawn = Cast<APawnTank>(UGameplayStatics::GetPlayerPawn(this, 0)); // 0 means get first player pawn (there may be multiple pawns. Multiplayer for example)
}

void APawnTurret::HandleDestruction() 
{
  Super::HandleDestruction();
  Destroy();
}

void APawnTurret::Tick(float DeltaTime) 
{
	Super::Tick(DeltaTime);

  if(!PlayerPawn || ReturnDistanceToPlayer() > FireRange)
  {
    return;
  }

  RotateTurret(PlayerPawn->GetActorLocation());
}


void APawnTurret::CheckFireCondition() 
{
  // If Player == null || is Dead THEN BAIL!!
  if(!PlayerPawn) 
  {
  	UE_LOG(LogTemp, Error, TEXT("Player Pawn is not found"));
    return;
  }
    // If Player IS in range Then Fire!!
  if(ReturnDistanceToPlayer() <= FireRange)
  {
    Fire();
  }
}

float APawnTurret::ReturnDistanceToPlayer() 
{
    if(!PlayerPawn) 
  {
    return 0.f;
  }

  return FVector::Dist(PlayerPawn->GetActorLocation(), GetActorLocation()); 
}
