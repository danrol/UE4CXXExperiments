// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ShooterPlayerController.generated.h"
class UUserWidget;

/**
 * 
 */
UCLASS()
class SHOOTERASSETPACK_API AShooterPlayerController : public APlayerController
{
	GENERATED_BODY()

	public:
		virtual void GameHasEnded(class AActor* EndGameFocus = nullptr, bool bIsWinner = false) override;

	private:
		UPROPERTY(EditAnywhere)
		TSubclassOf<UUserWidget> WinScreenClass;

		UPROPERTY(EditAnywhere)
		TSubclassOf<UUserWidget> LoseScreenClass;

		UPROPERTY(EditAnywhere)
		float RestartDelay = 5.f;

		FTimerHandle RestartTimer;
	
};
