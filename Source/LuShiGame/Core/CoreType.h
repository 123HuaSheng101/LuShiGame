#pragma once

#include "CoreMinimal.h"
#include "CoreType.generated.h"

UENUM(BlueprintType)
enum class ECardMatchPhase : uint8
{
	Mulligan UMETA(DisplayName = "Mulligan"),
	TurnStart UMETA(DisplayName = "TurnStart"),
	MainPhase UMETA(DisplayName = "MainPhase"),
	TurnEnd UMETA(DisplayName = "TurnEnd"),
	GameOver UMETA(DisplayName = "GameOver"),
};