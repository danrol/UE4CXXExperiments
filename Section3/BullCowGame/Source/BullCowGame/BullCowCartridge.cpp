// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    SetupGame(); 
    PrintLine(TEXT("Welcome to  Bull and Cows game!"));
    //PrintLine(FString::Printf(TEXT("Guess the %s letter word"), HiddenWordLen)); // using printf. But no need cause already included as part of PrintLine implementation
    PrintLine(TEXT("Guess the %i letter word"), HiddenWordLen);
    PrintLine(TEXT("Press enter to continue..."));
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
                PrintLine(TEXT("Input should be of length %i"), HiddenWordLen);
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
    // define hidden word
    // define num of lives
    HiddenWord = TEXT("shit");
    HiddenWordLen = HiddenWord.Len();
    NumOfLives = HiddenWord.Len();
}