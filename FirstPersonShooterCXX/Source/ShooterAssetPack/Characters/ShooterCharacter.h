// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShooterCharacter.generated.h"

class AGun;

UCLASS()
class SHOOTERASSETPACK_API AShooterCharacter : public ACharacter
{
	GENERATED_BODY()

private:
// Functions
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void LookUpRate(float AxisValue);
	void LookRightRate(float AxisValue);

// Variables
	UPROPERTY(EditAnywhere)
	float RotationRate = 15.f;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AGun> GunClass; // using this we'll be able to point at bluprint gun actor in editor

	UPROPERTY()
	AGun* Gun; // will be actual reference to gun. Won't be visible in blueprint

	UPROPERTY(EditAnywhere)
	float MaxHealth = 100;

	UPROPERTY(VisibleAnywhere)
	float Health;
	
public:
	// Sets default values for this character's properties
	AShooterCharacter();

	void Shoot();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	UFUNCTION(BlueprintPure) // We creating function callable from blueprint. Blueprint pure means that the node only return result or result and won't be part of the flow (without input output)
	bool IsDead() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
