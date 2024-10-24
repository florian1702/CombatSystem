// Florian Wößner - All Rights Reserved


#include "FunctionLibrary.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystem/MyAbilitySystemComponent.h"

UMyAbilitySystemComponent* UFunctionLibrary::NativeGetASCFromActor(AActor* InActor)
{
    check(InActor);

    return CastChecked<UMyAbilitySystemComponent>(UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(InActor));
}

bool UFunctionLibrary::NativeDoesActorHaveTag(AActor* InActor, FGameplayTag TagToCheck)
{
    UMyAbilitySystemComponent* ASC = NativeGetASCFromActor(InActor);
    return ASC->HasMatchingGameplayTag(TagToCheck);
}

void UFunctionLibrary::AddGameplayTagToActorIfNone(AActor* InActor, FGameplayTag TagToAdd)
{
    UMyAbilitySystemComponent* ASC = NativeGetASCFromActor(InActor);
    if(!ASC->HasMatchingGameplayTag(TagToAdd))
    {
        ASC->AddLooseGameplayTag(TagToAdd);
    }
}

void UFunctionLibrary::RemoveGameplayTagFromActorIfFound(AActor* InActor, FGameplayTag TagToRemove)
{
    UMyAbilitySystemComponent* ASC = NativeGetASCFromActor(InActor);
    if(ASC->HasMatchingGameplayTag(TagToRemove))
    {
        ASC->RemoveLooseGameplayTag(TagToRemove);
    }
}

void UFunctionLibrary::BP_DoesActorHaveTag(AActor* InActor, FGameplayTag TagToCheck, EConfirmType& OutConfirmType)
{
    OutConfirmType = NativeDoesActorHaveTag(InActor, TagToCheck) ? EConfirmType::Yes : EConfirmType::No;
}

