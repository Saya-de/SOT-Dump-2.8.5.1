// Class Occlusion.OcclusionInterface
// Size: 0x28 (Inherited: 0x28)
struct UOcclusionInterface : UInterface {
};

// Class Occlusion.OcclusionService
// Size: 0x90 (Inherited: 0x28)
struct UOcclusionService : UObject {
	char UnknownData_28[0x68]; // 0x28(0x68)

	void OnPrimaryActorEndPlay(struct AActor* InActor); // Function Occlusion.OcclusionService.OnPrimaryActorEndPlay // Final|Native|Private // @ game+0x37cd1e0
	void OnIgnoredActorEndPlay(struct AActor* InActor); // Function Occlusion.OcclusionService.OnIgnoredActorEndPlay // Final|Native|Private // @ game+0x37cd160
	void AutomationSetShouldDisableAsync(bool InShouldDisableAsync); // Function Occlusion.OcclusionService.AutomationSetShouldDisableAsync // Final|Native|Public|BlueprintCallable // @ game+0x37cd0d0
	bool AutomationGetShouldDisableAsync(); // Function Occlusion.OcclusionService.AutomationGetShouldDisableAsync // Final|Native|Public|BlueprintCallable // @ game+0x37cd0a0
};

