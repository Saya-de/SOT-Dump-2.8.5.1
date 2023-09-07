// Class ConditionalFramework.ActorSpecifierInterface
// Size: 0x28 (Inherited: 0x28)
struct UActorSpecifierInterface : UInterface {
};

// Class ConditionalFramework.ActorSpecifierComponent
// Size: 0xd8 (Inherited: 0xc8)
struct UActorSpecifierComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct AActor* SpecifiedActor; // 0xd0(0x08)
};

// Class ConditionalFramework.ConditionRootAsset
// Size: 0x48 (Inherited: 0x28)
struct UConditionRootAsset : UDataAsset {
	struct FConditionInstance ConditionRoot; // 0x28(0x20)
};

