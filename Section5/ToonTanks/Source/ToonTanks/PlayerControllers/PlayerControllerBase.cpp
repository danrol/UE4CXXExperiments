// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControllerBase.h"


void APlayerControllerBase::SetPlayerEnabledState(bool SetPlayerEnabled)
{ 
  if(SetPlayerEnabled)
  {
    GetPawn()->EnableInput(this);
  }
  else
  {
    GetPawn()->DisableInput(this);
  }
  bShowMouseCursor = SetPlayerEnabled; // usually usefull when we switch between menus and game
}
