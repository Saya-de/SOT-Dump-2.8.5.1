// Class RareGameService.RareGameServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct URareGameServiceInterface : UInterface {
};

// Class RareGameService.RareGameServiceProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct URareGameServiceProviderInterface : UInterface {

	void UnregisterRareGameService(struct UObject* Service); // Function RareGameService.RareGameServiceProviderInterface.UnregisterRareGameService // Native|Public|BlueprintCallable // @ game+0x4994600
	bool RegisterRareGameService(struct UObject* Service, struct UClass* Class); // Function RareGameService.RareGameServiceProviderInterface.RegisterRareGameService // Native|Public|BlueprintCallable // @ game+0x4994530
	struct UObject* GetRareGameService(struct UClass* Class); // Function RareGameService.RareGameServiceProviderInterface.GetRareGameService // Native|Public|BlueprintCallable // @ game+0x4994470
};

// Class RareGameService.RareGameServiceManagerComponent
// Size: 0x130 (Inherited: 0xc8)
struct URareGameServiceManagerComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct TArray<struct UObject*> ReplicatedServices; // 0xd0(0x10)
	char UnknownData_E0[0x40]; // 0xe0(0x40)
	struct TArray<struct FRareGameServiceSpecification> ServiceSpecifications; // 0x120(0x10)

	void OnRep_ReplicatedServices(); // Function RareGameService.RareGameServiceManagerComponent.OnRep_ReplicatedServices // Final|Native|Private // @ game+0x4994510
};

