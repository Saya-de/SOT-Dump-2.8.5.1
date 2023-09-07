// Class CustomMeshComponent.CustomMeshComponent
// Size: 0x5e0 (Inherited: 0x5d0)
struct UCustomMeshComponent : UMeshComponent {
	char UnknownData_5D0[0x10]; // 0x5d0(0x10)

	bool SetCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle> Triangles); // Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x55af6d0
	void ClearCustomMeshTriangles(); // Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles // Final|Native|Public|BlueprintCallable // @ game+0x55af6b0
	void AddCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle> Triangles); // Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x55af600
};

