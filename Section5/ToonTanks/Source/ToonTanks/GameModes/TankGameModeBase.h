// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TankGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATankGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

private:

	void HandleGameStart();
	void HandleGameOver(bool PlayerWon); // c++ implementation with logic. Will call BlueprintImplementationEvent methods

public:

	void ActorDied(AActor* DeadActor);

protected:
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintImplementableEvent)	// need to be implemented in blueprint
	void GameStart();
	UFUNCTION(BlueprintImplementableEvent)	
	void GameOver(bool PlayerWon);
};
