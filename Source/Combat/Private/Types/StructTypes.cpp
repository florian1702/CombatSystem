// Florian Wößner - All Rights Reserved


#include "Types/StructTypes.h"
#include "AbilitySystem/Abilities/PlayerGameplayAbility.h"

bool FPlayerAbilitySet::IsValid() const
{
	return InputTag.IsValid() && AbilityToGrant;
}
