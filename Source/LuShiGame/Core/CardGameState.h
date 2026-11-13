// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "CardGameState.generated.h"

/**
 * 
 */
UCLASS()
class LUSHIGAME_API ACardGameState : public AGameState
{
	GENERATED_BODY()
public:
	ACardGameState();
	int32 GetTurnCount() const { return TurnCount; }
protected:
	
	UPROPERTY(ReplicatedUsing=OnRep_TurnCount) int32 TurnCount;//当前回合数
	UFUNCTION() void OnRep_TurnCount(int32 OldTurnCount);
	//当前行动玩家
};
