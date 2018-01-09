// Copyright Gabor Szaloki 2018.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LocationLimiter.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API ULocationLimiter : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULocationLimiter();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(EditAnywhere)
	float MinZ = 180.f;
	
	UPROPERTY(EditAnywhere)
	float MaxZ = 180.f;
	
	AActor* Owner;
};
