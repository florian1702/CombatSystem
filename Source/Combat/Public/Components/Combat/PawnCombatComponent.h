// Florian Wößner - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/PawnExtensionComponentBase.h"
#include "PawnCombatComponent.generated.h"

class AWeaponBase;
/**
 * 
 */
UCLASS()
class COMBAT_API UPawnCombatComponent : public UPawnExtensionComponentBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Combat")	
	void RegisterSpawnedWeapon(FGameplayTag InWeaponTagToRegister, AWeaponBase* InWeaponToRegister, bool bRegisterAsEquippedWeapon = false);

	UFUNCTION(BlueprintCallable, Category = "Combat")
	AWeaponBase* GetCharacterCarriedWeaponByTag(FGameplayTag InWeaponTagToGet) const;
	
	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	FGameplayTag CurrentEquippedWeaponTag;

	UFUNCTION(BlueprintCallable, Category = "Combat")
	AWeaponBase* GetCharacterCurrentEquippedWeapon() const;
	
private:
	TMap<FGameplayTag, AWeaponBase*> CharacterCarriedWeaponMap;
};
