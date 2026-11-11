// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "CardCharacter.generated.h"

/*
 * 玩家随从类,和玩家英雄 通用类
 */
UCLASS(Abstract)
class LUSHIGAME_API ACardCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly,Replicated, Category = "AbilitySystem") TObjectPtr<UAbilitySystemComponent> ASC;
	ACardCharacter();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// void GiveAllAbilities();//给角色赋予技能,仅服务器执行
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
protected:
	virtual void BeginPlay() override;
	
};
