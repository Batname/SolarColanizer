// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "SpaceObject.generated.h"

UENUM(BlueprintType)
enum class ESpaceObjectStatus
{
	EOcupied,
	EExhausted
};

USTRUCT(BlueprintType)
struct FSpaceObjectRecources
{
	GENERATED_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpaceObjectRecources")
	float Gas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpaceObjectRecources")
	float GasFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpaceObjectRecources")
	float Oil;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpaceObjectRecources")
	float OilFactor;
	
	/** Overload the + operator */
    FORCEINLINE friend FSpaceObjectRecources operator+(const FSpaceObjectRecources& Left, const FSpaceObjectRecources& Right)
    {
        FSpaceObjectRecources Temp;
        Temp.Gas = Left.Gas + Right.Gas;
        Temp.Oil = Left.Oil + Right.Oil;

        return Temp;
    }

	// Constructor
	FSpaceObjectRecources()
	{
		Gas = 0.0f;
		GasFactor = 0.3f;

		Oil = 0.0f;
		OilFactor = 0.4f;
	}
};

UCLASS()
class SOLARCOLANIZER_API ASpaceObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpaceObject();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	/** Public getter */
	UFUNCTION(BlueprintPure, Category = "SpaceObject")
	float GetMinEnergyForOcupied() const { return MinEnergyForOcupied; }

	/** Public getter */
	UFUNCTION(BlueprintPure, Category = "SpaceObject")
	float GetPaymentForOcupied() const { return PaymentForOcupied; }

protected:

	/** Property for check character energy with planet space object energy */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SpaceObject", meta = (AllowPrivateAccess = "true"))
	float MinEnergyForOcupied;

	/** Property for pay for ocupation */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SpaceObject", meta = (AllowPrivateAccess = "true"))
	float PaymentForOcupied;

	/** Resources for SpaceObject */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpaceObject", meta = (AllowPrivateAccess = "true"))
	FSpaceObjectRecources SpaceObjectRecources;
private:
	
};
