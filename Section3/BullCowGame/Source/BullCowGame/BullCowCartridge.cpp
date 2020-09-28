// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    SetupGame();
}

void UBullCowCartridge::OnInput(const FString &Input) // When the player hits enter
{
    ClearScreen();
    if (bIsGameOver == true)
    {
        SetupGame();
    }
    else // Checking PlayerGuess
    {
        CheckGuess(Input);
        if (bIsGameOver == true)
        {
            EndGame();
        }
    }
}

void UBullCowCartridge::SetupGame()
{
    // define hidden word
    // define num of lives
    HiddenWord = TEXT("shit");
    HiddenWordLen = HiddenWord.Len();
    NumOfLives = HiddenWord.Len();
    bIsGameOver = false;

    PrintLine(TEXT("Welcome to  Bull and Cows game!"));
    //PrintLine(FString::Printf(TEXT("Guess the %s letter word"), HiddenWordLen)); // using printf. But no need cause already included as part of PrintLine implementation
    PrintLine(TEXT("Guess the %i letter word"), HiddenWordLen);
    PrintLine(TEXT("Enter guess.\nPress enter to continue..."));
}

void UBullCowCartridge::EndGame()
{
    PrintLine("Game is finished. \nPress Enter to play again...");
}

void UBullCowCartridge::CheckGuess(const FString &Guess)
{
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
    if (Guess == HiddenWord)
    {
        PrintLine(TEXT("Win!!!!"));
        bIsGameOver = true;
        return; // use early returns to use less nested ifs
    }

    if (HiddenWordLen != Guess.Len())
    {
        PrintLine(TEXT("Input should be of length %i"), HiddenWordLen);
        return;
    }

    if (!IsIsogram(Guess))
    {
        PrintLine(TEXT("Guess should be isogram.\nTry again"));
        return;
    }

    --NumOfLives;
    PrintLine(TEXT("Wrong Guess. Lives left %i"), NumOfLives);
    if (NumOfLives <= 0)
    {
        PrintLine(TEXT("No Lives left\nHidden word was %s"), *HiddenWord);
        bIsGameOver = true;
        return;
    }
}

// This funcition doesn't change class variables (performs check and returns result). That's why it is constant
bool UBullCowCartridge::IsIsogram(const FString &Word) const
{
    
}