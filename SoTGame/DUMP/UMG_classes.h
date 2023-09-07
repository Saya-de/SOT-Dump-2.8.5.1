// Class UMG.AsyncTaskDownloadImage
// Size: 0x48 (Inherited: 0x28)
struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFail; // 0x38(0x10)

	struct UAsyncTaskDownloadImage* DownloadImage(struct FString URL); // Function UMG.AsyncTaskDownloadImage.DownloadImage // Final|Native|Static|Public|BlueprintCallable // @ game+0x22c43a0
};

// Class UMG.DragDropOperation
// Size: 0x88 (Inherited: 0x28)
struct UDragDropOperation : UObject {
	struct FString Tag; // 0x28(0x10)
	struct UObject* payload; // 0x38(0x08)
	struct UWidget* DefaultDragVisual; // 0x40(0x08)
	char Pivot; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	struct FVector2D Offset; // 0x4c(0x08)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct FMulticastDelegate OnDrop; // 0x58(0x10)
	struct FMulticastDelegate OnDragCancelled; // 0x68(0x10)
	struct FMulticastDelegate OnDragged; // 0x78(0x10)

	void Drop(struct FPointerEvent PointerEvent); // Function UMG.DragDropOperation.Drop // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x22c4fb0
	void Dragged(struct FPointerEvent PointerEvent); // Function UMG.DragDropOperation.Dragged // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x22c4560
	void DragCancelled(struct FPointerEvent PointerEvent); // Function UMG.DragDropOperation.DragCancelled // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x22c4450
};

// Class UMG.MovieScene2DTransformSection
// Size: 0x3e8 (Inherited: 0x98)
struct UMovieScene2DTransformSection : UMovieSceneSection {
	char UnknownData_98[0x8]; // 0x98(0x08)
	struct FRichCurve Translation[0x02]; // 0xa0(0xf0)
	struct FRichCurve Rotation; // 0x190(0x78)
	struct FRichCurve Scale[0x02]; // 0x208(0xf0)
	struct FRichCurve Shear[0x02]; // 0x2f8(0xf0)
};

// Class UMG.MovieScene2DTransformTrack
// Size: 0xb0 (Inherited: 0xb0)
struct UMovieScene2DTransformTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneMarginSection
// Size: 0x280 (Inherited: 0x98)
struct UMovieSceneMarginSection : UMovieSceneSection {
	char UnknownData_98[0x8]; // 0x98(0x08)
	struct FRichCurve TopCurve; // 0xa0(0x78)
	struct FRichCurve LeftCurve; // 0x118(0x78)
	struct FRichCurve RightCurve; // 0x190(0x78)
	struct FRichCurve BottomCurve; // 0x208(0x78)
};

// Class UMG.MovieSceneMarginTrack
// Size: 0xb0 (Inherited: 0xb0)
struct UMovieSceneMarginTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneWidgetMaterialTrack
// Size: 0xb0 (Inherited: 0x98)
struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	struct TArray<struct FName> BrushPropertyNamePath; // 0x98(0x10)
	struct FName TrackName; // 0xa8(0x08)
};

// Class UMG.NamedSlotInterface
// Size: 0x28 (Inherited: 0x28)
struct UNamedSlotInterface : UInterface {
};

// Class UMG.PropertyBinding
// Size: 0x48 (Inherited: 0x28)
struct UPropertyBinding : UObject {
	struct UObject* SourceObject; // 0x28(0x08)
	struct FDynamicPropertyPath SourcePath; // 0x30(0x10)
	struct FName DestinationProperty; // 0x40(0x08)
};

// Class UMG.BoolBinding
// Size: 0x48 (Inherited: 0x48)
struct UBoolBinding : UPropertyBinding {

	bool GetValue(); // Function UMG.BoolBinding.GetValue // Final|Native|Public|Const // @ game+0x22c7140
};

// Class UMG.BrushBinding
// Size: 0x50 (Inherited: 0x48)
struct UBrushBinding : UPropertyBinding {
	char UnknownData_48[0x8]; // 0x48(0x08)

	struct FSlateBrush GetValue(); // Function UMG.BrushBinding.GetValue // Final|Native|Public|Const // @ game+0x22c7170
};

// Class UMG.CheckedStateBinding
// Size: 0x50 (Inherited: 0x48)
struct UCheckedStateBinding : UPropertyBinding {
	char UnknownData_48[0x8]; // 0x48(0x08)

	char GetValue(); // Function UMG.CheckedStateBinding.GetValue // Final|Native|Public|Const // @ game+0x22c71d0
};

// Class UMG.ColorBinding
// Size: 0x50 (Inherited: 0x48)
struct UColorBinding : UPropertyBinding {
	char UnknownData_48[0x8]; // 0x48(0x08)

	struct FSlateColor GetSlateValue(); // Function UMG.ColorBinding.GetSlateValue // Final|Native|Public|Const // @ game+0x22c6dd0
	struct FLinearColor GetLinearValue(); // Function UMG.ColorBinding.GetLinearValue // Final|Native|Public|HasDefaults|Const // @ game+0x22c66b0
};

// Class UMG.FloatBinding
// Size: 0x48 (Inherited: 0x48)
struct UFloatBinding : UPropertyBinding {

	float GetValue(); // Function UMG.FloatBinding.GetValue // Final|Native|Public|Const // @ game+0x22c7200
};

// Class UMG.Int32Binding
// Size: 0x48 (Inherited: 0x48)
struct UInt32Binding : UPropertyBinding {

	int32_t GetValue(); // Function UMG.Int32Binding.GetValue // Final|Native|Public|Const // @ game+0x22c7230
};

// Class UMG.MouseCursorBinding
// Size: 0x48 (Inherited: 0x48)
struct UMouseCursorBinding : UPropertyBinding {

	char GetValue(); // Function UMG.MouseCursorBinding.GetValue // Final|Native|Public|Const // @ game+0x22c7260
};

// Class UMG.TextBinding
// Size: 0x50 (Inherited: 0x48)
struct UTextBinding : UPropertyBinding {
	char UnknownData_48[0x8]; // 0x48(0x08)

	struct FText GetTextValue(); // Function UMG.TextBinding.GetTextValue // Final|Native|Public|Const // @ game+0x22c70c0
	struct FString GetStringValue(); // Function UMG.TextBinding.GetStringValue // Final|Native|Public|Const // @ game+0x22c6e90
};

// Class UMG.VisibilityBinding
// Size: 0x48 (Inherited: 0x48)
struct UVisibilityBinding : UPropertyBinding {

	char GetValue(); // Function UMG.VisibilityBinding.GetValue // Final|Native|Public|Const // @ game+0x22c72f0
};

// Class UMG.WidgetBinding
// Size: 0x48 (Inherited: 0x48)
struct UWidgetBinding : UPropertyBinding {

	struct UWidget* GetValue(); // Function UMG.WidgetBinding.GetValue // Final|Native|Public|Const // @ game+0x22c7320
};

// Class UMG.RichTextBlockDecorator
// Size: 0x30 (Inherited: 0x28)
struct URichTextBlockDecorator : UObject {
	bool bReveal; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	int32_t RevealedIndex; // 0x2c(0x04)
};

