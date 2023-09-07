// Class SplinePathing.FixedSplinePathingActor
// Size: 0x418 (Inherited: 0x3c8)
struct AFixedSplinePathingActor : AActor {
	struct USceneComponent* Root; // 0x3c8(0x08)
	struct UFakedBuoyancyComponent* FakedBuoyancyComponent; // 0x3d0(0x08)
	float Speed; // 0x3d8(0x04)
	char UnknownData_3DC[0x4]; // 0x3dc(0x04)
	struct USplineComponent* FollowingSpline; // 0x3e0(0x08)
	bool CanTick; // 0x3e8(0x01)
	char UnknownData_3E9[0x2f]; // 0x3e9(0x2f)

	void SetSplineActor(struct AActor* Actor); // Function SplinePathing.FixedSplinePathingActor.SetSplineActor // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x3f24c20
	void OnRep_SplineActor(); // Function SplinePathing.FixedSplinePathingActor.OnRep_SplineActor // Final|Native|Private // @ game+0x3f24c00
	void OnRep_CanTick(); // Function SplinePathing.FixedSplinePathingActor.OnRep_CanTick // Final|RequiredAPI|Native|Private // @ game+0x3f24be0
};

// Class SplinePathing.SplinePathingActor
// Size: 0x4b0 (Inherited: 0x3c8)
struct ASplinePathingActor : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct FObjectMessagingDispatcher ObjectMessageDispatcher; // 0x3d0(0xa0)
	char UnknownData_470[0x10]; // 0x470(0x10)
	struct USceneComponent* Root; // 0x480(0x08)
	struct USplineComponent* Spline; // 0x488(0x08)
	float Force; // 0x490(0x04)
	float MaxVelocity; // 0x494(0x04)
	float DistanceAlongSplineToTarget; // 0x498(0x04)
	int32_t DistanceFromDestination; // 0x49c(0x04)
	char UnknownData_4A0[0x10]; // 0x4a0(0x10)
};

