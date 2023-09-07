// Class AIGoals.AlwaysEvaluatesTrueAIGoal
// Size: 0x38 (Inherited: 0x38)
struct UAlwaysEvaluatesTrueAIGoal : UAIGoal {
};

// Class AIGoals.BTService_SetBestActionSpotNearTarget
// Size: 0x108 (Inherited: 0x70)
struct UBTService_SetBestActionSpotNearTarget : UBTService {
	struct FBlackboardKeySelector TargetKey; // 0x70(0x28)
	struct FBlackboardKeySelector BestActionSpotKey; // 0x98(0x28)
	struct FBestActionSpotSelectionCriteria BestActionSpotSelectionCriteria; // 0xc0(0x2c)
	char UnknownData_EC[0x1c]; // 0xec(0x1c)
};

// Class AIGoals.WhileActionSpotAvailableForPatrolAIGoal
// Size: 0x78 (Inherited: 0x38)
struct UWhileActionSpotAvailableForPatrolAIGoal : UAIGoal {
	float MinTimeToChangePatrolSpot; // 0x38(0x04)
	float MaxTimeToChangePatrolSpot; // 0x3c(0x04)
	struct UClass* PatrolActivityType; // 0x40(0x08)
	TScriptInterface<struct UAIActionSpotInterface> TargetActionSpotInterface; // 0x48(0x10)
	char UnknownData_58[0x20]; // 0x58(0x20)
};

// Class AIGoals.WhileBlackboardKeySetAIGoal
// Size: 0x40 (Inherited: 0x38)
struct UWhileBlackboardKeySetAIGoal : UAIGoal {
	struct FName BlackboardKey; // 0x38(0x08)

	struct TArray<struct FString> GetAllowedBlackboardKeys(); // Function AIGoals.WhileBlackboardKeySetAIGoal.GetAllowedBlackboardKeys // Final|Native|Private|Const // @ game+0x2bbdf0
};

// Class AIGoals.WhileCanBeInteractedWithAndPlayerIsNearbyAIGoal
// Size: 0x70 (Inherited: 0x38)
struct UWhileCanBeInteractedWithAndPlayerIsNearbyAIGoal : UAIGoal {
	float InnerRadius; // 0x38(0x04)
	float OuterRadius; // 0x3c(0x04)
	struct FAIGoalMovementModeFilter MovementModeFilter; // 0x40(0x20)
	bool ShouldOnlyActivateWhileDocked; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
	struct APawn* TargetPlayerPawn; // 0x68(0x08)
};

// Class AIGoals.WhilePlayerWithinAreaAIGoal
// Size: 0xf0 (Inherited: 0x38)
struct UWhilePlayerWithinAreaAIGoal : UAIGoal {
	float EnterAreaTriggerDistance; // 0x38(0x04)
	float ExitAreaTriggerDistance; // 0x3c(0x04)
	struct FAIGoalMovementModeFilter MovementModeFilter; // 0x40(0x20)
	struct UClass* WhileActiveActivityType; // 0x60(0x08)
	struct APawn* TargetPlayerPawn; // 0x68(0x08)
	char UnknownData_70[0x80]; // 0x70(0x80)
};

