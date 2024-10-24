// Florian Wößner - All Rights Reserved


#include "DataAssets/Input/DataAsset_InputConfig.h"

UInputAction* UDataAsset_InputConfig::FindNativeInputActionByTag(const FGameplayTag& InputTag) const
{
	for(const FInputActionConfig& InputActionConfig : NativeInputActions)
	{
		if(InputActionConfig.InputTag == InputTag && InputActionConfig.InputAction)
		{
			return InputActionConfig.InputAction;
		}
	}
	return nullptr;
}
