// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackAttributeSet.h"

#include "Net/UnrealNetwork.h"

void UAttackAttributeSet::OnRep_Attack(const FGameplayAttributeData& OldValue)
{
}

void UAttackAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UAttackAttributeSet, Attack);
}
