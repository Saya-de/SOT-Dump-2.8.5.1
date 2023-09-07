// Enum TradeRouteFramework.ETradeRouteMapOrientation
enum class ETradeRouteMapOrientation : uint8_t {
	Landscape,
	Portrait,
	ETradeRouteMapOrientation_MAX,
};

// Enum TradeRouteFramework.ETradeRouteMappingFilter
enum class ETradeRouteMappingFilter : uint8_t {
	MainSeas,
	DVR,
	ETradeRouteMappingFilter_MAX,
};

// ScriptStruct TradeRouteFramework.QuestVariableTradeRouteData
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableTradeRouteData : FQuestVariable {
};

// ScriptStruct TradeRouteFramework.TradeRouteMapping
// Size: 0x28 (Inherited: 0x00)
struct FTradeRouteMapping {
	char Filter; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FIslandSelectionType StartIsland; // 0x04(0x08)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UClass* DifficultyBand; // 0x10(0x08)
	struct FStringAssetReference TradeRouteReference; // 0x18(0x10)
};

// ScriptStruct TradeRouteFramework.TradeRouteMappingFilterQuestVariable
// Size: 0x30 (Inherited: 0x30)
struct FTradeRouteMappingFilterQuestVariable : FQuestVariable {
};

