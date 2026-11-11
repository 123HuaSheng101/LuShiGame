// Fill out your copyright notice in the Description page of Project Settings.


#include "CardCharacter.h"

#include "Net/UnrealNetwork.h"

// Sets default values
ACardCharacter::ACardCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ASC = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	ASC->SetIsReplicated(true);
	ASC->SetReplicationMode(EGameplayEffectReplicationMode::Full);
	bReplicates = true;
	
}

UAbilitySystemComponent* ACardCharacter::GetAbilitySystemComponent() const
{
	return ASC.Get();
}

// Called when the game starts or when spawned
void ACardCharacter::BeginPlay()
{
	Super::BeginPlay();
	ASC->InitAbilityActorInfo(this, this);//初始化AbilitySystemComponent
	// GiveAllAbilities();
}

// Called every frame
void ACardCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACardCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACardCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

// void ACardCharacter::GiveAllAbilities()
// {
// 	if (GetLocalRole() == ROLE_Authority)//服务器
// 	{
// 		UE_LOG(LogAbilitySystemComponent, Log, TEXT("GiveAllAbilities Server Success"));
// 	}
// }

