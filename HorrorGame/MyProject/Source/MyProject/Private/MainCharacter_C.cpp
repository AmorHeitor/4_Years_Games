// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter_C.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AMainCharacter_C::AMainCharacter_C()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringComp"));
	SpringComp->bUsePawnControlRotation = true;
	SpringComp->SetupAttachment(RootComponent);

	GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CameraComp->SetupAttachment(SpringComp);

	RunSpeed = 600;
}

// Called when the game starts or when spawned
void AMainCharacter_C::BeginPlay()
{
	Super::BeginPlay();

	WalkSpeed = GetCharacterMovement()->MaxWalkSpeed;
}

// Called every frame
void AMainCharacter_C::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCharacter_C::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMainCharacter_C::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMainCharacter_C::MoveRight);

	PlayerInputComponent->BindAxis("LookUp", this, &AMainCharacter_C::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &AMainCharacter_C::AddControllerYawInput);

	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AMainCharacter_C::BeginCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &AMainCharacter_C::EndCrouch);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AMainCharacter_C::StartRun);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AMainCharacter_C::EndRun);
	
}

void AMainCharacter_C::MoveForward(float dir)
{
	AddMovementInput(GetActorForwardVector() * dir);
	CurrentSpeed = dir;
}

void AMainCharacter_C::MoveRight(float dir)
{
	AddMovementInput(GetActorRightVector() * dir);
	CurrentDir = dir;
}

void AMainCharacter_C::BeginCrouch()
{
	Crouch();
}

void AMainCharacter_C::EndCrouch()
{
	UnCrouch();
}

void AMainCharacter_C::StartRun()
{
	GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
}

void AMainCharacter_C::EndRun()
{
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}
