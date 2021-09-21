// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldPosition.h"
#include "GameFramework/Actor.h"


// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();

	// FString Log = TEXT("Hello!");
	// FString* PrtLog = &Log;
	
	// Log.Len();

	// (*PrtLog).Len();

	// PrtLog->Len();


	// UE_LOG(LogTemp, Warning, TEXT("%s"), **PrtLog);
	
			
	FString ObjectName = GetOwner()->GetName();
	// UE_LOG(LogTemp, Warning, TEXT("Object name is %s!"), *GetOwner()->GetName());
	FString ObjectPosition = GetOwner()->GetActorLocation().ToString();
	//FString ObjectDistance = GetOwner()->GetActorTransform().GetActorLocation().ToString(); would also work and without getloc will give rotation
	UE_LOG(LogTemp, Warning, TEXT("%s is at position is %s!"), *ObjectName, *ObjectPosition); //, *ObjectDistance);


}


// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

