/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPVolumeSlider;

@interface MPVolumeView : UIView <NSCoding> {
    void *_internal;
}

@property BOOL showsVolumeSlider;
@property BOOL showsRouteButton;
@property(readonly) int style;
@property(readonly) MPVolumeSlider * volumeSlider;
@property BOOL volumeSliderShrinksFromBothEnds;
@property BOOL hidesRouteLabelWhenNoRouteChoice;
@property(readonly) BOOL isVisible;
@property(readonly) BOOL isShowingRouteButton;

+ (void)_initializeSafeCategory;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (BOOL)isVisible;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)didMoveToSuperview;
- (int)style;
- (void)layoutSubviews;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setAlpha:(float)arg1;
- (void)didMoveToWindow;
- (void)_setVolumeAudioCategory:(id)arg1;
- (BOOL)isShowingRouteButton;
- (BOOL)hidesRouteLabelWhenNoRouteChoice;
- (BOOL)volumeSliderShrinksFromBothEnds;
- (BOOL)showsRouteButton;
- (void)_initWithStyle:(int)arg1;
- (BOOL)showsVolumeSlider;
- (void)setShowsVolumeSlider:(BOOL)arg1;
- (void)setShowsRouteButton:(BOOL)arg1;
- (id)volumeSlider;
- (void)setHidesRouteLabelWhenNoRouteChoice:(BOOL)arg1;
- (void)setVolumeSliderShrinksFromBothEnds:(BOOL)arg1;
- (void)dismissActiveOverlaysAnimated:(BOOL)arg1;
- (BOOL)isShowingActiveOverlays;
- (void)_createSubviews;
- (void)_displayAudioRoutePicker;
- (void)_setShowsRouteButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setShowsVolumeSlider:(BOOL)arg1;
- (id)_routeButtonImage;
- (id)_routeButton;
- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;

@end
