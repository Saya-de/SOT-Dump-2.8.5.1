// Enum AIGoalFramework.EAIGoalTargetChangedReason
enum class EAIGoalTargetChangedReason : uint8_t {
	NoPreviousTarget,
	TargetOutOfRange,
	TargetEnteredInvalidMovementMode,
	HigherPriorityTargetFound,
	EAIGoalTargetChangedReason_MAX,
};

// ScriptStruct AIGoalFramework.AIGoalMovementModeFilter
// Size: 0x20 (Inherited: 0x00)
struct FAIGoalMovementModeFilter {
	struct TArray<char> DisallowedMovementModes; // 0x00(0x10)
	struct TArray<char> DisallowedCustomMovementModes; // 0x10(0x10)
};

// ScriptStruct AIGoalFramework.EventAIGoalHighPriorityTargetSuggestion
// Size: 0x08 (Inherited: 0x00)
struct FEventAIGoalHighPriorityTargetSuggestion {
	struct AActor* HighPriorityTarget; // 0x00(0x08)
};

// ScriptStruct AIGoalFramework.EventAIGoalTargetActorChanged
// Size: 0x18 (Inherited: 0x00)
struct FEventAIGoalTargetActorChanged {
	struct AActor* PreviousTargetActor; // 0x00(0x08)
	struct AActor* NewTargetActor; // 0x08(0x08)
	char TargetChangedReason; // 0x10(0x01)
	char InvalidMovementMode; // 0x11(0x01)
	char UnknownData_12[0x6]; // 0x12(0x06)
};

