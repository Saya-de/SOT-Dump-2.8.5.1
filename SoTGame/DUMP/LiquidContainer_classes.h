// Class LiquidContainer.LiquidContainerInterface
// Size: 0x28 (Inherited: 0x28)
struct ULiquidContainerInterface : UInterface {

	void SetLiquidLevel(float Level); // Function LiquidContainer.LiquidContainerInterface.SetLiquidLevel // Native|Public|BlueprintCallable // @ game+0x3b4a330
	float GetWantedLiquidLevel(); // Function LiquidContainer.LiquidContainerInterface.GetWantedLiquidLevel // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3b4a300
	float GetMaxLiquidCollectionAmount(); // Function LiquidContainer.LiquidContainerInterface.GetMaxLiquidCollectionAmount // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3b4a2d0
	float GetLiquidLevel(); // Function LiquidContainer.LiquidContainerInterface.GetLiquidLevel // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3b4a270
	float CollectLiquidAmount(float DesiredAmount); // Function LiquidContainer.LiquidContainerInterface.CollectLiquidAmount // Native|Public|BlueprintCallable // @ game+0x3b4a160
};

// Class LiquidContainer.LiquidContainerComponent
// Size: 0x128 (Inherited: 0xc8)
struct ULiquidContainerComponent : UActorComponent {
	struct FName LiquidMaterialName; // 0xc8(0x08)
	struct FName LiquidMaterialParameterName; // 0xd0(0x08)
	struct TArray<struct FLiquidTypeParams> LiquidTypeParams; // 0xd8(0x10)
	float StartingLiquidLevelNormalised; // 0xe8(0x04)
	char UnknownData_EC[0x4]; // 0xec(0x04)
	struct UCurveFloat* TransitionCurve; // 0xf0(0x08)
	float TransitionSpeedDecrease; // 0xf8(0x04)
	float TransitionSpeedIncrease; // 0xfc(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> LiquidMaterials; // 0x100(0x10)
	char UnknownData_110[0x18]; // 0x110(0x18)

	void SetLiquidType(char LiquidType); // Function LiquidContainer.LiquidContainerComponent.SetLiquidType // Final|Native|Public|BlueprintCallable // @ game+0x3b4a430
	void SetLiquidLevel(float Level); // Function LiquidContainer.LiquidContainerComponent.SetLiquidLevel // Final|Native|Public|BlueprintCallable // @ game+0x3b4a3b0
	float GetLiquidLevel(); // Function LiquidContainer.LiquidContainerComponent.GetLiquidLevel // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3b4a2a0
	void CollectLiquidMaterials(struct UMeshComponent* MeshComponent); // Function LiquidContainer.LiquidContainerComponent.CollectLiquidMaterials // Final|Native|Public|BlueprintCallable // @ game+0x3b4a1f0
};

// Class LiquidContainer.LiquidContainerServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct ULiquidContainerServiceInterface : UInterface {
};

// Class LiquidContainer.LiquidContainerService
// Size: 0x78 (Inherited: 0x70)
struct ULiquidContainerService : UInteractableService {
	char UnknownData_70[0x8]; // 0x70(0x08)
};

// Class LiquidContainer.LiquidLevelTransferComponent
// Size: 0xd8 (Inherited: 0xc8)
struct ULiquidLevelTransferComponent : UActorComponent {
	char UnknownData_C8[0x10]; // 0xc8(0x10)
};

