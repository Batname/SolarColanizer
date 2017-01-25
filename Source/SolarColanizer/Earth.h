// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "RegularPlanet.h"
#include "Earth.generated.h"

/**
 * Earth planet class for geometry and specific settings
 */
UCLASS(Blueprintable)
class SOLARCOLANIZER_API AEarth : public ARegularPlanet
{
	GENERATED_BODY()

	/** The mesh component */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* MeshComponent;
	
public:
	AEarth();

	// Begin Actor Interface
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSoconds) override;
	// End Actor Interface
};
