// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"

#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

// Sets default values
AGun::AGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);


}

void AGun::PullTrigger() 
{
	if(!MuzzleFlash)
	{
		UE_LOG(LogTemp, Error, TEXT("Gun Particle system not defined"));
		return;
	}
	UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, Mesh, TEXT("MuzzleFlashSocket"));

	// DrawDebugCamera(GetWorld(), GetActorLocation(), GetActorRotation(), 90, 2, FColor::Red, true);

	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if(!OwnerPawn){return;}

	AController* OwnerController = OwnerPawn->GetController();
	if(!OwnerController){return;}

	FVector ViewPointLocation;
	FRotator ViewPointRotation;
	OwnerController->GetPlayerViewPoint(ViewPointLocation, ViewPointRotation);

	FVector End = ViewPointLocation + ViewPointRotation.Vector() * MaxRange;
	// DrawDebugCamera(GetWorld(), ViewPointLocation, ViewPointRotation, 90, 2, FColor::Red, true);

	FHitResult Hit;
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this); // prevent collision with self
	CollisionParams.AddIgnoredActor(GetOwner()); // ignore collision with actor holding
	bool bIsHit = GetWorld()->LineTraceSingleByChannel(Hit, ViewPointLocation, End, ECollisionChannel::ECC_GameTraceChannel1, CollisionParams);
	if(bIsHit)
	{
		FVector ShotDirection = -ViewPointRotation.Vector();
		if (!HitParticle)
		{
				UE_LOG(LogTemp, Error, TEXT("Gun Hit Particle is not defined"));
				return;
		}
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitParticle, Hit.Location, ShotDirection.Rotation());
	// DrawDebugPoint(GetWorld(), Hit.Location, 20, FColor::Red, true);
		FPointDamageEvent DamageEvent(Damage, Hit, ShotDirection, nullptr);
		AActor* HitActor = Hit.GetActor();
		if(!HitActor)
		{
			return;
		}
		HitActor->TakeDamage(Damage, DamageEvent, OwnerController, this);
	}

}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

