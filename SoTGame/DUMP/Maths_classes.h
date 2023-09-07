// Class Maths.AngleMaths
// Size: 0x28 (Inherited: 0x28)
struct UAngleMaths : UBlueprintFunctionLibrary {

	float CalculateEulerAngle(float FromAngle, float ToAngle); // Function Maths.AngleMaths.CalculateEulerAngle // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x334e360
	float AngleMoveTowardsMod180(float Angle, float TargetAngle, float Rate); // Function Maths.AngleMaths.AngleMoveTowardsMod180 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x334dd20
	float AngleMod360(float Angle); // Function Maths.AngleMaths.AngleMod360 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x334dca0
	float AngleMod180(float Angle); // Function Maths.AngleMaths.AngleMod180 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x334dc20
	float AngleLerpShortest(float Start, float End, float Amount); // Function Maths.AngleMaths.AngleLerpShortest // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x334db10
};

// Class Maths.BuoyancyMaths
// Size: 0x28 (Inherited: 0x28)
struct UBuoyancyMaths : UBlueprintFunctionLibrary {

	float CalculateMagnitude(float InSubmersedVolume, float InFluidDensity, float InGravity); // Function Maths.BuoyancyMaths.CalculateMagnitude // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x334e780
	float CalcBlendedProbeCurveBuoyancy(struct UCurveFloat* PrimaryBuoyancyCurve, struct UCurveFloat* SecondaryBuoyancyCurve, struct UCurveFloat* TertiaryBuoyancyCurve, float UnaryDistUnderwater, float Blend, char BlendType); // Function Maths.BuoyancyMaths.CalcBlendedProbeCurveBuoyancy // Final|Native|Static|Public|BlueprintCallable // @ game+0x334e1b0
};

// Class Maths.CircleMaths
// Size: 0x28 (Inherited: 0x28)
struct UCircleMaths : UBlueprintFunctionLibrary {

	int32_t ConvertAngleToCircleSectorIndex(float AngleInDegrees, int32_t NumberOfSectors, float IgnoredFraction); // Function Maths.CircleMaths.ConvertAngleToCircleSectorIndex // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x334ea70
	float Area(float InRadius); // Function Maths.CircleMaths.Area // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x334df60
};

// Class Maths.CurveMaths
// Size: 0x28 (Inherited: 0x28)
struct UCurveMaths : UBlueprintFunctionLibrary {

	float GetDistanceSquaredToCurve(struct FVector WorldSpacePos, struct USplineComponent* Spline); // Function Maths.CurveMaths.GetDistanceSquaredToCurve // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3350040
	float GetClosestTimeOnCurve(struct FVector WorldSpacePos, struct USplineComponent* Spline); // Function Maths.CurveMaths.GetClosestTimeOnCurve // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x334feb0
	struct FVector GetClosestPositionOnCurve(struct FVector WorldSpacePos, struct USplineComponent* Spline); // Function Maths.CurveMaths.GetClosestPositionOnCurve // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x334fdd0
	float GetClosestPointOnCurve(struct FVector WorldSpacePos, struct USplineComponent* Spline); // Function Maths.CurveMaths.GetClosestPointOnCurve // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x334fd00
	struct FVector GetCentre(struct USplineComponent* Spline); // Function Maths.CurveMaths.GetCentre // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x334fc70
};

// Class Maths.Density
// Size: 0x28 (Inherited: 0x28)
struct UDensity : UBlueprintFunctionLibrary {

	float Water(); // Function Maths.Density.Water // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3352910
	float SeaWater(); // Function Maths.Density.SeaWater // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3351c40
	float Min(); // Function Maths.Density.Min // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x33516b0
	float Max(); // Function Maths.Density.Max // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3351650
	bool IsValid(float InValue); // Function Maths.Density.IsValid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3350d70
	float Air(); // Function Maths.Density.Air // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x334dae0
};

// Class Maths.DragCoefficients
// Size: 0x28 (Inherited: 0x28)
struct UDragCoefficients : UBlueprintFunctionLibrary {

	float Sphere(); // Function Maths.DragCoefficients.Sphere // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3352070
	float PlanePerpendicularToFlow(); // Function Maths.DragCoefficients.PlanePerpendicularToFlow // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3351890
	float PlaneParallelToFlow(); // Function Maths.DragCoefficients.PlaneParallelToFlow // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3351860
	float Min(); // Function Maths.DragCoefficients.Min // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x33516e0
	float Max(); // Function Maths.DragCoefficients.Max // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3351680
	bool IsValid(float Value); // Function Maths.DragCoefficients.IsValid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3350df0
	float Cube(); // Function Maths.DragCoefficients.Cube // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x334ed10
};

