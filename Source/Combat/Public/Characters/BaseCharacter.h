// Florian Wößner - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "BaseCharacter.generated.h"

class UDataAsset_StartUpDataBase;
class UMyAttributeSet;
class UMyAbilitySystemComponent;
UCLASS()
class COMBAT_API ABaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();
	//~ Begin IAbilitySytemInterface Interface.
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	//~ End IAbilitySystemInterface Interface.
	FORCEINLINE UMyAbilitySystemComponent* GetMyAbilitySystemComponent() const {return MyAbilitySystemComponent;}
	FORCEINLINE UMyAttributeSet* GetMyAttributeSet() const {return MyAttributeSet;}

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	UMyAbilitySystemComponent* MyAbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	UMyAttributeSet* MyAttributeSet;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterData")
	TSoftObjectPtr<UDataAsset_StartUpDataBase> CharacterStartUpData;
	

	//~ Begin APawn Interface.
	virtual void PossessedBy(AController* NewController) override;
	//~ End APawn Interface.
};
