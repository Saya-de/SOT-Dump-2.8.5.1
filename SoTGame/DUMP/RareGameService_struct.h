// Enum RareGameService.ERareGameServiceRole
enum class ERareGameServiceRole : uint8_t {
	None,
	Server,
	Client,
	ServerAndClient,
	ERareGameServiceRole_MAX,
};

// ScriptStruct RareGameService.RareGameServiceSpecification
// Size: 0x18 (Inherited: 0x00)
struct FRareGameServiceSpecification {
	struct FName ServiceName; // 0x00(0x08)
	struct UClass* ServiceClassToInstantiate; // 0x08(0x08)
	char ServiceRole; // 0x10(0x01)
	bool Replicates; // 0x11(0x01)
	char UnknownData_12[0x6]; // 0x12(0x06)
};

// ScriptStruct RareGameService.RareGameServiceManagerServiceInitialisedEvent
// Size: 0x08 (Inherited: 0x00)
struct FRareGameServiceManagerServiceInitialisedEvent {
	struct UObject* ServiceObject; // 0x00(0x08)
};

// ScriptStruct RareGameService.RareGameServiceManagerStateChangedEvent
// Size: 0x02 (Inherited: 0x00)
struct FRareGameServiceManagerStateChangedEvent {
	char UnknownData_0[0x2]; // 0x00(0x02)
};

