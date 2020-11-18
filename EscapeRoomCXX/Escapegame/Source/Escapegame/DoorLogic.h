// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/AudioComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/TriggerVolume.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "DoorLogic.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ESCAPEGAME_API UDoorLogic : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDoorLogic();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void OpenDoor(float DeltaTime);
	void CloseDoor(float DeltaTime);
	float TotalMassOfActors() const;
	void FindAudioComponent();
	void CheckPressurePlate() const;

private:
	float TickDeltaTime;
	float DoorPitch;
	float DoorRoll;
	float ClosedDoorYaw;
	float DoorLastOpened = 0.f;
	bool bIsDoorOpen = false;

	UPROPERTY(EditAnywhere)
	ATriggerVolume* PressurePlate = nullptr;

	UPROPERTY(EditAnywhere) // makes value editable from editor
	float OpenAngle = 90.f;

	UPROPERTY(EditAnywhere)
	float MassToOpenDoor = 10.f;

	UPROPERTY(EditAnywhere)
	float DoorCloseDelay = 0.3f;

	UPROPERTY(EditAnywhere)
	float OpenDoorSpeed = 1.1f;

	UPROPERTY(EditAnywhere)
	float CloseDoorSpeed = 1.1f;

	UPROPERTY()
	UAudioComponent* AudioComponent = nullptr;
};
