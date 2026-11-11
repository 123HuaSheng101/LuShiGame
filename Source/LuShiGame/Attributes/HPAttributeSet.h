// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "HPAttributeSet.generated.h"

/**
 * 生命值属性集
 */
UCLASS()
class LUSHIGAME_API UHPAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UPROPERTY(ReplicatedUsing=OnRep_CurrHP) FGameplayAttributeData CurrHP;
	ATTRIBUTE_ACCESSORS_BASIC(UHPAttributeSet, CurrHP)
	UPROPERTY(ReplicatedUsing=OnRep_MaxHP) FGameplayAttributeData MaxHP;
	ATTRIBUTE_ACCESSORS_BASIC(UHPAttributeSet, MaxHP)
	UFUNCTION() void OnRep_CurrHP(const FGameplayAttributeData& OldValue);
	UFUNCTION() void OnRep_MaxHP(const FGameplayAttributeData& OldValue);
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
