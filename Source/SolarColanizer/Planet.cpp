// Fill out your copyright notice in the Description page of Project Settings.

#include "SolarColanizer.h"
#include "Planet.h"


APlanet::APlanet()
{
	// setup resorces
	FSpaceObjectRecources ObjecAddition;
	ObjecAddition.Gas = 500.0f;
	ObjecAddition.Oil = 300.0f;
	SpaceObjectRecources = ObjecAddition + Super::SpaceObjectRecources;
}