// Class Maths.DragMaths
// Size: 0x28 (Inherited: 0x28)
struct UDragMaths : UBlueprintFunctionLibrary {

	float CalculateMagnitude(float InSurfaceArea, float InSpeedReltaiveToFluid, float InDragCoefficient, float InFluidDensity); // Function Maths.DragMaths.CalculateMagnitude // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x334e890
};

// Class Maths.FloatMaths
// Size: 0x28 (Inherited: 0x28)
struct UFloatMaths : UBlueprintFunctionLibrary {

	float WrapToRange(float Input, float LowerLimit, float UpperLimit); // Function Maths.FloatMaths.WrapToRange // Final|Native|Static|Public|BlueprintCallable // @ game+0x3352b10
	float WrapToPositiveRange(float Input, float UpperLimit); // Function Maths.FloatMaths.WrapToPositiveRange // Final|Native|Static|Public|BlueprintCallable // @ game+0x3352a50
	float WrapAroundPivot(float Input, float Pivot, float Range); // Function Maths.FloatMaths.WrapAroundPivot // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3352940
	float MoveTowards(float From, float To, float Speed, float Time); // Function Maths.FloatMaths.MoveTowards // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3351710
	float Map(float ValueToMapFrom, float FromRangeStart, float FromRangeEnd, float ToRangeStart, float ToRangeEnd, bool Clamp); // Function Maths.FloatMaths.Map // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3351480
	bool IncrementCounter(float Counter, float Delta, float CounterMax); // Function Maths.FloatMaths.IncrementCounter // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3350900
	float GetShortestSignedDistanceBetweenPointsInWrappedRange(float FromValue, float ToValue, float LowerLimit, float UpperLimit); // Function Maths.FloatMaths.GetShortestSignedDistanceBetweenPointsInWrappedRange // Final|Native|Static|Public|BlueprintCallable // @ game+0x3350670
	float FindMidpointInWrappedRange(float Value1, float Value2, float LowerLimit, float UpperLimit); // Function Maths.FloatMaths.FindMidpointInWrappedRange // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x334f5a0
	float Bound(float ValueToBound, float Bound1, float Bound2); // Function Maths.FloatMaths.Bound // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x334e0a0
};

// Class Maths.Gravity
// Size: 0x28 (Inherited: 0x28)
struct UGravity : UBlueprintFunctionLibrary {

	float Earth(); // Function Maths.Gravity.Earth // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x334efd0
};

// Class Maths.OrientedPointBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UOrientedPointBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	struct FTransform GetPointAsTransform(struct FOrientedPoint Point); // Function Maths.OrientedPointBlueprintFunctionLibrary.GetPointAsTransform // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x33504e0
};

// Class Maths.PendulumBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPendulumBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void ToggleSwingDirection(struct FPendulum InPendulum); // Function Maths.PendulumBlueprintFunctionLibrary.ToggleSwingDirection // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3352380
	void Tick(struct FPendulum InPendulum, float InDeltaTime); // Function Maths.PendulumBlueprintFunctionLibrary.Tick // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3352280
	void StopPendulum(struct FPendulum InPendulum); // Function Maths.PendulumBlueprintFunctionLibrary.StopPendulum // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3352150
	void StartPendulum(struct FPendulum InPendulum); // Function Maths.PendulumBlueprintFunctionLibrary.StartPendulum // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x33520a0
	void SetRPM(struct FPendulum InPendulum, float InRPM); // Function Maths.PendulumBlueprintFunctionLibrary.SetRPM // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3351f70
	void SetMinAngleDegrees(struct FPendulum InPendulum, float InMin); // Function Maths.PendulumBlueprintFunctionLibrary.SetMinAngleDegrees // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3351e70
	void SetMaxAngleDegrees(struct FPendulum InPendulum, float InMax); // Function Maths.PendulumBlueprintFunctionLibrary.SetMaxAngleDegrees // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3351d70
	void SetLength(struct FPendulum InPendulum, float InLength); // Function Maths.PendulumBlueprintFunctionLibrary.SetLength // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3351c70
	float GetRPM(struct FPendulum InPendulum); // Function Maths.PendulumBlueprintFunctionLibrary.GetRPM // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x33505b0
	struct FTransform GetPendulumTransform(struct FPendulum InPendulum); // Function Maths.PendulumBlueprintFunctionLibrary.GetPendulumTransform // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3350410
	float GetPendulumAngleDegrees(struct FPendulum InPendulum); // Function Maths.PendulumBlueprintFunctionLibrary.GetPendulumAngleDegrees // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3350350
	float GetMinAngleDegrees(struct FPendulum InPendulum); // Function Maths.PendulumBlueprintFunctionLibrary.GetMinAngleDegrees // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3350290
	float GetMaxAngleDegrees(struct FPendulum InPendulum); // Function Maths.PendulumBlueprintFunctionLibrary.GetMaxAngleDegrees // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x33501d0
	float GetLength(struct FPendulum InPendulum); // Function Maths.PendulumBlueprintFunctionLibrary.GetLength // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3350110
	void DebugDrawPendulum(struct FPendulum InPendulum, struct AActor* WorldContext, struct FTransform PendulumCenter); // Function Maths.PendulumBlueprintFunctionLibrary.DebugDrawPendulum // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x334ed40
};

