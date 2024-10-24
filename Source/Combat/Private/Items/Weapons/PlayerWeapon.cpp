// Florian Wößner - All Rights Reserved


#include "Items/Weapons/PlayerWeapon.h"

void APlayerWeapon::AssignGrantedAbilitySpecHandles(const TArray<FGameplayAbilitySpecHandle>& InSpecHandle)
{
	GrantedAbilitySpecHandles = InSpecHandle;
}

TArray<FGameplayAbilitySpecHandle> APlayerWeapon::GetGrantedAbilitySpecHandles() const
{
	return GrantedAbilitySpecHandles;
}
