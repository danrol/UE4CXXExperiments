// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ShooterAIController.generated.h"

class UBehaviorTree;

/**
 * 
 */
UCLASS()
class SHOOTERASSETPACK_API AShooterAIController : public AAIController
{
	GENERATED_BODY()

	private:
		APawn* PlayerPawn;

		UPROPERTY(EditAnywhere)
		class UBehaviorTree* AIBehavior;
		// UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess = "true"))
		// float AcceptanceRadius = 200.f;

	protected:
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

	public:
		// Called every frame
		virtual void Tick(float DeltaTime) override;
		bool IsDead() const;
	
};
