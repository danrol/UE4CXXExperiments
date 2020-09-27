// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    // Welcome message
    // define hidden word
    // define num of lives
    Super::BeginPlay();

    PrintLine(TEXT("Welcome to  Bull and Cows game!"));
    PrintLine(TEXT("Guess the 5 letter word!")); // TODO remove hard code
    PrintLine(TEXT("Press enter to continue..."));

    SetupGame(); //Setting upd game
}

void UBullCowCartridge::OnInput(const FString &Input) // When the player hits enter
{
    ClearScreen();

    // Checking PlayerGuess

 
        if (Input == HiddenWord)
        {
            PrintLine(TEXT("Win!!!!"));
        }
        else
        {
            if (HiddenWordLen != Input.Len())
            {
                PrintLine(TEXT("Input should be of length"));
            }
            PrintLine(TEXT("Loose"));
    }


    // Check If Isogram
    // Prompt To Guess Again
    // Check Right Number Of Characters
    // Prompt To Guess Again

    // Remove Life

    // Check If Lives > 0
    // If Yes GuessAgain
    // Show Lives Left
    // If No Show GameOver and HiddenWord?
    // Prompt To Play Again, Press Enter To Play Again?
    // Check User Input
    // PlayAgain Or Quit
}

void UBullCowCartridge::SetupGame()
{
    HiddenWord = TEXT("above");
    HiddenWordLen = HiddenWord.Len();
    NumOfLives = 5;
}