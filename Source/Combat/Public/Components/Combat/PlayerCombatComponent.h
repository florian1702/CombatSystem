// Florian Wößner - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/Combat/PawnCombatComponent.h"
#include "PlayerCombatComponent.generated.h"

class APlayerWeapon;
/**
 * 
 */
UCLASS()
class COMBAT_API UPlayerCombatComponent : public UPawnCombatComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Combat")
	APlayerWeapon* GetPlayerCarriedWeaponByTag(FGameplayTag InWeaponTag) const;
	
	
};
