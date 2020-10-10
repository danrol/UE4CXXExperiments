// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	OpenDoor();
}

// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	TickDeltaTime = DeltaTime;
}

void UOpenDoor::OpenDoor() const
{

	float CurrentYaw = GetOwner()->GetActorRotation().Yaw;

	float DoorAlfa = 0.f;
	float AlfaDelta = 0.1f;
	float DoorPitch = GetOwner()->GetActorRotation().Pitch;
	float DoorRoll = GetOwner()->GetActorRotation().Roll;
	float DoorStartYaw = GetOwner()->GetActorRotation().Yaw;
	float TargetYaw = DoorStartYaw + 90.f;
	while (DoorAlfa <= 1)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s"), *GetOwner()->GetActorRotation().ToString());
		UE_LOG(LogTemp, Warning, TEXT("%f"), GetOwner()->GetActorRotation().Yaw);

		DoorAlfa = DoorAlfa + 0.01f;
		float DoorUpdatedYaw = FMath::Lerp(DoorStartYaw, TargetYaw, DoorAlfa);
		// float DoorUpdatedYaw = FMath::FInterpTo(DoorStartYaw, TargetYaw, TickDeltaTime, 2);
		GetOwner()->SetActorRotation(FRotator(DoorPitch, DoorUpdatedYaw, DoorRoll), ETeleportType::TeleportPhysics);
	}
}
