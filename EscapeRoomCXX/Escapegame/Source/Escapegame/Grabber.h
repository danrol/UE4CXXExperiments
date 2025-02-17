// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Grabber.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ESCAPEGAME_API UGrabber : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabber();

	void Grab();
	void Release();
	void FindPhysicsHandle();
	void SetupInputComponent();
	FVector GetPlayersReach() const;
	FVector GetPlayersWorldPos() const;

	// Return the first Actor within reach with physics body.
	FHitResult GetFirstPhysicsBodyInReach();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	UPROPERTY() // Every variable having with type starting with "U" should have UPROPERTY
	UInputComponent* InputComponent = nullptr;
	
	UPROPERTY()
	UPhysicsHandleComponent* PhysicsHandle = nullptr; // define as null ptr so we will be able to check if null pointer
	

	UPROPERTY(EditAnywhere)
	float Reach = 100.f;  // 100.f means reach distance = 100 cm	
};
