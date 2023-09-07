// ScriptStruct InventoryPersistenceFramework.InventoryPersistencePlayerData
// Size: 0x98 (Inherited: 0x00)
struct FInventoryPersistencePlayerData {
	struct FPirateIdentity PirateIdentity; // 0x00(0x78)
	struct FGuid PirateCrewId; // 0x78(0x10)
	struct TArray<struct FPlayerItemCategorySnapshots> ItemCategorySnapshots; // 0x88(0x10)
};

// ScriptStruct InventoryPersistenceFramework.PlayerItemCategorySnapshots
// Size: 0x18 (Inherited: 0x00)
struct FPlayerItemCategorySnapshots {
	struct UClass* ItemCategory; // 0x00(0x08)
	struct TArray<struct FItemSnapshot> ItemSnapshots; // 0x08(0x10)
};

// ScriptStruct InventoryPersistenceFramework.EventPlayerLoggedInPersistence
// Size: 0x08 (Inherited: 0x00)
struct FEventPlayerLoggedInPersistence {
	struct AController* PlayerController; // 0x00(0x08)
};

// ScriptStruct InventoryPersistenceFramework.EventPlayerPawnLeavingGame
// Size: 0x01 (Inherited: 0x00)
struct FEventPlayerPawnLeavingGame {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