// Class UMG.SlateBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct USlateBlueprintLibrary : UBlueprintFunctionLibrary {

	void LocalToViewport(struct UObject* WorldContextObject, struct FGeometry Geometry, struct FVector2D LocalCoordinate, struct FVector2D PixelPosition, struct FVector2D ViewportPosition); // Function UMG.SlateBlueprintLibrary.LocalToViewport // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x22c7d20
	struct FVector2D LocalToAbsolute(struct FGeometry Geometry, struct FVector2D LocalCoordinate); // Function UMG.SlateBlueprintLibrary.LocalToAbsolute // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x22c7c20
	bool IsUnderLocation(struct FGeometry Geometry, struct FVector2D AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.IsUnderLocation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x22c7af0
	struct FVector2D GetLocalSize(struct FGeometry Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalSize // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x22c66f0
	void AbsoluteToViewport(struct UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D PixelPosition, struct FVector2D ViewportPosition); // Function UMG.SlateBlueprintLibrary.AbsoluteToViewport // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x22c3080
	struct FVector2D AbsoluteToLocal(struct FGeometry Geometry, struct FVector2D AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.AbsoluteToLocal // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x22c2f80
};

// Class UMG.Visual
// Size: 0x28 (Inherited: 0x28)
struct UVisual : UObject {
};

// Class UMG.Widget
// Size: 0x138 (Inherited: 0x28)
struct UWidget : UVisual {
	bool bIsVariable; // 0x28(0x01)
	bool bCreatedByConstructionScript; // 0x29(0x01)
	char UnknownData_2A[0x6]; // 0x2a(0x06)
	struct UPanelSlot* Slot; // 0x30(0x08)
	bool bIsEnabled; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	DelegateProperty bIsEnabledDelegate; // 0x3c(0x10)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct FText ToolTipText; // 0x50(0x38)
	DelegateProperty ToolTipTextDelegate; // 0x88(0x10)
	struct UWidget* ToolTipWidget; // 0x98(0x08)
	DelegateProperty ToolTipWidgetDelegate; // 0xa0(0x10)
	char Visiblity; // 0xb0(0x01)
	char Visibility; // 0xb1(0x01)
	char UnknownData_B2[0x2]; // 0xb2(0x02)
	DelegateProperty VisibilityDelegate; // 0xb4(0x10)
	char bOverride_Cursor : 1; // 0xc4(0x01)
	char UnknownData_C4_1 : 7; // 0xc4(0x01)
	char UnknownData_C5[0x3]; // 0xc5(0x03)
	char Cursor; // 0xc8(0x01)
	bool bIsVolatile; // 0xc9(0x01)
	char UnknownData_CA[0x2]; // 0xca(0x02)
	struct FWidgetTransform RenderTransform; // 0xcc(0x1c)
	struct FVector2D RenderTransformPivot; // 0xe8(0x08)
	struct UWidgetNavigation* Navigation; // 0xf0(0x08)
	char UnknownData_F8[0x30]; // 0xf8(0x30)
	struct TArray<struct UPropertyBinding*> NativeBindings; // 0x128(0x10)

	void SetVisibility(char InVisibility); // Function UMG.Widget.SetVisibility // Final|Native|Public|BlueprintCallable // @ game+0x22cea30
	void SetUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.SetUserFocus // Final|Native|Public|BlueprintCallable // @ game+0x22ce010
	void SetToolTipText(struct FText InToolTipText); // Function UMG.Widget.SetToolTipText // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x22cdf60
	void SetToolTip(struct UWidget* Widget); // Function UMG.Widget.SetToolTip // Final|Native|Public|BlueprintCallable // @ game+0x22cdee0
	void SetRenderTranslation(struct FVector2D Translation); // Function UMG.Widget.SetRenderTranslation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22cd3b0
	void SetRenderTransformPivot(struct FVector2D Pivot); // Function UMG.Widget.SetRenderTransformPivot // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22cd330
	void SetRenderTransform(struct FWidgetTransform InTransform); // Function UMG.Widget.SetRenderTransform // Final|Native|Public|BlueprintCallable // @ game+0x22cd250
	void SetRenderShear(struct FVector2D Shear); // Function UMG.Widget.SetRenderShear // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22cd1d0
	void SetRenderScale(struct FVector2D Scale); // Function UMG.Widget.SetRenderScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22cd150
	void SetRenderAngle(float Angle); // Function UMG.Widget.SetRenderAngle // Final|Native|Public|BlueprintCallable // @ game+0x22cd0d0
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // Final|Native|Public|BlueprintCallable // @ game+0x22cbb50
	void SetIsEnabled(bool bInIsEnabled); // Function UMG.Widget.SetIsEnabled // Final|Native|Public|BlueprintCallable // @ game+0x22cb700
	void SetCursor(char InCursor); // Function UMG.Widget.SetCursor // Final|Native|Public|BlueprintCallable // @ game+0x22ca340
	void ResetCursor(); // Function UMG.Widget.ResetCursor // Final|Native|Public|BlueprintCallable // @ game+0x22c8e10
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // Native|Public|BlueprintCallable // @ game+0x22c8d00
	struct FEventReply OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // Public|Delegate // @ game+0x188c2f0
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // Public|Delegate|HasOutParms // @ game+0x188c2f0
	bool IsVisible(); // Function UMG.Widget.IsVisible // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c7bf0
	bool IsHovered(); // Function UMG.Widget.IsHovered // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c7a00
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // Final|Native|Public|BlueprintCallable // @ game+0x22c7980
	bool HasUserFocusedDescendants(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c78d0
	bool HasUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c7840
	bool HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c77e0
	bool HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c77b0
	bool HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c7780
	bool HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c76c0
	struct UWidget* GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // Public|Delegate // @ game+0x188c2f0
	char GetVisibility(); // Function UMG.Widget.GetVisibility // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c7520
	struct FText GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // Public|Delegate // @ game+0x188c2f0
	char GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // Public|Delegate // @ game+0x188c2f0
	struct FSlateColor GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // Public|Delegate // @ game+0x188c2f0
	struct FSlateBrush GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // Public|Delegate // @ game+0x188c2f0
	struct UPanelWidget* GetParent(); // Function UMG.Widget.GetParent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6c50
	char GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // Public|Delegate // @ game+0x188c2f0
	struct FLinearColor GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // Public|Delegate|HasDefaults // @ game+0x188c2f0
	bool GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6420
	int32_t GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // Public|Delegate // @ game+0x188c2f0
	float GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // Public|Delegate // @ game+0x188c2f0
	struct FVector2D GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x22c5c20
	char GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // Public|Delegate // @ game+0x188c2f0
	bool GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // Public|Delegate // @ game+0x188c2f0
	struct UWidget* GenerateWidgetForString__DelegateSignature(struct FString Item); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // Public|Delegate // @ game+0x188c2f0
	struct UWidget* GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // Public|Delegate // @ game+0x188c2f0
	void ForceVolatile(bool bForce); // Function UMG.Widget.ForceVolatile // Final|Native|Public|BlueprintCallable // @ game+0x22c5290
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // Final|Native|Public|BlueprintCallable // @ game+0x22c5270
};

// Class UMG.UserWidget
// Size: 0x230 (Inherited: 0x138)
struct UUserWidget : UWidget {
	char UnknownData_138[0x8]; // 0x138(0x08)
	struct FLinearColor ColorAndOpacity; // 0x140(0x10)
	DelegateProperty ColorAndOpacityDelegate; // 0x150(0x10)
	struct FSlateColor ForegroundColor; // 0x160(0x30)
	DelegateProperty ForegroundColorDelegate; // 0x190(0x10)
	bool bSupportsKeyboardFocus; // 0x1a0(0x01)
	char UnknownData_1A1[0x7]; // 0x1a1(0x07)
	struct UWidgetTree* WidgetTree; // 0x1a8(0x08)
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers; // 0x1b0(0x10)
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers; // 0x1c0(0x10)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // 0x1d0(0x10)
	char UnknownData_1E0[0x50]; // 0x1e0(0x50)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG.UserWidget.Tick // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x188c2f0
	void StopAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.StopAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x22ceff0
	void SetPositionInViewport(struct FVector2D Position, bool bRemoveDPIScale); // Function UMG.UserWidget.SetPositionInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22ccf90
	void SetOwningLocalPlayer(struct ULocalPlayer* LocalPlayer); // Function UMG.UserWidget.SetOwningLocalPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x22cc760
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.UserWidget.SetForegroundColor // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x22ca9f0
	void SetDesiredSizeInViewport(struct FVector2D Size); // Function UMG.UserWidget.SetDesiredSizeInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22ca3c0
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.UserWidget.SetColorAndOpacity // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22ca0c0
	void SetAnchorsInViewport(struct FAnchors Anchors); // Function UMG.UserWidget.SetAnchorsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x22c91d0
	void SetAlignmentInViewport(struct FVector2D Alignment); // Function UMG.UserWidget.SetAlignmentInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22c90c0
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x22c8d20
	void PlaySound(struct USoundBase* SoundToPlay); // Function UMG.UserWidget.PlaySound // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x22c8770
	void PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, char PlayMode); // Function UMG.UserWidget.PlayAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x22c8620
	float PauseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.PauseAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x22c8580
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Function UMG.UserWidget.OnTouchStarted // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Function UMG.UserWidget.OnTouchMoved // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent GestureEvent); // Function UMG.UserWidget.OnTouchGesture // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Function UMG.UserWidget.OnTouchEnded // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnPreviewMouseButtonDown // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnPreviewKeyDown // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void OnPaint(struct FPaintContext Context); // Function UMG.UserWidget.OnPaint // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x188c2f0
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseWheel // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseMove // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseLeave // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseEnter // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseButtonUp // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseButtonDown // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent InMouseEvent); // Function UMG.UserWidget.OnMouseButtonDoubleClick // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent); // Function UMG.UserWidget.OnMotionDetected // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x188c2f0
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyUp // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x188c2f0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyDown // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x188c2f0
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent); // Function UMG.UserWidget.OnKeyChar // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x188c2f0
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusReceived // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x188c2f0
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusLost // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x188c2f0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDrop // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x188c2f0
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragOver // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x188c2f0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragLeave // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x188c2f0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragEnter // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x188c2f0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragDetected // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	void OnDragCancelled(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragCancelled // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	struct FEventReply OnControllerButtonReleased(struct FGeometry MyGeometry, struct FControllerEvent ControllerEvent); // Function UMG.UserWidget.OnControllerButtonReleased // Event|Public|BlueprintEvent // @ game+0x188c2f0
	struct FEventReply OnControllerButtonPressed(struct FGeometry MyGeometry, struct FControllerEvent ControllerEvent); // Function UMG.UserWidget.OnControllerButtonPressed // Event|Public|BlueprintEvent // @ game+0x188c2f0
	struct FEventReply OnControllerAnalogValueChanged(struct FGeometry MyGeometry, struct FControllerEvent ControllerEvent); // Function UMG.UserWidget.OnControllerAnalogValueChanged // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void OnAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationStarted // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x22c8460
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationFinished // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x22c83d0
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function UMG.UserWidget.OnAnalogValueChanged // Event|Public|BlueprintEvent // @ game+0x188c2f0
	bool IsInViewport(); // Function UMG.UserWidget.IsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c7a30
	bool IsInteractable(); // Function UMG.UserWidget.IsInteractable // BlueprintCosmetic|Event|Public|BlueprintEvent|Const // @ game+0x188c2f0
	struct APawn* GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6c20
	struct APlayerController* GetOwningPlayer(); // Function UMG.UserWidget.GetOwningPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6bf0
	struct ULocalPlayer* GetOwningLocalPlayer(); // Function UMG.UserWidget.GetOwningLocalPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6bc0
	bool GetIsVisible(); // Function UMG.UserWidget.GetIsVisible // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6480
	void Destruct(); // Function UMG.UserWidget.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x188c2f0
	void Construct(); // Function UMG.UserWidget.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x188c2f0
	void AddToViewport(int32_t ZOrder); // Function UMG.UserWidget.AddToViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x22c3780
	bool AddToPlayerScreen(int32_t ZOrder); // Function UMG.UserWidget.AddToPlayerScreen // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x22c36f0
};

// Class UMG.UMGSequencePlayer
// Size: 0x5c8 (Inherited: 0x28)
struct UUMGSequencePlayer : UObject {
	char UnknownData_28[0x368]; // 0x28(0x368)
	struct UWidgetAnimation* Animation; // 0x390(0x08)
	char UnknownData_398[0x230]; // 0x398(0x230)
};

// Class UMG.PanelSlot
// Size: 0x38 (Inherited: 0x28)
struct UPanelSlot : UVisual {
	struct UPanelWidget* Parent; // 0x28(0x08)
	struct UWidget* Content; // 0x30(0x08)
};

// Class UMG.BorderSlot
// Size: 0x68 (Inherited: 0x38)
struct UBorderSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	char HorizontalAlignment; // 0x48(0x01)
	char VerticalAlignment; // 0x49(0x01)
	char UnknownData_4A[0x1e]; // 0x4a(0x1e)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.BorderSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22ce390
	void SetPadding(struct FMargin InPadding); // Function UMG.BorderSlot.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x22cc870
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.BorderSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22cacb0
};

// Class UMG.ButtonSlot
// Size: 0x68 (Inherited: 0x38)
struct UButtonSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	char HorizontalAlignment; // 0x48(0x01)
	char VerticalAlignment; // 0x49(0x01)
	char UnknownData_4A[0x1e]; // 0x4a(0x1e)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.ButtonSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22ce410
	void SetPadding(struct FMargin InPadding); // Function UMG.ButtonSlot.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x22cc900
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.ButtonSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22cad30
};

// Class UMG.CanvasPanelSlot
// Size: 0x70 (Inherited: 0x38)
struct UCanvasPanelSlot : UPanelSlot {
	struct FAnchorData LayoutData; // 0x38(0x28)
	bool bAutoSize; // 0x60(0x01)
	char UnknownData_61[0x3]; // 0x61(0x03)
	int32_t ZOrder; // 0x64(0x04)
	char UnknownData_68[0x8]; // 0x68(0x08)

