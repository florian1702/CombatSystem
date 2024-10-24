// Florian Wößner - All Rights Reserved

#pragma once

#include "NativeGameplayTags.h"

namespace GameplayTags
{
	/** Input Tags **/
	COMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Move);
	COMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Look);
	COMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_EquipWeapon);
	COMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_UnequipWeapon);
	COMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_LightAttack);
	COMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_HeavyAttack);
	
	/** Player Tags **/
	COMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Equip_Weapon);
	COMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Unequip_Weapon);
	COMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Attack_Light_Axe);
	COMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Attack_Heavy_Axe);
	COMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Weapon_Axe);
	COMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Equip_Weapon);
	COMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Unequip_Weapon);
	COMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Status_JumpToFinisher);


}