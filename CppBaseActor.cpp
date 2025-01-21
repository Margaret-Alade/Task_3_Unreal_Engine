// Fill out your copyright notice in the Description page of Project Settings.


#include "CppBaseActor.h"

// Sets default values
ACppBaseActor::ACppBaseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACppBaseActor::BeginPlay()
{
	Super::BeginPlay();
	ShowInformation();
}

// Called every frame
void ACppBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACppBaseActor::ShowInformation() 
{
    UE_LOG(LogTemp, Display, TEXT("CppBase is here"));
    UE_LOG(LogTemp, Warning, TEXT("CppBase класс ошибся"));
    UE_LOG(LogTemp, Error, TEXT("CppBase класс очень сильно ошибся"));
	UE_LOG(LogTemp, Display, TEXT("ObjectName: %s"), *ObjectName);
	UE_LOG(LogTemp, Display, TEXT("EnemyNum: %d"), EnemyNum);
	UE_LOG(LogTemp, Display, TEXT("IsAlive: %i"), IsAlive);
    
}

