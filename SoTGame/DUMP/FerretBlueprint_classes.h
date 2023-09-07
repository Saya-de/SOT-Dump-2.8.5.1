// Class FerretBlueprint.MemFerretBlueprintInterface
// Size: 0x28 (Inherited: 0x28)
struct UMemFerretBlueprintInterface : UBlueprintFunctionLibrary {

	void StopTracking(); // Function FerretBlueprint.MemFerretBlueprintInterface.StopTracking // Final|Native|Static|Public|BlueprintCallable // @ game+0x14c1d40
	struct FString StopAndSave(struct FString FileName); // Function FerretBlueprint.MemFerretBlueprintInterface.StopAndSave // Final|Native|Static|Public|BlueprintCallable // @ game+0x14c1c50
	void StopAllocTracking(); // Function FerretBlueprint.MemFerretBlueprintInterface.StopAllocTracking // Final|Native|Static|Public|BlueprintCallable // @ game+0x14c1c30
	void StartTracking(); // Function FerretBlueprint.MemFerretBlueprintInterface.StartTracking // Final|Native|Static|Public|BlueprintCallable // @ game+0x14c1c10
	struct FString Snapshot(struct FString FileName, bool ShouldClearData); // Function FerretBlueprint.MemFerretBlueprintInterface.Snapshot // Final|Native|Static|Public|BlueprintCallable // @ game+0x14c1ae0
	void SetMemoryStatCollectionInterval(float CollectionInterval); // Function FerretBlueprint.MemFerretBlueprintInterface.SetMemoryStatCollectionInterval // Final|Native|Static|Public|BlueprintCallable // @ game+0x14c1a70
	void Reset(); // Function FerretBlueprint.MemFerretBlueprintInterface.Reset // Final|Native|Static|Public|BlueprintCallable // @ game+0x14c1a50
};

