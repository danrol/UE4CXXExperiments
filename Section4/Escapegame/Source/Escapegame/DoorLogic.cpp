// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorLogic.h"
#include "GameFramework/Actor.h"

#define OUT

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
	OpenAngle = ClosedDoorYaw + OpenAngle;

	if (!PressurePlate)
	{
		UE_LOG(LogTemp, Error, TEXT("PressurePlate not defined in %s"), *GetOwner()->GetName());
	}
}

// Called every frame
void UDoorLogic::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (!PressurePlate) {return;}
		if (TotalMassOfActors() > MassToOpenDoor)
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

float UDoorLogic::TotalMassOfActors() const
{
	float TotalMass = 0.f;
	if (!PressurePlate) {return TotalMass;}

	TArray <AActor*> OverlappingActors;
	PressurePlate->GetOverlappingActors(OUT OverlappingActors);

	for(AActor* Actor : OverlappingActors)
	{
		TotalMass += Actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
	}
	return TotalMass;
}

void UDoorLogic::OpenDoor(float DeltaTime)
{
	float CurrentYaw = GetOwner()->GetActorRotation().Yaw;
	float DoorUpdatedYaw = FMath::FInterpTo(CurrentYaw, OpenAngle, DeltaTime, OpenDoorSpeed);
	GetOwner()->SetActorRotation(FRotator(DoorPitch, DoorUpdatedYaw, DoorRoll), ETeleportType::TeleportPhysics);
}

void UDoorLogic::CloseDoor(float DeltaTime)
{
	float CurrentYaw = GetOwner()->GetActorRotation().Yaw;
	float DoorUpdatedYaw = FMath::FInterpTo(CurrentYaw, ClosedDoorYaw, DeltaTime, CloseDoorSpeed);
	GetOwner()->SetActorRotation(FRotator(DoorPitch, DoorUpdatedYaw, DoorRoll), ETeleportType::TeleportPhysics);
}
