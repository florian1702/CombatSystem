// Florian Wößner - All Rights Reserved


#include "DataAssets/StartUpData/DataAsset_PlayerStartUpData.h"

#include "AbilitySystem/MyAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/PlayerGameplayAbility.h"
#include "Types/StructTypes.h"

void UDataAsset_PlayerStartUpData::GiveToAbilitySystemComponent(UMyAbilitySystemComponent* InASCToGive,
                                                                int32 ApplyLevel)
{
	Super::GiveToAbilitySystemComponent(InASCToGive, ApplyLevel);

	for(const FPlayerAbilitySet& AbilitySet : PlayerStartUpAbilitySets)
	{
		if(!AbilitySet.IsValid()) continue;

		FGameplayAbilitySpec AbilitySpec(AbilitySet.AbilityToGrant);
		AbilitySpec.SourceObject = InASCToGive->GetAvatarActor();
		AbilitySpec.Level = ApplyLevel;
		AbilitySpec.DynamicAbilityTags.AddTag(AbilitySet.InputTag);
		
		InASCToGive->GiveAbility(AbilitySpec);
	}
}
