// Fill out your copyright notice in the Description page of Project Settings.

#include "SolarColanizer.h"
#include "Earth.h"

AEarth::AEarth()
{
	// Create mesh component
	static ConstructorHelpers::FObjectFinder<UStaticMesh> EarthMesh(TEXT("/Game/TwinStick/Meshes/EarthMesh.EarthMesh"));
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EarthMesh"));
	RootComponent = MeshComponent;
	MeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	MeshComponent->SetStaticMesh(EarthMesh.Object);
}

void AEarth::BeginPlay()
{
}

void AEarth::Tick(float DeltaSoconds)
{
}
