// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueMadera.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABloqueMadera::ABloqueMadera()
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
	static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/Game/StarterContent/Materials/M_Wood_Walnut.M_Wood_Walnut'"));
	if (Material.Succeeded())
	{
		MeshComp->SetMaterial(0, Material.Object);
	}
	MeshComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics); // Habilita colisiones
	MeshComp->SetCollisionObjectType(ECC_WorldStatic); // Tipo de objeto
	MeshComp->SetCollisionResponseToAllChannels(ECR_Block); // Bloquea todo por defecto
	MeshComp->SetGenerateOverlapEvents(true); // Opcional: Para detectar overlaps (ej. explosion

}

// Called when the game starts or when spawned
void ABloqueMadera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloqueMadera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

