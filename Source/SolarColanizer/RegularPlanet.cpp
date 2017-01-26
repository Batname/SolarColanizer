// Fill out your copyright notice in the Description page of Project Settings.

#include "SolarColanizer.h"
#include "RegularPlanet.h"

ARegularPlanet::ARegularPlanet()
{
	// setup resorces
	FSpaceObjectRecources ObjecAddition;
	ObjecAddition.Gas = 700.0f;
	ObjecAddition.Oil = 200.0f;
	SpaceObjectRecources = ObjecAddition + Super::SpaceObjectRecources;
}


