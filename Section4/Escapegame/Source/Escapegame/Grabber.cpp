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

	// Find and define physics handle
	FindPhysicsHandle(); 

	// Find and Bind Input Component
	SetupInputComponent();
}

void UGrabber::SetupInputComponent()
{
	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>(); // define Input component (for keyboard/mouse/controller maped input)
	if(InputComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("Input component found on %s!"), *(GetOwner()->GetName()));
		InputComponent->BindAction("Grab", IE_Pressed, this, &UGrabber::Grab); // bind user input button to InputComponent 
		// InputComponent->BindAction(1, 2, 3, 4); 1 should be defined the same as it is defined in Input window in Unreal. 2 means type of interaction (pressed, released, etc.), 3 reference to object, 4 reference to function that should be called on button pressed

		InputComponent->BindAction("Grab", IE_Released, this, &UGrabber::Release);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Input component not found on %s!"), *(GetOwner()->GetName()));
	}	
}

void UGrabber::FindPhysicsHandle()
{
	// Checking for Physics Handle Component
	PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>(); // <> angle brackets allow functions to work with generic types
	if(PhysicsHandle)
	{
		UE_LOG(LogTemp, Warning, TEXT("Physics handle component found on %s!"), *(GetOwner()->GetName()));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No physics handle component found on %s!"), *(GetOwner()->GetName()));
	}
}

void UGrabber::Grab()
{
		UE_LOG(LogTemp, Warning, TEXT("Grabber Pressed"));
		FHitResult HitResult = GetFirstPhysicsBodyInReach();
		UPrimitiveComponent* ComponentToGrab = HitResult.GetComponent();

		// If we hit something then attach the physics handle.
		if (HitResult.GetActor())
		{
			UE_LOG(LogTemp, Warning, TEXT("Grabbing Component"));
			PhysicsHandle->GrabComponentAtLocation
				(
					ComponentToGrab,
					NAME_None, // there is no skeleton socket name so we leave it "blank"
					GetPlayersReach() 
			);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("No Components to Grab"));
		}
}

void UGrabber::Release()
{
	UE_LOG(LogTemp, Warning, TEXT("Grabber Released"));

	PhysicsHandle->ReleaseComponent();
}

// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// If the physic handle is attach
	if (PhysicsHandle->GrabbedComponent)
	{
		PhysicsHandle->SetTargetLocation(GetPlayersReach());
	}
}

FHitResult UGrabber::GetFirstPhysicsBodyInReach()
{
	FHitResult Hit;
	// Ray-cast out to a certain distance (Reach)
	FCollisionQueryParams TraceParams(FName(TEXT("")), false, GetOwner());

	GetWorld()->LineTraceSingleByObjectType( // Trace a ray against the world using object types and return the first blocking hit
		OUT Hit,
		GetPlayersWorldPos(),
		GetPlayersReach(),
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody), //ECollisionChannel is enum. We check object by his collision type to understand if we it is the object we needed
		TraceParams
	);

	AActor* ActorHit = Hit.GetActor();
	// See what it hits (Log)
	if (ActorHit)
	{
		UE_LOG(LogTemp, Warning, TEXT("Actor Hit name %s"), *(ActorHit->GetName()));
	}

	return Hit;
}

FVector UGrabber::GetPlayersWorldPos() const
{
		// Get players viewpoint
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT PlayerViewPointLocation, // because OUT macro defined equal to "space"
		OUT PlayerViewPointRotation  // nothing will be put here. But it helps us remember that transferred vars will be changed
		);

	// Draw a line from player showing the reach
	return PlayerViewPointLocation; 
}

FVector UGrabber::GetPlayersReach() const
{
		// Get players viewpoint
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT PlayerViewPointLocation, // because OUT macro defined equal to "space"
		OUT PlayerViewPointRotation  // nothing will be put here. But it helps us remember that transferred vars will be changed
		);

	// Logging out to test
	// UE_LOG(LogTemp, Warning, TEXT("Player ViewPointLocation: %s"), *PlayerViewPointLocation.ToString());
	// UE_LOG(LogTemp, Warning, TEXT("Player ViewPointRotation: %s"), *PlayerViewPointRotation.ToString());

	// Draw a line from player showing the reach
	 return PlayerViewPointLocation + PlayerViewPointRotation.Vector() * Reach; 
	// DrawDebugLine(
	// 	GetWorld(),
	// 	PlayerViewPointLocation,
	// 	LineTraceEnd,
	// 	FColor(0, 255, 0),
	// 	false,
	// 	0.f,
	// 	0.f,
	// 	5.f
	// );
}