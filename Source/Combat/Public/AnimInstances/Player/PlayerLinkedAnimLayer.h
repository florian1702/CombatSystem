// Florian Wößner - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "AnimInstances/BaseAnimInstance.h"
#include "PlayerLinkedAnimLayer.generated.h"

class UPlayerAnimInstance;
/**
 * 
 */
UCLASS()
class COMBAT_API UPlayerLinkedAnimLayer : public UBaseAnimInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, meta = (BlueprintThreadSafe))
	UPlayerAnimInstance* GetPlayerAnimInstance() const;
};
