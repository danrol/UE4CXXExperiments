// Fill out your copyright notice in the Description page of Project Settings.

#include "Grabber.h"

#define OUT

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	// Get players viewpoint
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT PlayerViewPointLocation, // because OUT macro defined equal to "space"
		OUT PlayerViewPointRotation  // nothing will be put here. But it helps us remember that transferred vars will be changed
		);

	// Loggin out to test
	// UE_LOG(LogTemp, Warning, TEXT("Player ViewPointLocation: %s"), *PlayerViewPointLocation.ToString());
	// UE_LOG(LogTemp, Warning, TEXT("Player ViewPointRotation: %s"), *PlayerViewPointRotation.ToString());

	// Draw a line from player showing the reach
	// PlayerViewPointRotation.Vector();
	FVector LineTraceEnd = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * Reach; 
	DrawDebugLine(
		GetWorld(),
		PlayerViewPointLocation,
		LineTraceEnd,
		FColor(0, 255, 0),
		false,
		0.f,
		0.f,
		5.f
	);


	// See what it hits
}

