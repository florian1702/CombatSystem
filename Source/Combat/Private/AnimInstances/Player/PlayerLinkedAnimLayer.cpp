// Florian Wößner - All Rights Reserved


#include "AnimInstances/Player/PlayerLinkedAnimLayer.h"
#include "AnimInstances/Player/PlayerAnimInstance.h"

UPlayerAnimInstance* UPlayerLinkedAnimLayer::GetPlayerAnimInstance() const
{
	return Cast<UPlayerAnimInstance>(GetOwningComponent()->GetAnimInstance());
}
