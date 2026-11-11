// Fill out your copyright notice in the Description page of Project Settings.


#include "HPAttributeSet.h"

#include "Net/UnrealNetwork.h"

void UHPAttributeSet::OnRep_CurrHP(const FGameplayAttributeData& OldValue)
{
}

void UHPAttributeSet::OnRep_MaxHP(const FGameplayAttributeData& OldValue)
{
}

void UHPAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UHPAttributeSet, CurrHP);
	DOREPLIFETIME(UHPAttributeSet, MaxHP);
	
}
