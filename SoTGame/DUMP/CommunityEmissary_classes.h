// Class CommunityEmissary.CommunityEmissaryFlagComponent
// Size: 0x650 (Inherited: 0x620)
struct UCommunityEmissaryFlagComponent : UStaticMeshComponent {
	struct UCommunityEmissaryFlagData* CommunityEmissaryDataAsset; // 0x620(0x08)
	char UnknownData_628[0x28]; // 0x628(0x28)

	void Multicast_UpdateCommunityEmissaryFlag(int32_t FlagDataIndex); // Function CommunityEmissary.CommunityEmissaryFlagComponent.Multicast_UpdateCommunityEmissaryFlag // Net|NetReliableNative|Event|NetMulticast|Public // @ game+0x4720010
};

// Class CommunityEmissary.CommunityEmissaryFlagData
// Size: 0x38 (Inherited: 0x28)
struct UCommunityEmissaryFlagData : UDataAsset {
	struct TArray<struct FCommunityFlagGradeData> GradeData; // 0x28(0x10)
};

