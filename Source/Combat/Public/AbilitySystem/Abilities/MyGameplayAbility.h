// Florian Wößner - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "MyGameplayAbility.generated.h"

class UMyAbilitySystemComponent;
class UPawnCombatComponent;

UENUM(BlueprintType)
enum class EMyAbilityActivationPolicy : uint8
{
	OnTriggerd,
	OnGiven
};

/**
 * 
 */
UCLASS()
class COMBAT_API UMyGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

	protected:
	//~ Begin UGameplayAbility Interface.
	virtual  void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	virtual  void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	//~ End UGameplayAbility Interface.

	UPROPERTY(EditAnywhere, Category = "Ability")
	EMyAbilityActivationPolicy AbilityActivationPolicy = EMyAbilityActivationPolicy::OnGiven;

	UFUNCTION(BlueprintPure, Category = "Ability")
	UPawnCombatComponent* GetPawnCombatComponentFromActorInfo() const;

	UFUNCTION(BlueprintPure, Category = "Ability")
	UMyAbilitySystemComponent* GetMyAbilitySystemComponentFromActorInfo() const;
};
