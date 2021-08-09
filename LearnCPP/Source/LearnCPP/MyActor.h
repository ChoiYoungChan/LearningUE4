// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActorComponent.h"
#include "MyActor.generated.h"


UCLASS()
class LEARNCPP_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float Damage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage") int32 m_damage;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Damage")
	void ShowDamage();

	virtual void PostInitProperties() override;
	UMyActorComponent* m_myactorComponent;

};
