// ScriptStruct AIGoals.BestActionSpotSelectionCriteria
// Size: 0x2c (Inherited: 0x00)
struct FBestActionSpotSelectionCriteria {
	bool PreferActionSpotsRelativeToTargetForwardFacingDirection; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float ForwardFacingPreferenceMinAngleInDegrees; // 0x04(0x04)
	float ForwardFacingPreferenceMaxAngleInDegrees; // 0x08(0x04)
	float ForwardFacingPreferenceMinDistance; // 0x0c(0x04)
	float ForwardFacingPreferenceMaxDistance; // 0x10(0x04)
	bool PreferStayingAtCurrentSpotOverMovingToNewSpot; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
	float StayingPreferenceDistance; // 0x18(0x04)
	bool ShouldAlwaysRefreshWhileOwnerMoving; // 0x1c(0x01)
	bool ShouldRefreshAfterTargetMovesBeyondThreshold; // 0x1d(0x01)
	char UnknownData_1E[0x2]; // 0x1e(0x02)
	float TargetMovementRefreshThresholdDistance; // 0x20(0x04)
	bool ShouldRefreshAfterStayingForTooLong; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
	float RefreshTimeInSeconds; // 0x28(0x04)
};

// ScriptStruct AIGoals.HasAllActionContextTagsCondition
// Size: 0x40 (Inherited: 0x28)
struct FHasAllActionContextTagsCondition : FTargetedPayloadConditionBase {
	struct TArray<struct UClass*> RequiredContextTags; // 0x28(0x10)
	bool ExpectedValue; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

