/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary, UIView;

@interface UIDropShadowView : UIView  {
    float _cornerRadius;
    UIView *_contentView;
    UIView *_backgroundImage;
    NSDictionary *_preservedLayerValues;
}

@property UIView * contentView;
@property float cornerRadius;


- (void)updateShadowPath;
- (void)setContentView:(id)arg1;
- (float)cornerRadius;
- (id)contentView;
- (void)setCornerRadius:(float)arg1;
- (void)willBeginRotationWithOriginalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 newBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)didFinishRotation;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)init;
- (void)dealloc;

@end
