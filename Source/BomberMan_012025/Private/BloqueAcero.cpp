// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueAcero.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ABloqueAcero::ABloqueAcero()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (Mesh.Succeeded())
	{
		MeshComp->SetStaticMesh(Mesh.Object);
	}
	static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel'"));
	if (Material.Succeeded())
	{
		MeshComp->SetMaterial(0, Material.Object);
	}


}

// Called when the game starts or when spawned
void ABloqueAcero::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloqueAcero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

