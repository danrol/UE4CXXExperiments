// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnBase.h"
#include "Components/CapsuleComponent.h"

// Sets default values
APawnBase::APawnBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleCollider")); // Init capsule component with name "CapsuleCollider". First added component by default will be root. Anyway we'll define root component for clarity

	RootComponent = CapsuleComp; // Define root component. UCapsuleComponent is derived from USceneComponent. That's why it works

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	BaseMesh->SetupAttachment(RootComponent); // attach Base Mesh to Root Component

	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretMesh"));
	TurretMesh->SetupAttachment(BaseMesh); 
	
	ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSpawnPoint"));
	ProjectileSpawnPoint->SetupAttachment(TurretMesh); 

}

// Called when the game starts or when spawned
void APawnBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APawnBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APawnBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

