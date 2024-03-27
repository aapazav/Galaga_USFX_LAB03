// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaKamikaze.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaKamikaze : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	float DimensionOcuapda;
	float TiempoVida;
	float TiempoVidaMaximo;
public:
	//getters
	FORCEINLINE float GetDimensionOcuapda() const { return DimensionOcuapda; }
	FORCEINLINE float GetTiempoVida() const { return TiempoVida; }
	FORCEINLINE float GetTiempoVidaMaximo() const { return TiempoVidaMaximo; }
	//setters
	FORCEINLINE void SetDimensionOcuapda(float dimension) { DimensionOcuapda = dimension; }
	FORCEINLINE void SetTiempoVida(float tiempo) { TiempoVida = tiempo; }
	FORCEINLINE void SetTiempoVidaMaximo(float tiempo) { TiempoVidaMaximo = tiempo; }
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	ANaveEnemigaKamikaze();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Mover(float DeltaTime);
	virtual void Destruirse(float dimencion, float tiempo);
};
