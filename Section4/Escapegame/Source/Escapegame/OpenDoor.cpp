// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	DoorPitch = GetOwner()->GetActorRotation().Pitch;
	DoorRoll = GetOwner()->GetActorRotation().Roll;
	DoorStartYaw = GetOwner()->GetActorRotation().Yaw;
	TargetYaw = DoorStartYaw + TargetYaw;

	if(!PressurePlate)
	{
			UE_LOG(LogTemp, Error, TEXT("PressurePlate not defined in %s"), *GetOwner()->GetName());
	}

	ActorThatOpens = GetWorld()->GetFirstPlayerController()->GetPawn();
}

// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// if (PressurePlate /* check if not null*/ && PressurePlate->IsOverlappingActor(ActorThatOpens))
	if (PressurePlate && PressurePlate->IsOverlappingActor(ActorThatOpens))
	{
		OpenDoor(DeltaTime);
	}
}

void UOpenDoor::OpenDoor(float DeltaTime) const
{
	// 	UE_LOG(LogTemp, Warning, TEXT("%s"), *GetOwner()->GetActorRotation().ToString());
	// 	UE_LOG(LogTemp, Warning, TEXT("%f"), GetOwner()->GetActorRotation().Yaw);

	float CurrentYaw = GetOwner()->GetActorRotation().Yaw;
	float DoorUpdatedYaw = FMath::FInterpTo(CurrentYaw, TargetYaw, DeltaTime, 1.1f);
	GetOwner()->SetActorRotation(FRotator(DoorPitch, DoorUpdatedYaw, DoorRoll), ETeleportType::TeleportPhysics);
}
