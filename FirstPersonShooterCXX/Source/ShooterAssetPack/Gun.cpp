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
	FHitResult Hit;
	FVector ShotDirection;
	bool bIsHit = GunTrace(Hit, ShotDirection);
	if(bIsHit)
	{
		if (!HitParticle)
		{
				UE_LOG(LogTemp, Error, TEXT("Gun Hit Particle is not defined"));
				return;
		}
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitParticle, Hit.Location, ShotDirection.Rotation());
	// DrawDebugPoint(GetWorld(), Hit.Location, 20, FColor::Red, true);
		FPointDamageEvent DamageEvent(Damage, Hit, ShotDirection, nullptr);
		AActor* HitActor = Hit.GetActor();
		if(HitActor)
		{
			AController* OwnerController = GetOwnerController();
			HitActor->TakeDamage(Damage, DamageEvent, OwnerController, this);
		}
	}
}

bool AGun::GunTrace(FHitResult& Hit, FVector& ShotDirection) 
{
		if(!MuzzleFlash)
	{
		UE_LOG(LogTemp, Error, TEXT("Gun Particle system not defined"));
		return false;
	}
	UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, Mesh, TEXT("MuzzleFlashSocket"));

	// DrawDebugCamera(GetWorld(), GetActorLocation(), GetActorRotation(), 90, 2, FColor::Red, true);

	FVector ViewPointLocation;
	FRotator ViewPointRotation;

	AController* OwnerController = GetOwnerController();
	if(!OwnerController)
	{
		UE_LOG(LogTemp, Error, TEXT("Owner Controller is missing in Gun"));
		return false;
	}

	OwnerController->GetPlayerViewPoint(ViewPointLocation, ViewPointRotation);
	ShotDirection = -ViewPointRotation.Vector();

	FVector End = ViewPointLocation + ViewPointRotation.Vector() * MaxRange;
	// DrawDebugCamera(GetWorld(), ViewPointLocation, ViewPointRotation, 90, 2, FColor::Red, true);


	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this); // prevent collision with self
	CollisionParams.AddIgnoredActor(GetOwner()); // ignore collision with actor holding
	return GetWorld()->LineTraceSingleByChannel(Hit, ViewPointLocation, End, ECollisionChannel::ECC_GameTraceChannel1, CollisionParams);
}

AController* AGun::GetOwnerController() const
{
	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if(!OwnerPawn){return nullptr;}

	return OwnerPawn->GetController();
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


