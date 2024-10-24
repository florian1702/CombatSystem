// Florian Wößner - All Rights Reserved


#include "AbilitySystem/MyAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/PlayerGameplayAbility.h"

void UMyAbilitySystemComponent::OnAbilityInputPressed(const FGameplayTag& InInputTag)
{
	if(!InInputTag.IsValid())
	{
		return;
	}
	
	for(const FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if(!AbilitySpec.DynamicAbilityTags.HasTagExact(InInputTag)) continue;

		TryActivateAbility(AbilitySpec.Handle);
	}
}

void UMyAbilitySystemComponent::OnAbilityInputReleased(const FGameplayTag& InInputTag)
{
}

void UMyAbilitySystemComponent::GrantPlayerWeaponAbilities(const TArray<FPlayerAbilitySet>& InDefaultWeaponAbilities,
	int32 ApplyLevel, TArray<FGameplayAbilitySpecHandle>& OutGrantedAbilitySpecHandles)
{
	if(InDefaultWeaponAbilities.IsEmpty()) return;

	for (const FPlayerAbilitySet& AbilitySet : InDefaultWeaponAbilities)
	{
		if(!AbilitySet.IsValid()) continue;

		FGameplayAbilitySpec AbilitySpec(AbilitySet.AbilityToGrant);
		AbilitySpec.SourceObject = GetAvatarActor();
		AbilitySpec.Level = ApplyLevel;
		AbilitySpec.DynamicAbilityTags.AddTag(AbilitySet.InputTag);
		
		OutGrantedAbilitySpecHandles.AddUnique(GiveAbility(AbilitySpec));
		
	}
}

void UMyAbilitySystemComponent::RemoveGrantedPlayerWeaponAbilities(
	TArray<FGameplayAbilitySpecHandle>& InSpecHandlesToRemove)
{
	if(InSpecHandlesToRemove.IsEmpty()) return;

	for(const FGameplayAbilitySpecHandle SpecHandle : InSpecHandlesToRemove)
	{
		if(SpecHandle.IsValid())
		{
			ClearAbility(SpecHandle);
		}
	}

	InSpecHandlesToRemove.Empty();
}
