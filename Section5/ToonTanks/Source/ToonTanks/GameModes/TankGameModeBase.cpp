// Fill out your copyright notice in the Description page of Project Settings.


#include "TankGameModeBase.h"
#include "ToonTanks/Pawns/PawnTank.h"
#include "ToonTanks/Pawns/PawnTurret.h"
#include "Kismet/GameplayStatics.h"


void ATankGameModeBase::BeginPlay()
{
    // Get references and game win/lose conditions. 
    Super::BeginPlay();

    HandleGameStart();

}

void ATankGameModeBase::ActorDied(AActor *DeadActor)
{
    // Check what type of Actor died. If Turret, tally. If Player -> go to lose condition. 

    if(DeadActor == PlayerTank)
    {
      PlayerTank->HandleDestruction();
      UE_LOG(LogTemp, Warning, TEXT("Player Died"));
      HandleGameOver(false); // indicate that player didn't win
    }
    else if(APawnTurret* DestroyedTurret = Cast<APawnTurret>(DeadActor))
    {
      DestroyedTurret->HandleDestruction();
      if(--TargetTurrets <=0)
      {
      HandleGameOver(true);
      }
    }
}

void ATankGameModeBase::HandleGameStart() 
{
    // Initialise the start countdown, turret activation, pawn check etc. Called before Blueprint version is called 
    TargetTurrets = GetTargetTurrentCount();

    PlayerTank = Cast<APawnTank>(UGameplayStatics::GetPlayerPawn(this, 0));
    // Call Blueprint version GameStart();
    GameStart();
}

void ATankGameModeBase::HandleGameOver(bool PlayerWon) 
{
    // See if the player has destroyed all the turrets, show win result.
    // else if turret destroyed player, show lose result. 
    // Call blueprint version GameOver(bool).
    GameOver(PlayerWon);
    
}

int32 ATankGameModeBase::GetTargetTurrentCount() 
{
    TArray<AActor*> TurretActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), APawnTurret::StaticClass(), TurretActors);
    return TurretActors.Num();
}
