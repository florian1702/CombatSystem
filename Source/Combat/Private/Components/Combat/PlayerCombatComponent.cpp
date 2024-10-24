// Florian Wößner - All Rights Reserved


#include "Components/Combat/PlayerCombatComponent.h"
#include "Items/Weapons/PlayerWeapon.h"

APlayerWeapon* UPlayerCombatComponent::GetPlayerCarriedWeaponByTag(FGameplayTag InWeaponTag) const
{
	return Cast<APlayerWeapon>(GetCharacterCarriedWeaponByTag(InWeaponTag));
}
