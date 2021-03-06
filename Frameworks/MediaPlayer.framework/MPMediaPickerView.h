/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaPickerController;

@interface MPMediaPickerView : UIView  {
    MPMediaPickerController *_parentController;
}

@property MPMediaPickerController * parentController;

+ (void)_initializeSafeCategory;

- (void)willMoveToWindow:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)didMoveToWindow;
- (id)parentController;
- (void)setParentController:(id)arg1;
- (BOOL)_accessibilityObscuresScreen;

@end
