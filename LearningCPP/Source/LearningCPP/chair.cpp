// Fill out your copyright notice in the Description page of Project Settings.


#include "chair.h"

// Sets default values
Achair::Achair()
	: ID(20163), Speed(0.9), Trigger(false)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Achair::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Achair::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