	void SetZOrder(int32_t InZOrder); // Function UMG.CanvasPanelSlot.SetZOrder // Final|Native|Public|BlueprintCallable // @ game+0x22cebb0
	void SetSize(struct FVector2D InSize); // Function UMG.CanvasPanelSlot.SetSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22cd7e0
	void SetPosition(struct FVector2D InPosition); // Function UMG.CanvasPanelSlot.SetPosition // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22ccf10
	void SetOffsets(struct FMargin InOffset); // Function UMG.CanvasPanelSlot.SetOffsets // Final|Native|Public|BlueprintCallable // @ game+0x22cc550
	void SetMinimum(struct FVector2D InMinimumAnchors); // Function UMG.CanvasPanelSlot.SetMinimum // Final|Native|Public|HasDefaults // @ game+0x22cc2a0
	void SetMaximum(struct FVector2D InMaximumAnchors); // Function UMG.CanvasPanelSlot.SetMaximum // Final|Native|Public|HasDefaults // @ game+0x22cbf20
	void SetLayout(struct FAnchorData InLayoutData); // Function UMG.CanvasPanelSlot.SetLayout // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x22cbb70
	void SetAutoSize(bool InbAutoSize); // Function UMG.CanvasPanelSlot.SetAutoSize // Final|Native|Public|BlueprintCallable // @ game+0x22c9410
	void SetAnchors(struct FAnchors InAnchors); // Function UMG.CanvasPanelSlot.SetAnchors // Final|Native|Public|BlueprintCallable // @ game+0x22c9140
	void SetAlignment(struct FVector2D InAlignment); // Function UMG.CanvasPanelSlot.SetAlignment // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22c9040
	int32_t GetZOrder(); // Function UMG.CanvasPanelSlot.GetZOrder // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c75e0
	struct FVector2D GetSize(); // Function UMG.CanvasPanelSlot.GetSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6d90
	struct FVector2D GetPosition(); // Function UMG.CanvasPanelSlot.GetPosition // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6c80
	struct FMargin GetOffsets(); // Function UMG.CanvasPanelSlot.GetOffsets // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6a30
	struct FAnchorData GetLayout(); // Function UMG.CanvasPanelSlot.GetLayout // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6660
	bool GetAutoSize(); // Function UMG.CanvasPanelSlot.GetAutoSize // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c56b0
	struct FAnchors GetAnchors(); // Function UMG.CanvasPanelSlot.GetAnchors // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c5670
	struct FVector2D GetAlignment(); // Function UMG.CanvasPanelSlot.GetAlignment // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x22c5350
};

// Class UMG.GridSlot
// Size: 0x60 (Inherited: 0x38)
struct UGridSlot : UPanelSlot {
	char HorizontalAlignment; // 0x38(0x01)
	char VerticalAlignment; // 0x39(0x01)
	char UnknownData_3A[0x2]; // 0x3a(0x02)
	int32_t Row; // 0x3c(0x04)
	int32_t RowSpan; // 0x40(0x04)
	int32_t Column; // 0x44(0x04)
	int32_t ColumnSpan; // 0x48(0x04)
	int32_t Layer; // 0x4c(0x04)
	struct FVector2D Nudge; // 0x50(0x08)
	char UnknownData_58[0x8]; // 0x58(0x08)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.GridSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22ce490
	void SetRowSpan(int32_t InRowSpan); // Function UMG.GridSlot.SetRowSpan // Final|Native|Public|BlueprintCallable // @ game+0x22cd530
	void SetRow(int32_t InRow); // Function UMG.GridSlot.SetRow // Final|Native|Public|BlueprintCallable // @ game+0x22cd430
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.GridSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22cadb0
	void SetColumnSpan(int32_t InColumnSpan); // Function UMG.GridSlot.SetColumnSpan // Final|Native|Public|BlueprintCallable // @ game+0x22ca240
	void SetColumn(int32_t InColumn); // Function UMG.GridSlot.SetColumn // Final|Native|Public|BlueprintCallable // @ game+0x22ca140
};

// Class UMG.HorizontalBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UHorizontalBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	struct FSlateChildSize Size; // 0x48(0x08)
	char HorizontalAlignment; // 0x50(0x01)
	char VerticalAlignment; // 0x51(0x01)
	char UnknownData_52[0xe]; // 0x52(0x0e)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22ce510
	void SetSize(struct FSlateChildSize InSize); // Function UMG.HorizontalBoxSlot.SetSize // Final|Native|Public|BlueprintCallable // @ game+0x22cd860
	void SetPadding(struct FMargin InPadding); // Function UMG.HorizontalBoxSlot.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x22cc990
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.HorizontalBoxSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22cae30
};

// Class UMG.OverlaySlot
// Size: 0x58 (Inherited: 0x38)
struct UOverlaySlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	char HorizontalAlignment; // 0x48(0x01)
	char VerticalAlignment; // 0x49(0x01)
	char UnknownData_4A[0xe]; // 0x4a(0x0e)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.OverlaySlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22ce590
	void SetPadding(struct FMargin InPadding); // Function UMG.OverlaySlot.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x22cca20
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.OverlaySlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22caeb0
};

// Class UMG.SafeZoneSlot
// Size: 0x50 (Inherited: 0x38)
struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; // 0x38(0x01)
	char HAlign; // 0x39(0x01)
	char VAlign; // 0x3a(0x01)
	char UnknownData_3B[0x1]; // 0x3b(0x01)
	struct FMargin Padding; // 0x3c(0x10)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class UMG.ScaleBoxSlot
// Size: 0x68 (Inherited: 0x38)
struct UScaleBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	char HorizontalAlignment; // 0x48(0x01)
	char VerticalAlignment; // 0x49(0x01)
	char UnknownData_4A[0x1e]; // 0x4a(0x1e)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.ScaleBoxSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22ce610
	void SetPadding(struct FMargin InPadding); // Function UMG.ScaleBoxSlot.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x22ccab0
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.ScaleBoxSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22caf30
};

// Class UMG.ScrollBoxSlot
// Size: 0x58 (Inherited: 0x38)
struct UScrollBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	char HorizontalAlignment; // 0x48(0x01)
	char UnknownData_49[0xf]; // 0x49(0x0f)

	void SetPadding(struct FMargin InPadding); // Function UMG.ScrollBoxSlot.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x22ccb40
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.ScrollBoxSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22cafb0
};

// Class UMG.SizeBoxSlot
// Size: 0x68 (Inherited: 0x38)
struct USizeBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	char HorizontalAlignment; // 0x48(0x01)
	char VerticalAlignment; // 0x49(0x01)
	char UnknownData_4A[0x1e]; // 0x4a(0x1e)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.SizeBoxSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22ce690
	void SetPadding(struct FMargin InPadding); // Function UMG.SizeBoxSlot.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x22ccbd0
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.SizeBoxSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22cb030
};

// Class UMG.UniformGridSlot
// Size: 0x50 (Inherited: 0x38)
struct UUniformGridSlot : UPanelSlot {
	char HorizontalAlignment; // 0x38(0x01)
	char VerticalAlignment; // 0x39(0x01)
	char UnknownData_3A[0x2]; // 0x3a(0x02)
	int32_t Row; // 0x3c(0x04)
	int32_t Column; // 0x40(0x04)
	char UnknownData_44[0xc]; // 0x44(0x0c)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.UniformGridSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22ce710
	void SetRow(int32_t InRow); // Function UMG.UniformGridSlot.SetRow // Final|Native|Public|BlueprintCallable // @ game+0x22cd4b0
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.UniformGridSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22cb0b0
	void SetColumn(int32_t InColumn); // Function UMG.UniformGridSlot.SetColumn // Final|Native|Public|BlueprintCallable // @ game+0x22ca1c0
};

// Class UMG.VerticalBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UVerticalBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	struct FSlateChildSize Size; // 0x48(0x08)
	char HorizontalAlignment; // 0x50(0x01)
	char VerticalAlignment; // 0x51(0x01)
	char UnknownData_52[0xe]; // 0x52(0x0e)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.VerticalBoxSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22ce790
	void SetSize(struct FSlateChildSize InSize); // Function UMG.VerticalBoxSlot.SetSize // Final|Native|Public|BlueprintCallable // @ game+0x22cd980
	void SetPadding(struct FMargin InPadding); // Function UMG.VerticalBoxSlot.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x22ccc60
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.VerticalBoxSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22cb130
};

// Class UMG.WidgetSwitcherSlot
// Size: 0x58 (Inherited: 0x38)
struct UWidgetSwitcherSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	char HorizontalAlignment; // 0x48(0x01)
	char VerticalAlignment; // 0x49(0x01)
	char UnknownData_4A[0xe]; // 0x4a(0x0e)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22ce810
	void SetPadding(struct FMargin InPadding); // Function UMG.WidgetSwitcherSlot.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x22cccf0
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22cb1b0
};

// Class UMG.WrapBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UWrapBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	bool bFillEmptySpace; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	float FillSpanWhenLessThan; // 0x4c(0x04)
	char HorizontalAlignment; // 0x50(0x01)
	char VerticalAlignment; // 0x51(0x01)
	char UnknownData_52[0xe]; // 0x52(0x0e)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.WrapBoxSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22ce890
	void SetPadding(struct FMargin InPadding); // Function UMG.WrapBoxSlot.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x22ccd80
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.WrapBoxSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22cb230
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan // Final|Native|Public|BlueprintCallable // @ game+0x22ca730
	void SetFillEmptySpace(bool InbFillEmptySpace); // Function UMG.WrapBoxSlot.SetFillEmptySpace // Final|Native|Public|BlueprintCallable // @ game+0x22ca6a0
};

// Class UMG.CircularThrobber
// Size: 0x1f8 (Inherited: 0x138)
struct UCircularThrobber : UWidget {
	int32_t NumberOfPieces; // 0x138(0x04)
	float Period; // 0x13c(0x04)
	float Radius; // 0x140(0x04)
	char UnknownData_144[0x4]; // 0x144(0x04)
	struct USlateBrushAsset* PieceImage; // 0x148(0x08)
	struct FSlateBrush Image; // 0x150(0x90)
	char UnknownData_1E0[0x18]; // 0x1e0(0x18)

	void SetRadius(float InRadius); // Function UMG.CircularThrobber.SetRadius // Final|Native|Public|BlueprintCallable // @ game+0x22cd050
	void SetPeriod(float InPeriod); // Function UMG.CircularThrobber.SetPeriod // Final|Native|Public|BlueprintCallable // @ game+0x22cce90
	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.CircularThrobber.SetNumberOfPieces // Final|Native|Public|BlueprintCallable // @ game+0x22cc450
};

// Class UMG.ComboBox
// Size: 0x170 (Inherited: 0x138)
struct UComboBox : UWidget {
	struct TArray<struct UObject*> Items; // 0x138(0x10)
	DelegateProperty OnGenerateWidgetEvent; // 0x148(0x10)
	char UnknownData_158[0x18]; // 0x158(0x18)
};

// Class UMG.ComboBoxString
// Size: 0x620 (Inherited: 0x138)
struct UComboBoxString : UWidget {
	struct TArray<struct FString> DefaultOptions; // 0x138(0x10)
	struct FString SelectedOption; // 0x148(0x10)
	struct FComboBoxStyle WidgetStyle; // 0x158(0x428)
	struct FMargin ContentPadding; // 0x580(0x10)
	float MaxListHeight; // 0x590(0x04)
	bool HasDownArrow; // 0x594(0x01)
	char UnknownData_595[0x3]; // 0x595(0x03)
	DelegateProperty OnGenerateWidgetEvent; // 0x598(0x10)
	struct FMulticastDelegate OnSelectionChanged; // 0x5a8(0x10)
	struct FMulticastDelegate OnOpening; // 0x5b8(0x10)
	char UnknownData_5C8[0x58]; // 0x5c8(0x58)

