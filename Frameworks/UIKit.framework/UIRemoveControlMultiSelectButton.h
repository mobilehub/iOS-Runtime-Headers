/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRemoveControlMultiSelectButton : UIRemoveControlMinusButton  {
    unsigned int _isHighlighted : 1;
    unsigned int _isSelected : 1;
}

+ (float)defaultWidth;
+ (id)minusImage;
+ (id)plusImage;
+ (id)minusCenterImage;

- (BOOL)isRotated;
- (void)setSelected:(BOOL)arg1;
- (id)initWithRemoveControl:(id)arg1;
- (void)toggleRotate:(BOOL)arg1;
- (BOOL)isHiding;
- (void)setHiding:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 highlighted:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isRotating;
- (BOOL)isHighlighted;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
