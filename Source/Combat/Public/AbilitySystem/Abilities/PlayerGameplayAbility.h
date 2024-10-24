// Florian Wößner - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/MyGameplayAbility.h"
#include "PlayerGameplayAbility.generated.h"

class AMyPlayerController;
class APlayerCharacter;
/**
 * 
 */
UCLASS()
class COMBAT_API UPlayerGameplayAbility : public UMyGameplayAbility
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "Ability")
	APlayerCharacter* GetPlayerCharacterFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "Ability")
	AMyPlayerController* GetPlayerControllerFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "Ability")
	UPlayerCombatComponent* GetPlayerCombatComponentFromActorInfo();
	
private:
	TWeakObjectPtr<APlayerCharacter> CachedPlayerCharacter;
	TWeakObjectPtr<AMyPlayerController> CachedPlayerController;

};