	void SetSelectedOption(struct FString Option); // Function UMG.ComboBoxString.SetSelectedOption // Final|Native|Public|BlueprintCallable // @ game+0x22cd630
	bool RemoveOption(struct FString Option); // Function UMG.ComboBoxString.RemoveOption // Final|Native|Public|BlueprintCallable // @ game+0x22c8d40
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions // Final|Native|Public|BlueprintCallable // @ game+0x22c8910
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x188c2f0
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x188c2f0
	struct FString GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6cf0
	int32_t GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6b60
	struct FString GetOptionAtIndex(int32_t Index); // Function UMG.ComboBoxString.GetOptionAtIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6a70
	int32_t FindOptionIndex(struct FString Option); // Function UMG.ComboBoxString.FindOptionIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c51c0
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection // Final|Native|Public|BlueprintCallable // @ game+0x22c3c60
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions // Final|Native|Public|BlueprintCallable // @ game+0x22c3c40
	void AddOption(struct FString Option); // Function UMG.ComboBoxString.AddOption // Final|Native|Public|BlueprintCallable // @ game+0x22c3650
};

// Class UMG.EditableText
// Size: 0x4c8 (Inherited: 0x138)
struct UEditableText : UWidget {
	struct FText Text; // 0x138(0x38)
	DelegateProperty TextDelegate; // 0x170(0x10)
	struct FText HintText; // 0x180(0x38)
	DelegateProperty HintTextDelegate; // 0x1b8(0x10)
	struct FEditableTextStyle WidgetStyle; // 0x1c8(0x228)
	struct USlateWidgetStyleAsset* Style; // 0x3f0(0x08)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x3f8(0x08)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x400(0x08)
	struct USlateBrushAsset* CaretImage; // 0x408(0x08)
	struct FSlateFontInfo Font; // 0x410(0x40)
	struct FSlateColor ColorAndOpacity; // 0x450(0x30)
	bool IsReadOnly; // 0x480(0x01)
	bool IsPassword; // 0x481(0x01)
	char UnknownData_482[0x2]; // 0x482(0x02)
	float MinimumDesiredWidth; // 0x484(0x04)
	bool IsCaretMovedWhenGainFocus; // 0x488(0x01)
	bool SelectAllTextWhenFocused; // 0x489(0x01)
	bool RevertTextOnEscape; // 0x48a(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x48b(0x01)
	bool SelectAllTextOnCommit; // 0x48c(0x01)
	char UnknownData_48D[0x3]; // 0x48d(0x03)
	struct FMulticastDelegate OnTextChanged; // 0x490(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0x4a0(0x10)
	char UnknownData_4B0[0x18]; // 0x4b0(0x18)

	void SetText(struct FText InText); // Function UMG.EditableText.SetText // Final|Native|Public|BlueprintCallable // @ game+0x22cdb70
	void SetIsReadOnly(bool InbIsReadyOnly); // Function UMG.EditableText.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x22cb940
	void SetIsPassword(bool InbIsPassword); // Function UMG.EditableText.SetIsPassword // Final|Native|Public|BlueprintCallable // @ game+0x22cb8b0
	void SetHintText(struct FText InHintText); // Function UMG.EditableText.SetHintText // Final|Native|Public|BlueprintCallable // @ game+0x22cab80
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, char CommitMethod); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x188c2f0
	void OnEditableTextChangedEvent__DelegateSignature(struct FText Text); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x188c2f0
	struct FText GetText(); // Function UMG.EditableText.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6f30
};

// Class UMG.EditableTextBox
// Size: 0xaf8 (Inherited: 0x138)
struct UEditableTextBox : UWidget {
	struct FText Text; // 0x138(0x38)
	DelegateProperty TextDelegate; // 0x170(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x180(0x860)
	struct USlateWidgetStyleAsset* Style; // 0x9e0(0x08)
	struct FText HintText; // 0x9e8(0x38)
	DelegateProperty HintTextDelegate; // 0xa20(0x10)
	struct FSlateFontInfo Font; // 0xa30(0x40)
	struct FLinearColor ForegroundColor; // 0xa70(0x10)
	struct FLinearColor BackgroundColor; // 0xa80(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xa90(0x10)
	bool IsReadOnly; // 0xaa0(0x01)
	bool IsPassword; // 0xaa1(0x01)
	char UnknownData_AA2[0x2]; // 0xaa2(0x02)
	float MinimumDesiredWidth; // 0xaa4(0x04)
	struct FMargin Padding; // 0xaa8(0x10)
	bool IsCaretMovedWhenGainFocus; // 0xab8(0x01)
	bool SelectAllTextWhenFocused; // 0xab9(0x01)
	bool RevertTextOnEscape; // 0xaba(0x01)
	bool ClearKeyboardFocusOnCommit; // 0xabb(0x01)
	bool SelectAllTextOnCommit; // 0xabc(0x01)
	char UnknownData_ABD[0x3]; // 0xabd(0x03)
	struct FMulticastDelegate OnTextChanged; // 0xac0(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0xad0(0x10)
	char UnknownData_AE0[0x18]; // 0xae0(0x18)

	void SetText(struct FText InText); // Function UMG.EditableTextBox.SetText // Final|Native|Public|BlueprintCallable // @ game+0x22cdc20
	void SetError(struct FText InError); // Function UMG.EditableTextBox.SetError // Final|Native|Public|BlueprintCallable // @ game+0x22ca4c0
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, char CommitMethod); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x188c2f0
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x188c2f0
	struct FText GetText(); // Function UMG.EditableTextBox.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6f80
	void ClearError(); // Function UMG.EditableTextBox.ClearError // Final|Native|Public|BlueprintCallable // @ game+0x22c3b00
};

// Class UMG.ExpandableArea
// Size: 0x190 (Inherited: 0x138)
struct UExpandableArea : UWidget {
	char UnknownData_138[0x8]; // 0x138(0x08)
	bool bIsExpanded; // 0x140(0x01)
	char UnknownData_141[0x3]; // 0x141(0x03)
	float MaxHeight; // 0x144(0x04)
	struct FMargin AreaPadding; // 0x148(0x10)
	struct FMulticastDelegate OnExpansionChanged; // 0x158(0x10)
	struct UWidget* HeaderContent; // 0x168(0x08)
	struct UWidget* BodyContent; // 0x170(0x08)
	char UnknownData_178[0x18]; // 0x178(0x18)

	void SetIsExpanded(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded // Final|Native|Public|BlueprintCallable // @ game+0x22cb790
	bool GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6450
};

// Class UMG.Image
// Size: 0x228 (Inherited: 0x138)
struct UImage : UWidget {
	struct USlateBrushAsset* Image; // 0x138(0x08)
	struct FSlateBrush Brush; // 0x140(0x90)
	DelegateProperty BrushDelegate; // 0x1d0(0x10)
	struct FLinearColor ColorAndOpacity; // 0x1e0(0x10)
	DelegateProperty ColorAndOpacityDelegate; // 0x1f0(0x10)
	DelegateProperty OnMouseButtonDownEvent; // 0x200(0x10)
	char UnknownData_210[0x18]; // 0x210(0x18)

	void SetOpacity(float InOpacity); // Function UMG.Image.SetOpacity // Final|Native|Public|BlueprintCallable // @ game+0x22cc5e0
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Image.SetColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22c9f30
	void SetBrushFromTexture(struct UTexture2D* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTexture // Final|Native|Public|BlueprintCallable // @ game+0x22c9a80
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Image.SetBrushFromMaterial // Final|Native|Public|BlueprintCallable // @ game+0x22c9980
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Image.SetBrushFromAsset // Final|Native|Public|BlueprintCallable // @ game+0x22c9880
	void SetBrush(struct FSlateBrush InBrush); // Function UMG.Image.SetBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x22c9650
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial // Final|Native|Public|BlueprintCallable // @ game+0x22c5d00
};

// Class UMG.MultiLineEditableText
// Size: 0x350 (Inherited: 0x138)
struct UMultiLineEditableText : UWidget {
	struct FText Text; // 0x138(0x38)
	struct FTextBlockStyle WidgetStyle; // 0x170(0x160)
	char Justification; // 0x2d0(0x01)
	bool bAutoWrapText; // 0x2d1(0x01)
	char UnknownData_2D2[0x2]; // 0x2d2(0x02)
	float WrapTextAt; // 0x2d4(0x04)
	struct FSlateFontInfo Font; // 0x2d8(0x40)
	struct FMulticastDelegate OnTextChanged; // 0x318(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0x328(0x10)
	char UnknownData_338[0x18]; // 0x338(0x18)

	void SetText(struct FText InText); // Function UMG.MultiLineEditableText.SetText // Final|Native|Public|BlueprintCallable // @ game+0x22cdcd0
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText Text, char CommitMethod); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x188c2f0
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText Text); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x188c2f0
	struct FText GetText(); // Function UMG.MultiLineEditableText.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6fd0
};

// Class UMG.MultiLineEditableTextBox
// Size: 0xbe8 (Inherited: 0x138)
struct UMultiLineEditableTextBox : UWidget {
	struct FText Text; // 0x138(0x38)
	struct FEditableTextBoxStyle WidgetStyle; // 0x170(0x860)
	struct FTextBlockStyle TextStyle; // 0x9d0(0x160)
	struct USlateWidgetStyleAsset* Style; // 0xb30(0x08)
	char Justification; // 0xb38(0x01)
	bool bAutoWrapText; // 0xb39(0x01)
	char UnknownData_B3A[0x2]; // 0xb3a(0x02)
	float WrapTextAt; // 0xb3c(0x04)
	struct FSlateFontInfo Font; // 0xb40(0x40)
	struct FLinearColor ForegroundColor; // 0xb80(0x10)
	struct FLinearColor BackgroundColor; // 0xb90(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xba0(0x10)
	struct FMulticastDelegate OnTextChanged; // 0xbb0(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0xbc0(0x10)
	char UnknownData_BD0[0x18]; // 0xbd0(0x18)

	void SetText(struct FText InText); // Function UMG.MultiLineEditableTextBox.SetText // Final|Native|Public|BlueprintCallable // @ game+0x22cdd80
	void SetError(struct FText InError); // Function UMG.MultiLineEditableTextBox.SetError // Final|Native|Public|BlueprintCallable // @ game+0x22ca570
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, char CommitMethod); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x188c2f0
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x188c2f0
	struct FText GetText(); // Function UMG.MultiLineEditableTextBox.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c7020
};

// Class UMG.NativeWidgetHost
// Size: 0x150 (Inherited: 0x138)
struct UNativeWidgetHost : UWidget {
	char UnknownData_138[0x18]; // 0x138(0x18)
};

