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

	// Checking for Physics Handle Component
	PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>(); // <> angle brackets allow functions to work with generic types
	if(PhysicsHandle)
	{
		// Physic is found
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No physics handle component found on %s!"), *(GetOwner()->GetName()));
	}
	
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

	FHitResult Hit;
	// Ray-cast out to a certain distance (Reach)
	FCollisionQueryParams TraceParams(FName(TEXT("")), false, GetOwner());

	GetWorld()->LineTraceSingleByObjectType( // Trace a ray against the world using object types and return the first blocking hit
		OUT Hit,
		PlayerViewPointLocation,
		LineTraceEnd,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody), //ECollisionChannel is enum. We check object by his collision type to understand if we it is the object we needed
		TraceParams
	);

	AActor* ActorHit = Hit.GetActor();
	// See what it hits (Log)
	if (ActorHit)
	{
		UE_LOG(LogTemp, Warning, TEXT("Actor Hit name %s"), *(ActorHit->GetName()));
	}


}

