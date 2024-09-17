// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter_Generic.h"

// Sets default values
APlayerCharacter_Generic::APlayerCharacter_Generic()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCharacter_Generic::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCharacter_Generic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter_Generic::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