// Class Maths.PoissonDiscSampling
// Size: 0x28 (Inherited: 0x28)
struct UPoissonDiscSampling : UBlueprintFunctionLibrary {

	struct TArray<struct FVector> GeneratePoissonDiscDistributionAcrossPlane(struct FVector InCenter, struct FQuat InOrientation, float InWidth, float InHeight, float InMinDistance, int32_t InRNGSeed); // Function Maths.PoissonDiscSampling.GeneratePoissonDiscDistributionAcrossPlane // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x334fa30
};

// Class Maths.ProjectileMaths
// Size: 0x28 (Inherited: 0x28)
struct UProjectileMaths : UBlueprintFunctionLibrary {

	float PredictProjectileFlightTime(float Speed, float Gravity, float Pitch, float Height); // Function Maths.ProjectileMaths.PredictProjectileFlightTime // Final|Native|Static|Public|BlueprintCallable // @ game+0x33518c0
	float FindProjectileSpeedModifierToHitTarget(struct FVector From, struct FVector Target, float Pitch, float ProjectileSpeed, float Gravity); // Function Maths.ProjectileMaths.FindProjectileSpeedModifierToHitTarget // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x334f6f0
	bool FindAimDirectionToHitTarget(struct FRotator OutAimDirection, struct FVector From, struct FVector Target, float ProjectileSpeed, float Gravity, bool PreferHigherAngles); // Function Maths.ProjectileMaths.FindAimDirectionToHitTarget // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x334f000
	bool CalculateLaunchVelocity(struct FVector OutLaunchVelocty, float OutFlightTime, struct FVector From, struct FVector Target, struct FVector TargetVelocity, float ProjectileSpeed, float Gravity, bool PreferHigherAngles); // Function Maths.ProjectileMaths.CalculateLaunchVelocity // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x334e4e0
};

// Class Maths.RotationMaths
// Size: 0x28 (Inherited: 0x28)
struct URotationMaths : UBlueprintFunctionLibrary {

	struct FTransform TransformAroundArbitraryPivot(struct FTransform TargetTransform, struct FTransform BaseTransform, struct FTransform TransformToApply, bool LockFinalOrientation); // Function Maths.RotationMaths.TransformAroundArbitraryPivot // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3352430
	struct FQuat RotatorToQuat(struct FRotator Rotation); // Function Maths.RotationMaths.RotatorToQuat // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3351ba0
	struct FVector RotateDirectionInterpConstantTo(struct FVector CurrentDirectionNormalised, struct FVector TargetDirectionNormalised, float DeltaTime, float InterpSpeedRadPerSec); // Function Maths.RotationMaths.RotateDirectionInterpConstantTo // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3351a10
	void FindRotationAxisAndRadAngleBetweenVectors(struct FVector FromVectorNormalised, struct FVector ToVectorNormalised, struct FVector OutRotationAxis, float OutRotationAngleRadians); // Function Maths.RotationMaths.FindRotationAxisAndRadAngleBetweenVectors // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x334f8b0
	bool AreRotatorsTheSameRotation(struct FRotator Rotator1, struct FRotator Rotator2, float ErrorTolerance); // Function Maths.RotationMaths.AreRotatorsTheSameRotation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x334de30
	struct FRotationUpdateResult AdvanceRotationBySpinAndTiltSynced(struct FRotator StartRotation, struct FRotator TargetRotation, float RotationRateDegrees, float DeltaTime); // Function Maths.RotationMaths.AdvanceRotationBySpinAndTiltSynced // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x334d940
};

