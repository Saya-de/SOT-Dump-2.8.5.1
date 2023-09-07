// Class Interaction.InteractableComponent
// Size: 0x128 (Inherited: 0xc8)
struct UInteractableComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct FName FeatureFlag; // 0xd0(0x08)
	struct FVector BoxExtent; // 0xd8(0x0c)
	struct FVector BoxOrigin; // 0xe4(0x0c)
	struct FRotator BoxRotation; // 0xf0(0x0c)
	char MayBeGrouped : 1; // 0xfc(0x01)
	char ProxyForActorInteraction : 1; // 0xfc(0x01)
	char RequiresFacingFront : 1; // 0xfc(0x01)
	char RequiresNotAirborne : 1; // 0xfc(0x01)
	char RequiresNotSwimming : 1; // 0xfc(0x01)
	char UnknownData_FC_5 : 3; // 0xfc(0x01)
	char UnknownData_FD[0x3]; // 0xfd(0x03)
	float InteractionRadius; // 0x100(0x04)
	char UnknownData_104[0x4]; // 0x104(0x04)
	struct TArray<struct UInteractionPrerequisiteBase*> InteractionPrerequisites; // 0x108(0x10)
	struct UInteractableArea* InteractableArea; // 0x118(0x08)
	char CurrentInteractionState; // 0x120(0x01)
	char UnknownData_121[0x7]; // 0x121(0x07)

	void SetBoxRotation(struct FRotator InBoxRotation); // Function Interaction.InteractableComponent.SetBoxRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x37f0090
	void SetBoxOrigin(struct FVector IntBoxOrigin); // Function Interaction.InteractableComponent.SetBoxOrigin // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x37f0000
	void SetBoxExtent(struct FVector InBoxExtent); // Function Interaction.InteractableComponent.SetBoxExtent // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x37eff70
	struct UInteractableArea* GetInteractableArea(); // Function Interaction.InteractableComponent.GetInteractableArea // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x37efbf0
	struct FVector GetBoxWorldOrigin(); // Function Interaction.InteractableComponent.GetBoxWorldOrigin // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x37efa40
	float GetBoxSphereRadius(); // Function Interaction.InteractableComponent.GetBoxSphereRadius // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x37efa10
	struct FRotator GetBoxRotation(); // Function Interaction.InteractableComponent.GetBoxRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x37ef9d0
	struct FVector GetBoxOrigin(); // Function Interaction.InteractableComponent.GetBoxOrigin // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x37ef990
	struct FVector GetBoxExtent(); // Function Interaction.InteractableComponent.GetBoxExtent // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x37ef950
};

// Class Interaction.InteractionValidatorSetterInterface
// Size: 0x28 (Inherited: 0x28)
struct UInteractionValidatorSetterInterface : UInterface {
};

// Class Interaction.CharacterInteractionComponent
// Size: 0x6c0 (Inherited: 0x5f0)
struct UCharacterInteractionComponent : UBoxComponent {
	struct UInteractableArea* CurrentOptimalInteractable; // 0x5f0(0x08)
	char UnknownData_5F8[0xc8]; // 0x5f8(0xc8)

	bool IsInteractionValid(struct UObject* InInteractable); // Function Interaction.CharacterInteractionComponent.IsInteractionValid // Final|Native|Public|BlueprintCallable // @ game+0x37efdc0
	void InvalidateOptimalObject(); // Function Interaction.CharacterInteractionComponent.InvalidateOptimalObject // Final|Native|Public|BlueprintCallable // @ game+0x37efd70
	struct UInteractableArea* GetOptimalFocusObject(); // Function Interaction.CharacterInteractionComponent.GetOptimalFocusObject // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x37efc50
	void ClearAllPolicies(); // Function Interaction.CharacterInteractionComponent.ClearAllPolicies // Final|Native|Public|BlueprintCallable // @ game+0x37ef6d0
};

// Class Interaction.GroupedInteractableAreaComponent
// Size: 0xc8 (Inherited: 0xc8)
struct UGroupedInteractableAreaComponent : UActorComponent {
};

// Class Interaction.InteractableArea
// Size: 0x60 (Inherited: 0x28)
struct UInteractableArea : UObject {
	struct FBoxSphereBounds Bounds; // 0x28(0x1c)
	struct FName Name; // 0x44(0x08)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct UObject* Interactable; // 0x50(0x08)
	struct AActor* Parent; // 0x58(0x08)

	void SetParent(struct AActor* InParent); // Function Interaction.InteractableArea.SetParent // Final|Native|Public|BlueprintCallable // @ game+0x37f0280
	void SetInteractable(struct UObject* InInteractable); // Function Interaction.InteractableArea.SetInteractable // Final|Native|Public|BlueprintCallable // @ game+0x37f0120
	void SetAreaName(struct FName InName); // Function Interaction.InteractableArea.SetAreaName // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x37efee0
	void SetAreaBounds(struct FBoxSphereBounds InBounds); // Function Interaction.InteractableArea.SetAreaBounds // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x37efe50
	struct AActor* GetParent(); // Function Interaction.InteractableArea.GetParent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x37efc80
	struct UObject* GetInteractable(); // Function Interaction.InteractableArea.GetInteractable // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x37efbc0
	struct FName GetAreaName(); // Function Interaction.InteractableArea.GetAreaName // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x37ef910
	struct FVector GetAreaLocation(); // Function Interaction.InteractableArea.GetAreaLocation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x37ef8d0
	struct FBoxSphereBounds GetAreaBounds(); // Function Interaction.InteractableArea.GetAreaBounds // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x37ef890
};

// Class Interaction.InteractableInterface
// Size: 0x28 (Inherited: 0x28)
struct UInteractableInterface : UInterface {

