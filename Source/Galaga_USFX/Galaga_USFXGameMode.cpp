// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCazador.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaReabastesimiento.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaKamikaze.h"

AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
    // set default pawn class to our character class
    DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
    //NaveEnemigaCaza01 = nullptr
}

void AGalaga_USFXGameMode::BeginPlay()
{
    Super::BeginPlay();

    //Ubicaciones para las navez enemigas de caza

    /*FVector ubicacionNaveCazador01 = FVector(-900.0f, -50.0f, 180.0f);
    FVector ubicacionNaveCazador02 = FVector(-900.0f, -200.0f, 180.0f);
    
    Ubicacion para las navez enemiga de transporte
    FVector ubicacionNaveTransporte01 = FVector(-900.0f, 50.0f, 180.0f);
    FVector ubicacionNaveTransporte02 = FVector(-900.0f, 200.0f, 180.0f);

    Ubicacion para las navez enemiga de Espia
    FVector ubicacionNaveEspia01 = FVector(-900.0f, -350.0f, 180.0f);
    FVector ubicacionNaveEspia02 = FVector(-900.0f, -500.0f, 180.0f);

    Ubicacion para las navez enemiga de Reabastesimiento
    FVector ubicacionNaveReabastesimiento01 = FVector(-900.0f, 350.0f, 180.0f);
    FVector ubicacionNaveReabastesimiento02 = FVector(-900.0f, 500.0f, 180.0f);

    Ubicacion para las navez enemiga de Nodriza
    FVector ubicacionNaveNodriza01 = FVector(-900.0f, -650.0f, 180.0f);
    FVector ubicacionNaveNodriza02 = FVector(-900.0f, -800.0f, 180.0f);

    Ubicacion para las navez enemiga de Kamikaze
    FVector ubicacionNaveKamikaze01 = FVector(-900.0f, 650.0f, 180.0f);
    FVector ubicacionNaveKamikaze02 = FVector(-900.0f, 800.0f, 180.0f);*/

    FVector ubicacionNaveInicial = FVector(-900.0f, .0f, 180.0f);
    FVector ubicacionActual = ubicacionNaveInicial;

    FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

    UWorld* const World = GetWorld();
    if (World != nullptr) {
        for (int i = 0; i < 15; i++) {
            ubicacionActual.Y += 200.0f; // Sumar 50 unidades a la coordenada Y en cada iteración
            ANaveEnemigaCazador* NaveEnemigaCazaActual = World->SpawnActor<ANaveEnemigaCazador>(ubicacionActual, rotacionNave);
            TANaveEnemigoCazador.Add(NaveEnemigaCazaActual);
        }
        ubicacionActual.X = ubicacionNaveInicial.X = -400.0f;
        ubicacionActual.Y = ubicacionNaveInicial.Y = .0f;


        for (int i = 0; i < 15; i++) {
            ubicacionActual.Y += 200.0f; // Sumar 50 unidades a la coordenada Y en cada iteración
            ANaveEnemigaTransporte* NaveEnemigaTransporteActual = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionActual, rotacionNave);
            TANaveEnemigoTransporte.Add(NaveEnemigaTransporteActual);
        }
        ////spawn the projectile
        ////spawenado las naves de la clase NaveEnemigaCaza
        //NaveEnemigaCazador01 = World->SpawnActor<ANaveEnemigaCazador>(ubicacionNaveCazador01, rotacionNave);
        //NaveEnemigaCazador02 = World->SpawnActor<ANaveEnemigaCazador>(ubicacionNaveCazador02, rotacionNave);
        ////spawenado las naves de la clase NaveEnemigaTransporte
        //NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNaveTransporte01, rotacionNave);
        //NaveEnemigaTransporte02 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNaveTransporte02, rotacionNave);
        ////spawenado las naves de la clase NaveEnemigaEspia
        //NaveEnemigaEspia01 = World->SpawnActor<ANaveEnemigaEspia>(ubicacionNaveEspia01, rotacionNave);
        //NaveEnemigaEspia02 = World->SpawnActor<ANaveEnemigaEspia>(ubicacionNaveEspia02, rotacionNave);
        ////spawenado las naves de la clase NaveEnemigaReabastecimiento
        //NaveEnemigaReabastesimiento01 = World->SpawnActor<ANaveEnemigaReabastesimiento>(ubicacionNaveReabastesimiento01, rotacionNave);
        //NaveEnemigaReabastesimiento02 = World->SpawnActor<ANaveEnemigaReabastesimiento>(ubicacionNaveReabastesimiento02, rotacionNave);
        ////spawenado las naves de la clase NaveEnemigaNozdriza
        //NaveEnemigaNodriza01 = World->SpawnActor<ANaveEnemigaNodriza>(ubicacionNaveNodriza01, rotacionNave);
        //NaveEnemigaNodriza02 = World->SpawnActor<ANaveEnemigaNodriza>(ubicacionNaveNodriza02, rotacionNave);
        ////spawenado las naves de la clase NaveEnemigaKamikaze
        //NaveEnemigaKamikaze01 = World->SpawnActor<ANaveEnemigaKamikaze>(ubicacionNaveKamikaze01, rotacionNave);
        //NaveEnemigaKamikaze02 = World->SpawnActor<ANaveEnemigaKamikaze>(ubicacionNaveKamikaze02, rotacionNave);
    }

}