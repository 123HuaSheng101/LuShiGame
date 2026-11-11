// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "AttackAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class LUSHIGAME_API UAttackAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UPROPERTY(ReplicatedUsing=OnRep_Attack) FGameplayAttributeData Attack;
	ATTRIBUTE_ACCESSORS_BASIC(UAttackAttributeSet, Attack)
	UFUNCTION() void OnRep_Attack(const FGameplayAttributeData& OldValue);
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