	bool ShouldDrawTooltipInWorldSpace(struct AActor* InInteractor, struct FVector DesiredTooltipWorldPosition); // Function Interaction.InteractableInterface.ShouldDrawTooltipInWorldSpace // Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x37f0300
	bool IsInteractableDisabled(); // Function Interaction.InteractableInterface.IsInteractableDisabled // Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x37efd90
	void Interact(struct AActor* InInteractor, struct UClass* NotificationInputId); // Function Interaction.InteractableInterface.Interact // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x37efcb0
	char GetInteractionState(); // Function Interaction.InteractableInterface.GetInteractionState // Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x37efc20
	struct FVector GetFrontFacingVector(); // Function Interaction.InteractableInterface.GetFrontFacingVector // Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x37efb80
	struct FVector GetClosestInteractionPoint(struct FVector ReferencePosition, float OutInteractionPointRadius); // Function Interaction.InteractableInterface.GetClosestInteractionPoint // Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x37efa80
	void GetActorsToIgnoreDuringOcclusionChecker(struct TArray<struct AActor*> ActorsToIgnore); // Function Interaction.InteractableInterface.GetActorsToIgnoreDuringOcclusionChecker // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x37ef7e0
	struct UActionRulesComponent* GetActionRulesComponent(); // Function Interaction.InteractableInterface.GetActionRulesComponent // Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x37ef7b0
	bool DoesRequireNotSwimming(); // Function Interaction.InteractableInterface.DoesRequireNotSwimming // Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x37ef780
	bool DoesRequireNotBeingAirborne(); // Function Interaction.InteractableInterface.DoesRequireNotBeingAirborne // Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x37ef750
	bool DoesRequireFacingFront(); // Function Interaction.InteractableInterface.DoesRequireFacingFront // Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x37ef720
	bool DoesRequireBeingAlive(); // Function Interaction.InteractableInterface.DoesRequireBeingAlive // Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x37ef6f0
	bool CanInteractWithNotificationInputId(struct AActor* InInteractor, struct UClass* NotificationInputId); // Function Interaction.InteractableInterface.CanInteractWithNotificationInputId // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x37ef600
	bool CanInteract(struct AActor* InInteractor); // Function Interaction.InteractableInterface.CanInteract // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x37ef560
};

// Class Interaction.InteractableBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UInteractableBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void SetInteractionState(struct AActor* InteractableActor, char NewInteractableState); // Function Interaction.InteractableBlueprintFunctionLibrary.SetInteractionState // Final|Native|Static|Public|BlueprintCallable // @ game+0x37f01a0
};

// Class Interaction.InteractableIdentifierInterface
// Size: 0x28 (Inherited: 0x28)
struct UInteractableIdentifierInterface : UInterface {
};

// Class Interaction.InteractableServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UInteractableServiceInterface : UInterface {
};

// Class Interaction.InteractableService
// Size: 0x70 (Inherited: 0x28)
struct UInteractableService : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct TArray<struct UInteractableArea*> InteractableAreas; // 0x38(0x10)
	char UnknownData_48[0x28]; // 0x48(0x28)
};

// Class Interaction.InteractionPreventionInterface
// Size: 0x28 (Inherited: 0x28)
struct UInteractionPreventionInterface : UInterface {
};

// Class Interaction.InteractionPreventionComponent
// Size: 0xe0 (Inherited: 0xc8)
struct UInteractionPreventionComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct TArray<struct AActor*> ActorsToPreventInteractingWith; // 0xd0(0x10)
};

// Class Interaction.InteractionValidatorOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct UInteractionValidatorOwnerInterface : UInterface {
};

// Class Interaction.InteractorInterface
// Size: 0x28 (Inherited: 0x28)
struct UInteractorInterface : UInterface {
};

// Class Interaction.InteractorComponent
// Size: 0xd0 (Inherited: 0xc8)
struct UInteractorComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
};

// Class Interaction.MockActorWithCharacterInteractionComponent
// Size: 0x690 (Inherited: 0x5e0)
struct AMockActorWithCharacterInteractionComponent : ACharacter {
	char UnknownData_5E0[0x8]; // 0x5e0(0x08)
	struct UCharacterInteractionComponent* CharacterInteractionComponent; // 0x5e8(0x08)
	char UnknownData_5F0[0xa0]; // 0x5f0(0xa0)
};

// Class Interaction.MockInteractableService
// Size: 0x40 (Inherited: 0x28)
struct UMockInteractableService : UObject {
	char UnknownData_28[0x18]; // 0x28(0x18)
};

// Class Interaction.MockInteractorActor
// Size: 0x3f8 (Inherited: 0x3c8)
struct AMockInteractorActor : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct UObject* FocusedInteractable; // 0x3d0(0x08)
	struct UObject* InteractedObject; // 0x3d8(0x08)
	struct UClass* InteractNotificationType; // 0x3e0(0x08)
	struct TArray<struct UClass*> ValidInteractNotificationIds; // 0x3e8(0x10)
};

// Class Interaction.PlayerInteractionTrackerInterface
// Size: 0x28 (Inherited: 0x28)
struct UPlayerInteractionTrackerInterface : UInterface {
};

// Class Interaction.PlayerInteractionTrackerComponent
// Size: 0xf0 (Inherited: 0xc8)
struct UPlayerInteractionTrackerComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct TArray<struct FUniqueNetIdRepl> InteractedPlayers; // 0xd0(0x10)
	char UnknownData_E0[0x10]; // 0xe0(0x10)
};

// Class Interaction.SelfInteractionInterface
// Size: 0x28 (Inherited: 0x28)
struct USelfInteractionInterface : UInterface {
};

