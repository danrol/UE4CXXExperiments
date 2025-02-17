// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TankGameModeBase.generated.h"

class APawnTurret;
class APawnTank;
class APlayerControllerBase;
/**
 * 
 */
UCLASS()
class TOONTANKS_API ATankGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

private:
	APawnTank* PlayerTank;
	int32 TargetTurrets = 0;
	int32 GetTargetTurrentCount();
	APlayerControllerBase* PlayerControllerRef;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Loop", meta = (AllowPrivateAccess = "true")) 
	int32 StartDelay = 3;
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
