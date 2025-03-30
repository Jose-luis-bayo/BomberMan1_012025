// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_012025Character.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/World.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"
#include "BloqueMadera.h"

//////////////////////////////////////////////////////////////////////////
// ABomberMan_012025Character

ABomberMan_012025Character::ABomberMan_012025Character()
{
	
	bKeyPressed.Init(false, 4);
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 1100.f;
	GetCharacterMovement()->AirControl = 0.5f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 500.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void ABomberMan_012025Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ABomberMan_012025Character::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABomberMan_012025Character::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ABomberMan_012025Character::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ABomberMan_012025Character::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ABomberMan_012025Character::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ABomberMan_012025Character::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ABomberMan_012025Character::OnResetVR);
	PlayerInputComponent->BindAction("DestroyLeft", IE_Pressed, this, &ABomberMan_012025Character::PressA);
	PlayerInputComponent->BindAction("DestroyRight", IE_Pressed, this, &ABomberMan_012025Character::PressD);
	PlayerInputComponent->BindAction("DestroyForward", IE_Pressed, this, &ABomberMan_012025Character::PressW);
	PlayerInputComponent->BindAction("DestroyBackward", IE_Pressed, this, &ABomberMan_012025Character::PressS);
}


void ABomberMan_012025Character::OnResetVR()
{
	// If BomberMan_012025 is added to a project via 'Add Feature' in the Unreal Editor the dependency on HeadMountedDisplay in BomberMan_012025.Build.cs is not automatically propagated
	// and a linker error will result.
	// You will need to either:
	//		Add "HeadMountedDisplay" to [YourProject].Build.cs PublicDependencyModuleNames in order to build successfully (appropriate if supporting VR).
	// or:
	//		Comment or delete the call to ResetOrientationAndPosition below (appropriate if not supporting VR)
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ABomberMan_012025Character::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void ABomberMan_012025Character::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void ABomberMan_012025Character::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ABomberMan_012025Character::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ABomberMan_012025Character::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ABomberMan_012025Character::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
//Nuevoadyacentetodoborrar si no da
void ABomberMan_012025Character::CheckAdjacentBlocks()
{
	AdjacentBlocks.Empty();

	FVector CharacterLocation = GetActorLocation();
	float CheckDistance = 150.0f; // Ajusta seg�n el tama�o de tus bloques

	// Direcciones: 0:Izquierda, 1:Derecha, 2:Adelante, 3:Atr�s
	FVector Directions[4] = {
		FVector(0, -CheckDistance, 0),
		FVector(0, CheckDistance, 0),
		FVector(CheckDistance, 0, 0),
		FVector(-CheckDistance, 0, 0)
	};

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);

	for (int i = 0; i < 4; i++)
	{
		FHitResult HitResult;
		FVector EndLocation = CharacterLocation + Directions[i];

		if (GetWorld()->LineTraceSingleByChannel(
			HitResult,
			CharacterLocation,
			EndLocation,
			ECC_Visibility,
			QueryParams))
		{
			if (HitResult.GetActor()->IsA(ABloqueMadera::StaticClass()) ||
				HitResult.GetActor()->IsA(ABloqueLadrillo::StaticClass()) ||
				HitResult.GetActor()->IsA(ABloqueConcreto::StaticClass()) ||
				HitResult.GetActor()->IsA(ABloqueAcero::StaticClass()))
			{
				AdjacentBlocks.Add(HitResult.GetActor());
			}
		}
	}
}

void ABomberMan_012025Character::DestroyAdjacentBlock(int32 DirectionIndex)
{
	if (AdjacentBlocks.IsValidIndex(DirectionIndex))
	{
		AdjacentBlocks[DirectionIndex]->Destroy();
		AdjacentBlocks.RemoveAt(DirectionIndex);
	}
}

// Funciones de input
void ABomberMan_012025Character::PressA()
{
	CheckAdjacentBlocks();
	HandleDoublePress(0);
}

void ABomberMan_012025Character::PressD()
{
	CheckAdjacentBlocks();
	HandleDoublePress(1);
}

void ABomberMan_012025Character::PressW()
{
	CheckAdjacentBlocks();
	HandleDoublePress(2);
}

void ABomberMan_012025Character::PressS()
{
	CheckAdjacentBlocks();
	HandleDoublePress(3);
}

void ABomberMan_012025Character::HandleDoublePress(int32 DirectionIndex)
{
	float CurrentTime = GetWorld()->GetTimeSeconds();
    float DoublePressDelay = 0.3f;

    if (bKeyPressed[DirectionIndex] && 
        (CurrentTime - LastKeyPressTime[DirectionIndex] < DoublePressDelay))
    {
        if (AdjacentBlocks.IsValidIndex(DirectionIndex) && AdjacentBlocks[DirectionIndex])
        {
            AdjacentBlocks[DirectionIndex]->Destroy();
            AdjacentBlocks[DirectionIndex] = nullptr;
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, 
                FString::Printf(TEXT("Bloque destruido en direcci�n %d"), DirectionIndex));
        }
        bKeyPressed[DirectionIndex] = false;
    }
    else
    {
        bKeyPressed[DirectionIndex] = true;
        LastKeyPressTime[DirectionIndex] = CurrentTime;
    }
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow,
		FString::Printf(TEXT("Tecla presionada: �ndice %d"), DirectionIndex));
	FString DirectionNames[4] = { "A (Izquierda)", "D (Derecha)", "W (Adelante)", "S (Atr�s)" };
    GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, 
        FString::Printf(TEXT("Tecla presionada: %s, �ndice: %d"), *DirectionNames[DirectionIndex], DirectionIndex));

    if (bKeyPressed[DirectionIndex] && (CurrentTime - LastKeyPressTime[DirectionIndex] < DoublePressDelay)) {
        if (AdjacentBlocks.IsValidIndex(DirectionIndex)) { // �Verifica que el �ndice existe!
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, 
                FString::Printf(TEXT("�Destruyendo bloque en direcci�n %s!"), *DirectionNames[DirectionIndex]));
            DestroyAdjacentBlock(DirectionIndex);
        }
        bKeyPressed[DirectionIndex] = false;
    } else {
        bKeyPressed[DirectionIndex] = true;
        LastKeyPressTime[DirectionIndex] = CurrentTime;
    }
}