// Class UMG.PanelWidget
// Size: 0x150 (Inherited: 0x138)
struct UPanelWidget : UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x138(0x10)
	char UnknownData_148[0x8]; // 0x148(0x08)

	bool RemoveChildAt(int32_t Index); // Function UMG.PanelWidget.RemoveChildAt // Final|Native|Public|BlueprintCallable // @ game+0x22c8c70
	bool RemoveChild(struct UWidget* Content); // Function UMG.PanelWidget.RemoveChild // Final|Native|Public|BlueprintCallable // @ game+0x22c8be0
	bool HasChild(struct UWidget* Content); // Function UMG.PanelWidget.HasChild // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c76f0
	bool HasAnyChildren(); // Function UMG.PanelWidget.HasAnyChildren // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c7690
	int32_t GetChildrenCount(); // Function UMG.PanelWidget.GetChildrenCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c5bc0
	int32_t GetChildIndex(struct UWidget* Content); // Function UMG.PanelWidget.GetChildIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c5b30
	struct UWidget* GetChildAt(int32_t Index); // Function UMG.PanelWidget.GetChildAt // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c5aa0
	void ClearChildren(); // Function UMG.PanelWidget.ClearChildren // Final|Native|Public|BlueprintCallable // @ game+0x22c3ae0
	struct UPanelSlot* AddChild(struct UWidget* Content); // Function UMG.PanelWidget.AddChild // Final|Native|Public|BlueprintCallable // @ game+0x22c31d0
};

// Class UMG.CanvasPanel
// Size: 0x168 (Inherited: 0x150)
struct UCanvasPanel : UPanelWidget {
	char UnknownData_150[0x18]; // 0x150(0x18)

	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content); // Function UMG.CanvasPanel.AddChildToCanvas // Final|Native|Public|BlueprintCallable // @ game+0x22c3260
};

// Class UMG.ContentWidget
// Size: 0x150 (Inherited: 0x150)
struct UContentWidget : UPanelWidget {

	struct UPanelSlot* GetContentSlot(); // Function UMG.ContentWidget.GetContentSlot // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c5bf0
};

// Class UMG.Border
// Size: 0x2b0 (Inherited: 0x150)
struct UBorder : UContentWidget {
	struct FLinearColor ContentColorAndOpacity; // 0x150(0x10)
	DelegateProperty ContentColorAndOpacityDelegate; // 0x160(0x10)
	struct FMargin Padding; // 0x170(0x10)
	char HorizontalAlignment; // 0x180(0x01)
	char VerticalAlignment; // 0x181(0x01)
	char UnknownData_182[0x6]; // 0x182(0x06)
	struct FSlateBrush Background; // 0x188(0x90)
	DelegateProperty BackgroundDelegate; // 0x218(0x10)
	struct FLinearColor BrushColor; // 0x228(0x10)
	DelegateProperty BrushColorDelegate; // 0x238(0x10)
	bool bShowEffectWhenDisabled; // 0x248(0x01)
	char UnknownData_249[0x3]; // 0x249(0x03)
	DelegateProperty OnMouseButtonDownEvent; // 0x24c(0x10)
	DelegateProperty OnMouseButtonUpEvent; // 0x25c(0x10)
	DelegateProperty OnMouseMoveEvent; // 0x26c(0x10)
	DelegateProperty OnMouseDoubleClickEvent; // 0x27c(0x10)
	char UnknownData_28C[0x1c]; // 0x28c(0x1c)
	struct USlateBrushAsset* Brush; // 0x2a8(0x08)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.Border.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22ce310
	void SetPadding(struct FMargin InPadding); // Function UMG.Border.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x22cc7e0
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.Border.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x22cac30
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity); // Function UMG.Border.SetContentColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22ca2c0
	void SetBrushFromTexture(struct UTexture2D* Texture); // Function UMG.Border.SetBrushFromTexture // Final|Native|Public|BlueprintCallable // @ game+0x22c9a00
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Border.SetBrushFromMaterial // Final|Native|Public|BlueprintCallable // @ game+0x22c9900
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Border.SetBrushFromAsset // Final|Native|Public|BlueprintCallable // @ game+0x22c9800
	void SetBrushColor(struct FLinearColor InBrushColor); // Function UMG.Border.SetBrushColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22c9780
	void SetBrush(struct FSlateBrush InBrush); // Function UMG.Border.SetBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x22c9520
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial // Final|Native|Public|BlueprintCallable // @ game+0x22c5cd0
};

// Class UMG.Button
// Size: 0x470 (Inherited: 0x150)
struct UButton : UContentWidget {
	struct USlateWidgetStyleAsset* Style; // 0x150(0x08)
	struct FButtonStyle WidgetStyle; // 0x158(0x2a8)
	struct FLinearColor ColorAndOpacity; // 0x400(0x10)
	struct FLinearColor BackgroundColor; // 0x410(0x10)
	char ClickMethod; // 0x420(0x01)
	char TouchMethod; // 0x421(0x01)
	bool IsFocusable; // 0x422(0x01)
	char UnknownData_423[0x5]; // 0x423(0x05)
	struct FMulticastDelegate OnClicked; // 0x428(0x10)
	struct FMulticastDelegate OnPressed; // 0x438(0x10)
	struct FMulticastDelegate OnReleased; // 0x448(0x10)
	char UnknownData_458[0x18]; // 0x458(0x18)

	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Button.SetColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22c9eb0
	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // Function UMG.Button.SetBackgroundColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22c94a0
	bool IsPressed(); // Function UMG.Button.IsPressed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c7a90
};

// Class UMG.CheckBox
// Size: 0x818 (Inherited: 0x150)
struct UCheckBox : UContentWidget {
	char CheckedState; // 0x150(0x01)
	char UnknownData_151[0x3]; // 0x151(0x03)
	DelegateProperty CheckedStateDelegate; // 0x154(0x10)
	char UnknownData_164[0x4]; // 0x164(0x04)
	struct FCheckBoxStyle WidgetStyle; // 0x168(0x5f0)
	struct USlateWidgetStyleAsset* Style; // 0x758(0x08)
	struct USlateBrushAsset* UncheckedImage; // 0x760(0x08)
	struct USlateBrushAsset* UncheckedHoveredImage; // 0x768(0x08)
	struct USlateBrushAsset* UncheckedPressedImage; // 0x770(0x08)
	struct USlateBrushAsset* CheckedImage; // 0x778(0x08)
	struct USlateBrushAsset* CheckedHoveredImage; // 0x780(0x08)
	struct USlateBrushAsset* CheckedPressedImage; // 0x788(0x08)
	struct USlateBrushAsset* UndeterminedImage; // 0x790(0x08)
	struct USlateBrushAsset* UndeterminedHoveredImage; // 0x798(0x08)
	struct USlateBrushAsset* UndeterminedPressedImage; // 0x7a0(0x08)
	char HorizontalAlignment; // 0x7a8(0x01)
	char UnknownData_7A9[0x3]; // 0x7a9(0x03)
	struct FMargin Padding; // 0x7ac(0x10)
	char UnknownData_7BC[0x4]; // 0x7bc(0x04)
	struct FSlateColor BorderBackgroundColor; // 0x7c0(0x30)
	struct FMulticastDelegate OnCheckStateChanged; // 0x7f0(0x10)
	char UnknownData_800[0x18]; // 0x800(0x18)

	void SetIsChecked(bool InIsChecked); // Function UMG.CheckBox.SetIsChecked // Final|Native|Public|BlueprintCallable // @ game+0x22cb670
	void SetCheckedState(char InCheckedState); // Function UMG.CheckBox.SetCheckedState // Final|Native|Public|BlueprintCallable // @ game+0x22c9e30
	bool IsPressed(); // Function UMG.CheckBox.IsPressed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c7ac0
	bool IsChecked(); // Function UMG.CheckBox.IsChecked // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c79a0
	char GetCheckedState(); // Function UMG.CheckBox.GetCheckedState // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c5a70
};

// Class UMG.InvalidationBox
// Size: 0x170 (Inherited: 0x150)
struct UInvalidationBox : UContentWidget {
	bool CacheRelativeTransforms; // 0x150(0x01)
	char UnknownData_151[0x1f]; // 0x151(0x1f)

	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache // Final|Native|Public|BlueprintCallable // @ game+0x22c7960
};

// Class UMG.MenuAnchor
// Size: 0x198 (Inherited: 0x150)
struct UMenuAnchor : UContentWidget {
	struct UClass* MenuClass; // 0x150(0x08)
	DelegateProperty OnGetMenuContentEvent; // 0x158(0x10)
	char Placement; // 0x168(0x01)
	char UnknownData_169[0x7]; // 0x169(0x07)
	struct FMulticastDelegate OnMenuOpenChanged; // 0x170(0x10)
	char UnknownData_180[0x18]; // 0x180(0x18)

	void ToggleOpen(bool bFocusOnOpen); // Function UMG.MenuAnchor.ToggleOpen // Final|Native|Public|BlueprintCallable // @ game+0x22cf070
	bool ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22cec30
	void Open(bool bFocusMenu); // Function UMG.MenuAnchor.Open // Final|Native|Public|BlueprintCallable // @ game+0x22c84f0
	bool IsOpen(); // Function UMG.MenuAnchor.IsOpen // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c7a60
	bool HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c7810
	struct FVector2D GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6840
	void Close(); // Function UMG.MenuAnchor.Close // Final|Native|Public|BlueprintCallable // @ game+0x22c3de0
};

// Class UMG.NamedSlot
// Size: 0x168 (Inherited: 0x150)
struct UNamedSlot : UContentWidget {
	char UnknownData_150[0x18]; // 0x150(0x18)
};

// Class UMG.SafeZone
// Size: 0x168 (Inherited: 0x150)
struct USafeZone : UContentWidget {
	char UnknownData_150[0x18]; // 0x150(0x18)
};

// Class UMG.ScaleBox
// Size: 0x170 (Inherited: 0x150)
struct UScaleBox : UContentWidget {
	char StretchDirection; // 0x150(0x01)
	char Stretch; // 0x151(0x01)
	char UnknownData_152[0x2]; // 0x152(0x02)
	float UserSpecifiedScale; // 0x154(0x04)
	char UnknownData_158[0x18]; // 0x158(0x18)
};

// Class UMG.SizeBox
// Size: 0x188 (Inherited: 0x150)
struct USizeBox : UContentWidget {
	char bOverride_WidthOverride : 1; // 0x150(0x01)
	char bOverride_HeightOverride : 1; // 0x150(0x01)
	char bOverride_MinDesiredWidth : 1; // 0x150(0x01)
	char bOverride_MinDesiredHeight : 1; // 0x150(0x01)
	char bOverride_MaxDesiredWidth : 1; // 0x150(0x01)
	char bOverride_MaxDesiredHeight : 1; // 0x150(0x01)
	char UnknownData_150_6 : 2; // 0x150(0x01)
	char UnknownData_151[0x3]; // 0x151(0x03)
	float WidthOverride; // 0x154(0x04)
	float HeightOverride; // 0x158(0x04)
	float MinDesiredWidth; // 0x15c(0x04)
	float MinDesiredHeight; // 0x160(0x04)
	float MaxDesiredWidth; // 0x164(0x04)
	float MaxDesiredHeight; // 0x168(0x04)
	char UnknownData_16C[0x1c]; // 0x16c(0x1c)

