// Florian Wößner - All Rights Reserved


#include "MyGameplayTags.h"


namespace GameplayTags
{
	/** Input Tags **/
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Move, "InputTag.Move");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Look, "InputTag.Look");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_EquipWeapon, "InputTag.EquipWeapon");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_UnequipWeapon, "InputTag.UnequipWeapon");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_LightAttack, "InputTag.LightAttack");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_HeavyAttack, "InputTag.HeavyAttack");
	
	/** Player Tags **/
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Equip_Weapon, "Player.Ability.Equip.Weapon");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Unequip_Weapon, "Player.Ability.Unequip.Weapon");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack_Light_Axe, "Player.Ability.Attack.Light.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack_Heavy_Axe, "Player.Ability.Attack.Heavy.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Weapon_Axe, "Player.Weapon.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_Equip_Weapon, "Player.Event.Equip.Weapon");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_Unequip_Weapon, "Player.Event.Unequip.Weapon");
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_JumpToFinisher, "Player.Status.JumpToFinisher");
	
}