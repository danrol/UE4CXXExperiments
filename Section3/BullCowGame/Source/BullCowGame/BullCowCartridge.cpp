// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Welcome to  Bull and Cows game!"));
    PrintLine(TEXT("Guess the 4 letter word!")); // TODO remove hard code
    PrintLine(TEXT("Press enter to continue..."));
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    FString HiddenWord =TEXT("above"); //TODO move outside this function
    if(Input == HiddenWord)
    {
        PrintLine(TEXT("Win!!!!"));
    }
    else
    {
        PrintLine(TEXT("Loose"));
    }
    
}