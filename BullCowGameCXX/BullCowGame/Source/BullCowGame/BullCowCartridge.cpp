// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"
#include "HiddenWordsList.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    //FBullCowCount Count; // declare struct
    //FBullCowCount Count = {2, 3}; declare struct with values
    //Count.Bulls = 5; // change struct value

    // PrintLine(TEXT("%i"), FMath::RandRange(0, 20)); // get random number in range

    SetupGame();
}

void UBullCowCartridge::OnInput(const FString& PlayerInput) // When the player hits enter
// always define pointer variables as "const"
{
    ClearScreen();
    if (bIsGameOver == true)
    {
        SetupGame();
    }
    else // Checking PlayerGuess
    {
        CheckGuess(PlayerInput);
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
    HiddenWord = HiddenWordsArr[FMath::RandRange(0, HiddenWordsArr.Num() - 1)];
    PrintLine(TEXT("HiddenWord is %s"), *HiddenWord);
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

void UBullCowCartridge::CheckGuess(const FString& Guess)
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
    FBullCowCount Count = GetBullsAndCows(Guess);
    PrintLine(TEXT("Number of Bulls = %i, number of Cows = %i"), Count.Bulls, Count.Cows);
}

// This funcition doesn't change class variables (performs check and returns result). That's why it is constant
bool UBullCowCartridge::IsIsogram(const FString& Word) const
{
    return true;
}

FBullCowCount UBullCowCartridge::GetBullsAndCows(const FString &Guess)
{
    // Bulls = 0;
    // Cows = 0;
    FBullCowCount Count = {0, 0};
    for (int32 GuessIndex = 0; GuessIndex < Guess.Len(); GuessIndex++)
    {
        if(Guess[GuessIndex] == HiddenWord[GuessIndex])
        {
            Count.Bulls = ++Count.Bulls;
            continue;
        }

        for(int32 HiddenIndex = 0; HiddenIndex < HiddenWord.Len(); HiddenIndex++)
        {
            if (Guess[GuessIndex] == HiddenWord[HiddenIndex])
            {
                Count.Cows = ++Count.Cows;
                break;
            }
        }
    }
    return Count;
}