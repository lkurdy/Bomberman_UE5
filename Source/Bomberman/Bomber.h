// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Bomber.generated.h"

class UInputMappingContext;

class UInputAction;

UCLASS()
class BOMBERMAN_API ABomber : public ACharacter
{
	GENERATED_BODY()

public:
	ABomber();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputMappingContext* Context;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* Move;

	void PlayerMove(const FInputActionValue& Value);
};
