// Copyright Gabor Szaloki 2018.

#include "LocationLimiter.h"
#include "GameFramework/Actor.h"
#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
ULocationLimiter::ULocationLimiter()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULocationLimiter::BeginPlay()
{
	Super::BeginPlay();

	Owner = GetOwner();
}


// Called every frame
void ULocationLimiter::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector OwnerLocation = Owner->GetActorLocation();
	OwnerLocation.Z = FMath::Clamp<float>(OwnerLocation.Z, MinZ, MaxZ);
	Owner->SetActorLocation(OwnerLocation);
}