// Class Maths.ShapeMathsBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UShapeMathsBlueprintLibrary : UBlueprintFunctionLibrary {

	bool IsPointOnOrWithinABox(struct UBoxComponent* BoxComponent, struct FVector WorldSpaceReferencePoint); // Function Maths.ShapeMathsBlueprintLibrary.IsPointOnOrWithinABox // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3350ca0
	struct FVector FindClosestPointWithinASphere(struct USphereComponent* SphereComponent, struct FVector WorldSpaceReferencePoint); // Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinASphere // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x334f4c0
	struct FVector FindClosestPointWithinACylinder(struct UCapsuleComponent* CylinderComponent, struct FVector WorldSpaceReferencePoint); // Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinACylinder // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x334f3e0
	struct FVector FindClosestPointWithinACapsule(struct UCapsuleComponent* CapsuleComponent, struct FVector WorldSpaceReferencePoint); // Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinACapsule // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x334f300
	struct FVector FindClosestPointWithinABox(struct UBoxComponent* BoxComponent, struct FVector WorldSpaceReferencePoint); // Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinABox // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x334f220
};

// Class Maths.SphereMaths
// Size: 0x28 (Inherited: 0x28)
struct USphereMaths : UBlueprintFunctionLibrary {

	float VolumeFromRadius(float InRadius); // Function Maths.SphereMaths.VolumeFromRadius // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3352890
	float SurfaceAreaFromRadius(float InRadius); // Function Maths.SphereMaths.SurfaceAreaFromRadius // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3352200
};

// Class Maths.SphericalCapMaths
// Size: 0x28 (Inherited: 0x28)
struct USphericalCapMaths : UBlueprintFunctionLibrary {

	float Volume(float InRadius, float InHeight); // Function Maths.SphericalCapMaths.Volume // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x33527d0
	float CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid(float InRadius, float InHeight); // Function Maths.SphericalCapMaths.CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x334e420
	float BaseRadius(float InRadius, float InHeight); // Function Maths.SphericalCapMaths.BaseRadius // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x334dfe0
};

// Class Maths.StatisticsMaths
// Size: 0x28 (Inherited: 0x28)
struct UStatisticsMaths : UBlueprintFunctionLibrary {
};

// Class Maths.TimedBufferFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTimedBufferFunctionLibrary : UBlueprintFunctionLibrary {

	void UpdateInterval(struct FTimedBuffer TimedBuffer, float DeltaTime, float Value); // Function Maths.TimedBufferFunctionLibrary.UpdateInterval // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x33526a0
	bool GetValueRange(struct FTimedBuffer TimedBuffer, float MinWindowLength, float ValueRange); // Function Maths.TimedBufferFunctionLibrary.GetValueRange // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x33507c0
	struct FTimedBuffer CreateTimedBuffer(float WindowLength); // Function Maths.TimedBufferFunctionLibrary.CreateTimedBuffer // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x334eb70
};

// Class Maths.TimeMaths
// Size: 0x28 (Inherited: 0x28)
struct UTimeMaths : UBlueprintFunctionLibrary {

	struct FTimespan GetDifference(struct FDateTime A, struct FDateTime B); // Function Maths.TimeMaths.GetDifference // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x334ff80
};

// Class Maths.VectorMaths
// Size: 0x28 (Inherited: 0x28)
struct UVectorMaths : UBlueprintFunctionLibrary {

	bool LineIntersectsSphere(struct FVector LineStart, struct FVector LineDir, struct FVector SphereCentre, float SphereRadius, struct FVector ClosestIntersectionPoint); // Function Maths.VectorMaths.LineIntersectsSphere // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x33512c0
	bool LineIntersectsCircleWithExitPoint(struct FVector2D LineOrigin, struct FVector2D LineDir, struct FVector2D CircleOrigin, float CircleRadius, struct FVector2D OutClosestIntersectionPoint, struct FVector2D OutSecondaryIntersectionPoint, float OutClosestIntersectionDistance, float OutSecondaryIntersectionDistance); // Function Maths.VectorMaths.LineIntersectsCircleWithExitPoint // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3351060
	bool LineIntersectsCircle(struct FVector2D LineOrigin, struct FVector2D LineDir, struct FVector2D CircleOrigin, float CircleRadius, struct FVector2D OutClosestIntersectionPoint, float OutIntersectionDistance); // Function Maths.VectorMaths.LineIntersectsCircle // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3350e70
	char IntersectLineSegmentWithPlane(struct FVector LineStart, struct FVector LineEnd, struct FVector PlanePos, struct FVector PlaneNormal, float PlaneThickness, struct FVector IntersectionPos, float NormalisedIntersectionTOnLineSegment); // Function Maths.VectorMaths.IntersectLineSegmentWithPlane // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3350a10
	float Distance(struct FVector A, struct FVector B); // Function Maths.VectorMaths.Distance // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x334eee0
	float Cross_Vector2DVector2D(struct FVector2D A, struct FVector2D B); // Function Maths.VectorMaths.Cross_Vector2DVector2D // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x334ec60
	bool ContainsNaN(struct FVector Vector); // Function Maths.VectorMaths.ContainsNaN // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x334e9e0
};

