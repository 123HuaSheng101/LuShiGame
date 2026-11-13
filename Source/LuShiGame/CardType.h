#pragma once
#include "CoreMinimal.h"
#include "CardType.generated.h"

// 卡片类型
UENUM(BlueprintType)
enum class ECardType : uint8
{
	None UMETA(DisplayName = "None"),
	Retinue UMETA(DisplayName = "Retinue"),
	Skill UMETA(DisplayName = "Skill"),
	Max UMETA(DisplayName = "Max")
};

USTRUCT(BlueprintType)
struct FCardItem : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card")
	int32 ID;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card")
	ECardType Type;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card")
	int32 Level;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card")
	int32 Cost;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card")
	TSubclassOf<class UGameplayAbility> Ability;
};

USTRUCT(BlueprintType)
struct FCardInfo : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card")
	int32 ID;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card")
	FName CardName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card")
	FText CardDesc;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card")
	TSoftObjectPtr<UTexture2D> CardIcon;
};