	void SetWidthOverride(float InWidthOverride); // Function UMG.SizeBox.SetWidthOverride // Final|Native|Public|BlueprintCallable // @ game+0x22ceb30
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.SizeBox.SetMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x22cc120
	void SetMinDesiredHeight(float InMinDesiredHeight); // Function UMG.SizeBox.SetMinDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x22cbfa0
	void SetMaxDesiredWidth(float InMaxDesiredWidth); // Function UMG.SizeBox.SetMaxDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x22cbd20
	void SetMaxDesiredHeight(float InMaxDesiredHeight); // Function UMG.SizeBox.SetMaxDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x22cbca0
	void SetHeightOverride(float InHeightOverride); // Function UMG.SizeBox.SetHeightOverride // Final|Native|Public|BlueprintCallable // @ game+0x22cab00
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride // Final|Native|Public|BlueprintCallable // @ game+0x22c3dc0
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x22c3be0
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x22c3bc0
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x22c3b60
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x22c3b40
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride // Final|Native|Public|BlueprintCallable // @ game+0x22c3b20
};

// Class UMG.Viewport
// Size: 0x190 (Inherited: 0x150)
struct UViewport : UContentWidget {
	struct FLinearColor BackgroundColor; // 0x150(0x10)
	char UnknownData_160[0x30]; // 0x160(0x30)

	struct AActor* Spawn(struct UClass* ActorClass); // Function UMG.Viewport.Spawn // Final|Native|Public|BlueprintCallable // @ game+0x22cef60
	void SetViewRotation(struct FRotator Rotation); // Function UMG.Viewport.SetViewRotation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22ce9a0
	void SetViewLocation(struct FVector Location); // Function UMG.Viewport.SetViewLocation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22ce910
	struct FRotator GetViewRotation(); // Function UMG.Viewport.GetViewRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x22c7390
	struct UWorld* GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c74f0
	struct FVector GetViewLocation(); // Function UMG.Viewport.GetViewLocation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x22c7350
};

// Class UMG.GridPanel
// Size: 0x188 (Inherited: 0x150)
struct UGridPanel : UPanelWidget {
	struct TArray<float> ColumnFill; // 0x150(0x10)
	struct TArray<float> RowFill; // 0x160(0x10)
	char UnknownData_170[0x18]; // 0x170(0x18)

	struct UGridSlot* AddChildToGrid(struct UWidget* Content); // Function UMG.GridPanel.AddChildToGrid // Final|Native|Public|BlueprintCallable // @ game+0x22c32f0
};

// Class UMG.HorizontalBox
// Size: 0x168 (Inherited: 0x150)
struct UHorizontalBox : UPanelWidget {
	char UnknownData_150[0x18]; // 0x150(0x18)

	struct UHorizontalBoxSlot* AddChildToHorizontalBox(struct UWidget* Content); // Function UMG.HorizontalBox.AddChildToHorizontalBox // Final|Native|Public|BlueprintCallable // @ game+0x22c3380
};

// Class UMG.Overlay
// Size: 0x168 (Inherited: 0x150)
struct UOverlay : UPanelWidget {
	char UnknownData_150[0x18]; // 0x150(0x18)

	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content); // Function UMG.Overlay.AddChildToOverlay // Final|Native|Public|BlueprintCallable // @ game+0x22c3410
};

// Class UMG.ScrollBox
// Size: 0x8f0 (Inherited: 0x150)
struct UScrollBox : UPanelWidget {
	struct FScrollBoxStyle WidgetStyle; // 0x150(0x248)
	struct FScrollBarStyle WidgetBarStyle; // 0x398(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x8b0(0x08)
	struct USlateWidgetStyleAsset* BarStyle; // 0x8b8(0x08)
	char Orientation; // 0x8c0(0x01)
	char ScrollBarVisibility; // 0x8c1(0x01)
	char ConsumeMouseWheel; // 0x8c2(0x01)
	char UnknownData_8C3[0x1]; // 0x8c3(0x01)
	struct FVector2D ScrollbarThickness; // 0x8c4(0x08)
	bool AlwaysShowScrollbar; // 0x8cc(0x01)
	char UnknownData_8CD[0x23]; // 0x8cd(0x23)

	void SetScrollOffset(float NewScrollOffset); // Function UMG.ScrollBox.SetScrollOffset // Final|Native|Public|BlueprintCallable // @ game+0x22cd5b0
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, bool AnimateScroll); // Function UMG.ScrollBox.ScrollWidgetIntoView // Final|Native|Public|BlueprintCallable // @ game+0x22c8e70
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart // Final|Native|Public|BlueprintCallable // @ game+0x22c8e50
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd // Final|Native|Public|BlueprintCallable // @ game+0x22c8e30
	float GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6cc0
};

// Class UMG.UniformGridPanel
// Size: 0x180 (Inherited: 0x150)
struct UUniformGridPanel : UPanelWidget {
	struct FMargin SlotPadding; // 0x150(0x10)
	float MinDesiredSlotWidth; // 0x160(0x04)
	float MinDesiredSlotHeight; // 0x164(0x04)
	char UnknownData_168[0x18]; // 0x168(0x18)

	void SetSlotPadding(struct FMargin InSlotPadding); // Function UMG.UniformGridPanel.SetSlotPadding // Final|Native|Public|BlueprintCallable // @ game+0x22cda20
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth // Final|Native|Public|BlueprintCallable // @ game+0x22cc0a0
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight // Final|Native|Public|BlueprintCallable // @ game+0x22cc020
	struct UUniformGridSlot* AddChildToUniformGrid(struct UWidget* Content); // Function UMG.UniformGridPanel.AddChildToUniformGrid // Final|Native|Public|BlueprintCallable // @ game+0x22c34a0
};

// Class UMG.VerticalBox
// Size: 0x168 (Inherited: 0x150)
struct UVerticalBox : UPanelWidget {
	char UnknownData_150[0x18]; // 0x150(0x18)

	struct UVerticalBoxSlot* AddChildToVerticalBox(struct UWidget* Content); // Function UMG.VerticalBox.AddChildToVerticalBox // Final|Native|Public|BlueprintCallable // @ game+0x22c3530
};

// Class UMG.WidgetSwitcher
// Size: 0x170 (Inherited: 0x150)
struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x150(0x04)
	char UnknownData_154[0x1c]; // 0x154(0x1c)

	void SetActiveWidgetIndex(int32_t Index); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // Final|Native|Public|BlueprintCallable // @ game+0x22c8fc0
	void SetActiveWidget(struct UWidget* Widget); // Function UMG.WidgetSwitcher.SetActiveWidget // Final|Native|Public|BlueprintCallable // @ game+0x22c8f40
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function UMG.WidgetSwitcher.GetWidgetAtIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c7550
	int32_t GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6a00
	int32_t GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c5320
};

// Class UMG.WrapBox
// Size: 0x170 (Inherited: 0x150)
struct UWrapBox : UPanelWidget {
	struct FVector2D InnerSlotPadding; // 0x150(0x08)
	char UnknownData_158[0x18]; // 0x158(0x18)

	void SetInnerSlotPadding(struct FVector2D InPadding); // Function UMG.WrapBox.SetInnerSlotPadding // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22cb340
	struct UWrapBoxSlot* AddChildWrapBox(struct UWidget* Content); // Function UMG.WrapBox.AddChildWrapBox // Final|Native|Public|BlueprintCallable // @ game+0x22c35c0
};

// Class UMG.ProgressBar
// Size: 0x360 (Inherited: 0x138)
struct UProgressBar : UWidget {
	struct FProgressBarStyle WidgetStyle; // 0x138(0x1b8)
	struct USlateWidgetStyleAsset* Style; // 0x2f0(0x08)
	struct USlateBrushAsset* BackgroundImage; // 0x2f8(0x08)
	struct USlateBrushAsset* FillImage; // 0x300(0x08)
	struct USlateBrushAsset* MarqueeImage; // 0x308(0x08)
	float Percent; // 0x310(0x04)
	char BarFillType; // 0x314(0x01)
	bool bIsMarquee; // 0x315(0x01)
	char UnknownData_316[0x2]; // 0x316(0x02)
	DelegateProperty PercentDelegate; // 0x318(0x10)
	struct FLinearColor FillColorAndOpacity; // 0x328(0x10)
	DelegateProperty FillColorAndOpacityDelegate; // 0x338(0x10)
	char UnknownData_348[0x18]; // 0x348(0x18)

	void SetPercent(float InPercent); // Function UMG.ProgressBar.SetPercent // Final|Native|Public|BlueprintCallable // @ game+0x22cce10
	void SetIsMarquee(bool InbIsMarquee); // Function UMG.ProgressBar.SetIsMarquee // Final|Native|Public|BlueprintCallable // @ game+0x22cb820
	void SetFillColorAndOpacity(struct FLinearColor InColor); // Function UMG.ProgressBar.SetFillColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22ca620
};

// Class UMG.RichTextBlock
// Size: 0x378 (Inherited: 0x138)
struct URichTextBlock : UWidget {
	struct FText Text; // 0x138(0x38)
	DelegateProperty TextDelegate; // 0x170(0x10)
	struct FSlateFontInfo Font; // 0x180(0x40)
	struct FLinearColor Color; // 0x1c0(0x10)
	char Justification; // 0x1d0(0x01)
	bool AutoWrapText; // 0x1d1(0x01)
	char UnknownData_1D2[0x2]; // 0x1d2(0x02)
	float WrapTextAt; // 0x1d4(0x04)
	struct FMargin Margin; // 0x1d8(0x10)
	float LineHeightPercentage; // 0x1e8(0x04)
	char UnknownData_1EC[0x4]; // 0x1ec(0x04)
	struct TArray<struct URichTextBlockDecorator*> Decorators; // 0x1f0(0x10)
	char UnknownData_200[0x178]; // 0x200(0x178)
};

// Class UMG.ScrollBar
// Size: 0x680 (Inherited: 0x138)
struct UScrollBar : UWidget {
	struct FScrollBarStyle WidgetStyle; // 0x138(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x650(0x08)
	bool bAlwaysShowScrollbar; // 0x658(0x01)
	char Orientation; // 0x659(0x01)
	char UnknownData_65A[0x2]; // 0x65a(0x02)
	struct FVector2D Thickness; // 0x65c(0x08)
	char UnknownData_664[0x1c]; // 0x664(0x1c)

	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Function UMG.ScrollBar.SetState // Final|Native|Public|BlueprintCallable // @ game+0x22cdab0
};

