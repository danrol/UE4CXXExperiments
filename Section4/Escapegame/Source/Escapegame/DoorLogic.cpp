// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorLogic.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UDoorLogic::UDoorLogic()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UDoorLogic::BeginPlay()
{
	Super::BeginPlay();

	DoorPitch = GetOwner()->GetActorRotation().Pitch;
	DoorRoll = GetOwner()->GetActorRotation().Roll;
	ClosedDoorYaw = GetOwner()->GetActorRotation().Yaw;
	OpenedDoorYaw = ClosedDoorYaw + OpenedDoorYaw;

	if (!PressurePlate)
	{
		UE_LOG(LogTemp, Error, TEXT("PressurePlate not defined in %s"), *GetOwner()->GetName());
	}

	ActorThatOpens = GetWorld()->GetFirstPlayerController()->GetPawn();
}

// Called every frame
void UDoorLogic::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// if (PressurePlate /* check if not null*/ && PressurePlate->IsOverlappingActor(ActorThatOpens))
	if (PressurePlate)
	{
		if (PressurePlate->IsOverlappingActor(ActorThatOpens))
		{
			OpenDoor(DeltaTime);
			DoorLastOpened = GetWorld()->GetTimeSeconds();
		}
		else
		{
			if (DoorLastOpened + DoorCloseDelay <= GetWorld()->GetTimeSeconds())
			{
			CloseDoor(DeltaTime);
			}
		}
	}
}

void UDoorLogic::OpenDoor(float DeltaTime)
{
	// 	UE_LOG(LogTemp, Warning, TEXT("%s"), *GetOwner()->GetActorRotation().ToString());
	// 	UE_LOG(LogTemp, Warning, TEXT("%f"), GetOwner()->GetActorRotation().Yaw);

	float CurrentYaw = GetOwner()->GetActorRotation().Yaw;
	float DoorUpdatedYaw = FMath::FInterpTo(CurrentYaw, OpenedDoorYaw, DeltaTime, 1.1f);
	GetOwner()->SetActorRotation(FRotator(DoorPitch, DoorUpdatedYaw, DoorRoll), ETeleportType::TeleportPhysics);
}

void UDoorLogic::CloseDoor(float DeltaTime)
{
	float CurrentYaw = GetOwner()->GetActorRotation().Yaw;
	float DoorUpdatedYaw = FMath::FInterpTo(CurrentYaw, ClosedDoorYaw, DeltaTime, 1.1f);
	GetOwner()->SetActorRotation(FRotator(DoorPitch, DoorUpdatedYaw, DoorRoll), ETeleportType::TeleportPhysics);
}
