// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
//#include "NaveEnemiga.h"
//#include "NaveEnemigaCazador.h"
//#include "NaveEnemigaTransporte.h"
//#include "NaveEnemigaEspia.h"
//#include "NaveEnemigaReabastesimiento.h"
//#include "NaveEnemigaNodriza.h"
//#include "NaveEnemigaKamikaze.h"
#include "Galaga_USFXGameMode.generated.h"

class ANaveEnemiga;
class ANaveEnemigaCazador;
class ANaveEnemigaTransporte;
class ANaveEnemigaEspia;
class ANaveEnemigaReabastesimiento;
class ANaveEnemigaNodriza;
class ANaveEnemigaKamikaze;

UCLASS(MinimalAPI)
class AGalaga_USFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFXGameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

//public:
//	ANaveEnemiga* NaveEnemiga01;
//	ANaveEnemigaCazador* NaveEnemigaCazador01;
//	ANaveEnemigaCazador* NaveEnemigaCazador02;
//	ANaveEnemigaTransporte* NaveEnemigaTransporte01;
//	ANaveEnemigaTransporte* NaveEnemigaTransporte02;
//	ANaveEnemigaEspia* NaveEnemigaEspia01;
//	ANaveEnemigaEspia* NaveEnemigaEspia02;
//	ANaveEnemigaReabastesimiento* NaveEnemigaReabastesimiento01;
//	ANaveEnemigaReabastesimiento* NaveEnemigaReabastesimiento02;
//	ANaveEnemigaNodriza* NaveEnemigaNodriza01;
//	ANaveEnemigaNodriza* NaveEnemigaNodriza02;
//	ANaveEnemigaKamikaze* NaveEnemigaKamikaze01;
//	ANaveEnemigaKamikaze* NaveEnemigaKamikaze02;

public:
	TArray<ANaveEnemiga*> TANaveEnemigo;
	TArray<ANaveEnemigaCazador*> TANaveEnemigoCazador;
	TArray<ANaveEnemigaTransporte*> TANaveEnemigoTransporte;
	/*TArray<ANaveEnemigaEspia*> TANaveEnemigoEspia;
	TArray<ANaveEnemigaReabastesimiento*> TANaveEnemigoReabastesimiento;
	TArray<ANaveEnemigaNodriza*> TANaveEnemigoNodriza;
	TArray<ANaveEnemigaKamikaze*> TANaveEnemigoKamikaze;*/
};