// Class UMG.Slider
// Size: 0x408 (Inherited: 0x138)
struct USlider : UWidget {
	float Value; // 0x138(0x04)
	DelegateProperty ValueDelegate; // 0x13c(0x10)
	char UnknownData_14C[0x4]; // 0x14c(0x04)
	struct FSliderStyle WidgetStyle; // 0x150(0x248)
	char Orientation; // 0x398(0x01)
	char UnknownData_399[0x3]; // 0x399(0x03)
	struct FLinearColor SliderBarColor; // 0x39c(0x10)
	struct FLinearColor SliderHandleColor; // 0x3ac(0x10)
	bool IndentHandle; // 0x3bc(0x01)
	bool Locked; // 0x3bd(0x01)
	char UnknownData_3BE[0x2]; // 0x3be(0x02)
	struct FMulticastDelegate OnMouseCaptureBegin; // 0x3c0(0x10)
	struct FMulticastDelegate OnMouseCaptureEnd; // 0x3d0(0x10)
	struct FMulticastDelegate OnValueChanged; // 0x3e0(0x10)
	char UnknownData_3F0[0x18]; // 0x3f0(0x18)

	void SetValue(float InValue); // Function UMG.Slider.SetValue // Final|Native|Public|BlueprintCallable // @ game+0x22ce210
	void SetLocked(bool InValue); // Function UMG.Slider.SetLocked // Final|Native|Public|BlueprintCallable // @ game+0x22cbc10
	void SetIndentHandle(bool InValue); // Function UMG.Slider.SetIndentHandle // Final|Native|Public|BlueprintCallable // @ game+0x22cb2b0
	float GetValue(); // Function UMG.Slider.GetValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c7290
};

// Class UMG.Spacer
// Size: 0x158 (Inherited: 0x138)
struct USpacer : UWidget {
	struct FVector2D Size; // 0x138(0x08)
	char UnknownData_140[0x18]; // 0x140(0x18)

	void SetSize(struct FVector2D InSize); // Function UMG.Spacer.SetSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22cd900
};

// Class UMG.SpinBox
// Size: 0x560 (Inherited: 0x138)
struct USpinBox : UWidget {
	float Value; // 0x138(0x04)
	DelegateProperty ValueDelegate; // 0x13c(0x10)
	char UnknownData_14C[0x4]; // 0x14c(0x04)
	struct FSpinBoxStyle WidgetStyle; // 0x150(0x318)
	struct USlateWidgetStyleAsset* Style; // 0x468(0x08)
	float Delta; // 0x470(0x04)
	float SliderExponent; // 0x474(0x04)
	struct FSlateFontInfo Font; // 0x478(0x40)
	float MinDesiredWidth; // 0x4b8(0x04)
	bool ClearKeyboardFocusOnCommit; // 0x4bc(0x01)
	bool SelectAllTextOnCommit; // 0x4bd(0x01)
	char UnknownData_4BE[0x2]; // 0x4be(0x02)
	struct FSlateColor ForegroundColor; // 0x4c0(0x30)
	struct FMulticastDelegate OnValueChanged; // 0x4f0(0x10)
	struct FMulticastDelegate OnValueCommitted; // 0x500(0x10)
	struct FMulticastDelegate OnBeginSliderMovement; // 0x510(0x10)
	struct FMulticastDelegate OnEndSliderMovement; // 0x520(0x10)
	char bOverride_MinValue : 1; // 0x530(0x01)
	char bOverride_MaxValue : 1; // 0x530(0x01)
	char bOverride_MinSliderValue : 1; // 0x530(0x01)
	char bOverride_MaxSliderValue : 1; // 0x530(0x01)
	char UnknownData_530_4 : 4; // 0x530(0x01)
	char UnknownData_531[0x3]; // 0x531(0x03)
	float MinValue; // 0x534(0x04)
	float MaxValue; // 0x538(0x04)
	float MinSliderValue; // 0x53c(0x04)
	float MaxSliderValue; // 0x540(0x04)
	char UnknownData_544[0x1c]; // 0x544(0x1c)

	void SetValue(float NewValue); // Function UMG.SpinBox.SetValue // Final|Native|Public|BlueprintCallable // @ game+0x22ce290
	void SetMinValue(float NewValue); // Function UMG.SpinBox.SetMinValue // Final|Native|Public|BlueprintCallable // @ game+0x22cc220
	void SetMinSliderValue(float NewValue); // Function UMG.SpinBox.SetMinSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x22cc1a0
	void SetMaxValue(float NewValue); // Function UMG.SpinBox.SetMaxValue // Final|Native|Public|BlueprintCallable // @ game+0x22cbea0
	void SetMaxSliderValue(float NewValue); // Function UMG.SpinBox.SetMaxSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x22cbe20
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.SpinBox.SetForegroundColor // Final|Native|Public|BlueprintCallable // @ game+0x22ca8e0
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, char CommitMethod); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x188c2f0
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x188c2f0
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x188c2f0
	float GetValue(); // Function UMG.SpinBox.GetValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c72c0
	float GetMinValue(); // Function UMG.SpinBox.GetMinValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c68b0
	float GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6880
	float GetMaxValue(); // Function UMG.SpinBox.GetMaxValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6810
	float GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c67e0
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue // Final|Native|Public|BlueprintCallable // @ game+0x22c3c20
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x22c3c00
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue // Final|Native|Public|BlueprintCallable // @ game+0x22c3ba0
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x22c3b80
};

// Class UMG.TableViewBase
// Size: 0x138 (Inherited: 0x138)
struct UTableViewBase : UWidget {

	struct UWidget* OnGenerateRowUObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.TableViewBase.OnGenerateRowUObject__DelegateSignature // Public|Delegate // @ game+0x188c2f0
};

// Class UMG.ListView
// Size: 0x180 (Inherited: 0x138)
struct UListView : UTableViewBase {
	float ItemHeight; // 0x138(0x04)
	char UnknownData_13C[0x4]; // 0x13c(0x04)
	struct TArray<struct UObject*> Items; // 0x140(0x10)
	char SelectionMode; // 0x150(0x01)
	char UnknownData_151[0x3]; // 0x151(0x03)
	DelegateProperty OnGenerateRowEvent; // 0x154(0x10)
	char UnknownData_164[0x1c]; // 0x164(0x1c)
};

// Class UMG.TileView
// Size: 0x180 (Inherited: 0x138)
struct UTileView : UTableViewBase {
	float ItemWidth; // 0x138(0x04)
	float ItemHeight; // 0x13c(0x04)
	struct TArray<struct UObject*> Items; // 0x140(0x10)
	char SelectionMode; // 0x150(0x01)
	char UnknownData_151[0x3]; // 0x151(0x03)
	DelegateProperty OnGenerateTileEvent; // 0x154(0x10)
	char UnknownData_164[0x1c]; // 0x164(0x1c)

	void SetItemWidth(float Width); // Function UMG.TileView.SetItemWidth // Final|Native|Public|BlueprintCallable // @ game+0x22cba50
	void SetItemHeight(float Height); // Function UMG.TileView.SetItemHeight // Final|Native|Public|BlueprintCallable // @ game+0x22cb9d0
	void RequestListRefresh(); // Function UMG.TileView.RequestListRefresh // Final|Native|Public|BlueprintCallable // @ game+0x22c8df0
};

// Class UMG.TextBlock
// Size: 0x268 (Inherited: 0x138)
struct UTextBlock : UWidget {
	struct USlateWidgetStyleAsset* Style; // 0x138(0x08)
	struct FText Text; // 0x140(0x38)
	DelegateProperty TextDelegate; // 0x178(0x10)
	struct FSlateColor ColorAndOpacity; // 0x188(0x30)
	DelegateProperty ColorAndOpacityDelegate; // 0x1b8(0x10)
	struct FSlateFontInfo Font; // 0x1c8(0x40)
	struct FVector2D ShadowOffset; // 0x208(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x210(0x10)
	DelegateProperty ShadowColorAndOpacityDelegate; // 0x220(0x10)
	char Justification; // 0x230(0x01)
	bool AutoWrapText; // 0x231(0x01)
	char UnknownData_232[0x2]; // 0x232(0x02)
	float WrapTextAt; // 0x234(0x04)
	float MinDesiredWidth; // 0x238(0x04)
	struct FMargin Margin; // 0x23c(0x10)
	float LineHeightPercentage; // 0x24c(0x04)
	char UnknownData_250[0x18]; // 0x250(0x18)

	void SetText(struct FText InText); // Function UMG.TextBlock.SetText // Final|Native|Public|BlueprintCallable // @ game+0x22cde30
	void SetShadowOffset(struct FVector2D InShadowOffset); // Function UMG.TextBlock.SetShadowOffset // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22cd760
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.TextBlock.SetShadowColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22cd6e0
	void SetOpacity(float InOpacity); // Function UMG.TextBlock.SetOpacity // Final|Native|Public|BlueprintCallable // @ game+0x22cc660
	void SetJustification(char InJustification); // Function UMG.TextBlock.SetJustification // Final|Native|Public|BlueprintCallable // @ game+0x22cbad0
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.TextBlock.SetFont // Final|Native|Public|BlueprintCallable // @ game+0x22ca7d0
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.TextBlock.SetColorAndOpacity // Final|Native|Public|BlueprintCallable // @ game+0x22c9fb0
	struct FText GetText(); // Function UMG.TextBlock.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c7070
};

// Class UMG.Throbber
// Size: 0x1f0 (Inherited: 0x138)
struct UThrobber : UWidget {
	int32_t NumberOfPieces; // 0x138(0x04)
	bool bAnimateHorizontally; // 0x13c(0x01)
	bool bAnimateVertically; // 0x13d(0x01)
	bool bAnimateOpacity; // 0x13e(0x01)
	char UnknownData_13F[0x1]; // 0x13f(0x01)
	struct USlateBrushAsset* PieceImage; // 0x140(0x08)
	struct FSlateBrush Image; // 0x148(0x90)
	char UnknownData_1D8[0x18]; // 0x1d8(0x18)

	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.Throbber.SetNumberOfPieces // Final|Native|Public|BlueprintCallable // @ game+0x22cc4d0
	void SetAnimateVertically(bool bInAnimateVertically); // Function UMG.Throbber.SetAnimateVertically // Final|Native|Public|BlueprintCallable // @ game+0x22c9380
	void SetAnimateOpacity(bool bInAnimateOpacity); // Function UMG.Throbber.SetAnimateOpacity // Final|Native|Public|BlueprintCallable // @ game+0x22c92f0
	void SetAnimateHorizontally(bool bInAnimateHorizontally); // Function UMG.Throbber.SetAnimateHorizontally // Final|Native|Public|BlueprintCallable // @ game+0x22c9260
};

// Class UMG.WidgetAnimation
// Size: 0x2e0 (Inherited: 0x2a8)
struct UWidgetAnimation : UMovieSceneSequence {
	struct FMulticastDelegate OnAnimationStarted; // 0x2a8(0x10)
	struct FMulticastDelegate OnAnimationFinished; // 0x2b8(0x10)
	struct UMovieScene* MovieScene; // 0x2c8(0x08)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; // 0x2d0(0x10)

	float GetStartTime(); // Function UMG.WidgetAnimation.GetStartTime // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6e60
	float GetEndTime(); // Function UMG.WidgetAnimation.GetEndTime // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c5e60
};

// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x260 (Inherited: 0x228)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; // 0x228(0x08)
	struct TArray<struct FDelegateRuntimeBinding> Bindings; // 0x230(0x10)
	struct TArray<struct UWidgetAnimation*> Animations; // 0x240(0x10)
	struct TArray<struct FName> NamedSlots; // 0x250(0x10)
};

// Class UMG.WidgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWidgetBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FEventReply UnlockMouse(struct FEventReply Reply); // Function UMG.WidgetBlueprintLibrary.UnlockMouse // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x22cf180
	struct FEventReply Unhandled(); // Function UMG.WidgetBlueprintLibrary.Unhandled // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x22cf100
	struct FEventReply SetUserFocus(struct FEventReply Reply, struct UWidget* FocusWidget, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.SetUserFocus // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x22ce090
	struct FEventReply SetMousePosition(struct FEventReply Reply, struct FVector2D NewMousePosition); // Function UMG.WidgetBlueprintLibrary.SetMousePosition // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x22cc320
	void SetInputMode_UIOnly(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x22cb570
	void SetInputMode_GameOnly(struct APlayerController* Target); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x22cb500
	void SetInputMode_GameAndUI(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x22cb3c0
	void SetFocusToGameViewport(); // Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x22ca7b0
	void SetBrushResourceToTexture(struct FSlateBrush Brush, struct UTexture2D* Texture); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x22c9cc0
	void SetBrushResourceToMaterial(struct FSlateBrush Brush, struct UMaterialInterface* Material); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x22c9b50
	struct FEventReply ReleaseMouseCapture(struct FEventReply Reply); // Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x22c8a70
	struct FEventReply ReleaseJoystickCapture(struct FEventReply Reply, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x22c8930
	struct FSlateBrush NoResourceBrush(); // Function UMG.WidgetBlueprintLibrary.NoResourceBrush // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x22c8370
	struct FSlateBrush MakeBrushFromTexture(struct UTexture2D* Texture, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x22c8230
	struct FSlateBrush MakeBrushFromMaterial(struct UMaterialInterface* Material, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x22c80f0
	struct FSlateBrush MakeBrushFromAsset(struct USlateBrushAsset* BrushAsset); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x22c8040
	struct FEventReply LockMouse(struct FEventReply Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.LockMouse // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x22c7f00
	bool IsDragDropping(); // Function UMG.WidgetBlueprintLibrary.IsDragDropping // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x22c79d0
	struct FEventReply Handled(); // Function UMG.WidgetBlueprintLibrary.Handled // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x22c7610
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent Event); // Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x22c64b0
	struct FInputEvent GetInputEventFromPointerEvent(struct FPointerEvent Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x22c62f0
	struct FInputEvent GetInputEventFromNavigationEvent(struct FNavigationEvent Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x22c6200
	struct FInputEvent GetInputEventFromKeyEvent(struct FKeyEvent Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x22c60e0
	struct FInputEvent GetInputEventFromControllerEvent(struct FControllerEvent Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromControllerEvent // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x22c5f90
	struct FInputEvent GetInputEventFromCharacterEvent(struct FCharacterEvent Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x22c5e90
	struct UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush Brush); // Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x22c5d30
	struct UDragDropOperation* GetDragDroppingContent(); // Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x22c5c60
	struct UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x22c5940
	struct UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x22c5810
	struct UObject* GetBrushResource(struct FSlateBrush Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResource // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x22c56e0
	void GetAllWidgetsWithInterface(struct UObject* WorldContextObject, struct UClass* Interface, struct TArray<struct UUserWidget*> FoundWidgets, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x22c5500
	void GetAllWidgetsOfClass(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*> FoundWidgets, struct UClass* WidgetClass, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x22c5390
	struct FEventReply EndDragDrop(struct FEventReply Reply); // Function UMG.WidgetBlueprintLibrary.EndDragDrop // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x22c50c0
	void DrawTextFormatted(struct FPaintContext Context, struct FText Text, struct FVector2D Position, struct UFont* Font, int32_t FontSize, struct FName FontTypeFace, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawTextFormatted // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x22c4d40
	void DrawText(struct FPaintContext Context, struct FString InString, struct FVector2D Position, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawText // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x22c4ba0
	void DrawLines(struct FPaintContext Context, struct TArray<struct FVector2D> Points, struct FLinearColor Tint, bool bAntiAlias); // Function UMG.WidgetBlueprintLibrary.DrawLines // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x22c49e0
	void DrawLine(struct FPaintContext Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias); // Function UMG.WidgetBlueprintLibrary.DrawLine // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x22c4820
	void DrawBox(struct FPaintContext Context, struct FVector2D Position, struct FVector2D Size, struct USlateBrushAsset* Brush, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawBox // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x22c4670
	void DismissAllMenus(); // Function UMG.WidgetBlueprintLibrary.DismissAllMenus // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x22c4380
	struct FEventReply DetectDragIfPressed(struct FPointerEvent PointerEvent, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x22c4150
	struct FEventReply DetectDrag(struct FEventReply Reply, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDrag // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x22c3f70
	struct UDragDropOperation* CreateDragDropOperation(struct UClass* OperationClass); // Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation // Final|Native|Static|Public|BlueprintCallable // @ game+0x22c3ef0
	struct UUserWidget* Create(struct UObject* WorldContextObject, struct UClass* WidgetType, struct APlayerController* OwningPlayer); // Function UMG.WidgetBlueprintLibrary.Create // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x22c3e00
	struct FEventReply ClearUserFocus(struct FEventReply Reply, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.ClearUserFocus // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x22c3c80
	struct FEventReply CaptureMouse(struct FEventReply Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.CaptureMouse // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x22c39a0
	struct FEventReply CaptureJoystick(struct FEventReply Reply, struct UWidget* CapturingWidget, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.CaptureJoystick // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x22c3820
	void CancelDragDrop(); // Function UMG.WidgetBlueprintLibrary.CancelDragDrop // Final|Native|Static|Public|BlueprintCallable // @ game+0x22c3800
};

// Class UMG.WidgetComponent
// Size: 0x6b0 (Inherited: 0x5c0)
struct UWidgetComponent : UPrimitiveComponent {
	char Space; // 0x5b8(0x01)
	struct UClass* WidgetClass; // 0x5c0(0x08)
	struct FIntPoint DrawSize; // 0x5c8(0x08)
	struct FVector2D Pivot; // 0x5d0(0x08)
	float MaxInteractionDistance; // 0x5d8(0x04)
	char UnknownData_5DD[0x3]; // 0x5dd(0x03)
	struct ULocalPlayer* OwnerPlayer; // 0x5e0(0x08)
	struct FLinearColor BackgroundColor; // 0x5e8(0x10)
	char BlendMode; // 0x5f8(0x01)
	bool bIsOpaque; // 0x5f9(0x01)
	bool bIsTwoSided; // 0x5fa(0x01)
	char UnknownData_5FB[0x1]; // 0x5fb(0x01)
	float ParabolaDistortion; // 0x5fc(0x04)
	bool TickWhenOffscreen; // 0x600(0x01)
	char UnknownData_601[0x7]; // 0x601(0x07)
	struct UUserWidget* Widget; // 0x608(0x08)
	struct UBodySetup* BodySetup; // 0x610(0x08)
	struct UMaterialInterface* TranslucentMaterial; // 0x618(0x08)
	struct UMaterialInterface* TranslucentMaterial_OneSided; // 0x620(0x08)
	struct UMaterialInterface* OpaqueMaterial; // 0x628(0x08)
	struct UMaterialInterface* OpaqueMaterial_OneSided; // 0x630(0x08)
	struct UMaterialInterface* MaskedMaterial; // 0x638(0x08)
	struct UMaterialInterface* MaskedMaterial_OneSided; // 0x640(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x648(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x650(0x08)
	bool bUseLegacyRotation; // 0x658(0x01)
	bool bAddedToScreen; // 0x659(0x01)
	char UnknownData_65A[0x56]; // 0x65a(0x56)

	void SetWidget(struct UUserWidget* Widget); // Function UMG.WidgetComponent.SetWidget // Final|Native|Public|BlueprintCallable // @ game+0x22ceab0
	void SetOwnerPlayer(struct ULocalPlayer* LocalPlayer); // Function UMG.WidgetComponent.SetOwnerPlayer // Final|Native|Public|BlueprintCallable // @ game+0x22cc6e0
	void SetMaxInteractionDistance(float Distance); // Function UMG.WidgetComponent.SetMaxInteractionDistance // Final|Native|Public|BlueprintCallable // @ game+0x22cbda0
	void SetDrawSize(struct FVector2D Size); // Function UMG.WidgetComponent.SetDrawSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x22ca440
	struct UUserWidget* GetUserWidgetObject(); // Function UMG.WidgetComponent.GetUserWidgetObject // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c7110
	struct ULocalPlayer* GetOwnerPlayer(); // Function UMG.WidgetComponent.GetOwnerPlayer // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c6b90
	float GetMaxInteractionDistance(); // Function UMG.WidgetComponent.GetMaxInteractionDistance // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x22c67b0
	struct FVector2D GetDrawSize(); // Function UMG.WidgetComponent.GetDrawSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x22c5c90
};

// Class UMG.WidgetLayoutLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWidgetLayoutLibrary : UBlueprintFunctionLibrary {

	struct UVerticalBoxSlot* SlotAsVerticalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x22ceee0
	struct UUniformGridSlot* SlotAsUniformGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x22cee60
	struct UOverlaySlot* SlotAsOverlaySlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x22cede0
	struct UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x22ced60
	struct UGridSlot* SlotAsGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsGridSlot // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x22cece0
	struct UCanvasPanelSlot* SlotAsCanvasSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x22cec60
	void RemoveAllWidgets(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.RemoveAllWidgets // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x22c8b70
	bool ProjectWorldLocationToWidgetPosition(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D ScreenPosition); // Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x22c87f0
	struct FVector2D GetViewportSize(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportSize // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x22c7460
	float GetViewportScale(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportScale // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x22c73d0
	bool GetMousePositionScaledByDPI(struct APlayerController* Player, float LocationX, float LocationY); // Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x22c68e0
};

// Class UMG.WidgetNavigation
// Size: 0xa0 (Inherited: 0x28)
struct UWidgetNavigation : UObject {
	struct FWidgetNavigationData Up; // 0x28(0x14)
	struct FWidgetNavigationData Down; // 0x3c(0x14)
	struct FWidgetNavigationData Left; // 0x50(0x14)
	struct FWidgetNavigationData Right; // 0x64(0x14)
	struct FWidgetNavigationData Next; // 0x78(0x14)
	struct FWidgetNavigationData Previous; // 0x8c(0x14)
};

// Class UMG.WidgetTree
// Size: 0x40 (Inherited: 0x28)
struct UWidgetTree : UObject {
	struct UWidget* RootWidget; // 0x28(0x08)
	struct TArray<struct UWidget*> AllWidgets; // 0x30(0x10)
};

