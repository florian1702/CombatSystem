// Florian Wößner - All Rights Reserved


#include "AbilitySystem/Abilities/PlayerGameplayAbility.h"
#include "Characters/PlayerCharacter.h"
#include "Controllers/MyPlayerController.h"

APlayerCharacter* UPlayerGameplayAbility::GetPlayerCharacterFromActorInfo()
{
	if(!CachedPlayerCharacter.IsValid())
	{
		CachedPlayerCharacter = Cast<APlayerCharacter>(CurrentActorInfo->AvatarActor);
	}
	return CachedPlayerCharacter.IsValid() ? CachedPlayerCharacter.Get() : nullptr;
}

AMyPlayerController* UPlayerGameplayAbility::GetPlayerControllerFromActorInfo()
{
	if(!CachedPlayerController.IsValid())
	{
		CachedPlayerController = Cast<AMyPlayerController>(CurrentActorInfo->PlayerController);
	}
	return CachedPlayerController.IsValid() ? CachedPlayerController.Get() : nullptr;
}

UPlayerCombatComponent* UPlayerGameplayAbility::GetPlayerCombatComponentFromActorInfo()
{
	return GetPlayerCharacterFromActorInfo()->GetPlayerCombatComponent();
}
