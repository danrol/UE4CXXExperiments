// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Console/Cartridge.h"
#include "BullCowCartridge.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))

class BULLCOWGAME_API UBullCowCartridge : public UCartridge
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	virtual void OnInput(const FString& Input) override;
	void SetupGame(); //that's how we define our function
	void EndGame();
	void CheckGuess(const FString& Guess);
	bool IsIsogram(const FString& Word) const;
	void GetBullsAndCows(const FString& Guess);

	// Your declarations go below!
private:
	FString HiddenWord; // Those variables may have different values in deferrent instances of class and won't be global
	int32 HiddenWordLen;
	int32 NumOfLives;
	bool bIsGameOver; // Boolean variable names should always start with "b"
	int32 Bulls;
	int32 Cows;
};
