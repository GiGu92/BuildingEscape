// Copyright Gabor Szaloki 2018.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameLogic.generated.h"

UCLASS()
class BUILDINGESCAPE_API AGameLogic : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameLogic();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
