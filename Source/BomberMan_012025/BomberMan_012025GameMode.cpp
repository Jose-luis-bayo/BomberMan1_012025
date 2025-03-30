// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_012025GameMode.h"
#include "BomberMan_012025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"
#include "BloqueMadera.h"



ABomberMan_012025GameMode::ABomberMan_012025GameMode()
{


	// set default pawn class to our Blueprinted character

	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}	

void ABomberMan_012025GameMode::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("Generando Muros y Bloques"));

	// Matriz de bloques (0: Vacio, 1: Madera, 2: Ladrillo, 3: Concreto, 4: Acero)
	int Matriz[13][15] = {
		{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
		{4, 0, 1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 0, 0, 0, 0, 0, 2, 0, 1, 0, 2, 0, 1, 0, 4},
		{4, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 0, 0, 0, 0, 0, 3, 0, 1, 0, 3, 0, 3, 0, 4},
		{4, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 1, 2, 1, 2, 3, 3, 0, 4, 0, 1, 0, 2, 0, 4},
		{4, 0, 3, 0, 3, 1, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 0, 0, 0, 0, 0, 2, 0, 3, 0, 2, 0, 1, 0, 4},
		{4, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 0, 0, 0, 0, 0, 1, 0, 2, 0, 2, 0, 1, 0, 4},
		{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
		{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}
	};

	float BloqueStartX = -1200.0f;
	float BloqueStartY = -100.0f;
	float BloqueStartZ = 130.0f;
	float BloqueOffset = 500.0f;

	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			FVector BloqueLocation = FVector(BloqueStartX + i * BloqueOffset, BloqueStartY + j * BloqueOffset, BloqueStartZ);

			// Verificamos el tipo de bloque a generar
			switch (Matriz[i][j])
			{
			case 1:
				SpawnBloque<ABloqueMadera>(BloqueLocation);
				break;
			case 2:
				SpawnBloque<ABloqueLadrillo>(BloqueLocation);
				break;
			case 3:
				SpawnBloque<ABloqueConcreto>(BloqueLocation);
				break;
			case 4:
				SpawnBloque<ABloqueAcero>(BloqueLocation);
				break;
			default:
				break;
			}
		}
	}
}

template<typename T>
void ABomberMan_012025GameMode::SpawnBloque(FVector Location)
{
	T* Bloque = GetWorld()->SpawnActor<T>(T::StaticClass(), Location, FRotator(0.0f, 0.0f, 0.0f));
	if (Bloque)
	{
		Bloque->SetActorScale3D(FVector(5.0f, 5.0f, 5.0f));
	}
}