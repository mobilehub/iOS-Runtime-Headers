/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, UINavigationItem, UIFont;

@interface UINavigationItemView : UIView  {
    UIFont *_font;
    UINavigationItem *_item;
    float _titleWidth;
    BOOL _titleAutosizesToFit;
    UIView *_topCrossView;
    UIView *_bottomCrossView;
    BOOL _isCrossFading;
    int _lineBreakMode;
}

+ (void)_initializeSafeCategory;

- (void)_setLineBreakMode:(int)arg1;
- (id)navigationItem;
- (id)_scriptingInfo;
- (id)title;
- (id)initWithNavigationItem:(id)arg1;
- (void)drawText:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 barStyle:(int)arg3;
- (void)_resetTitleWidth;
- (void)setTitleAutoresizesToFit:(BOOL)arg1;
- (BOOL)titleAutoresizesToFit;
- (void)_prepareCrossViewsForNewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_crossFadeHiddingButton:(BOOL)arg1;
- (void)_cleanUpCrossView;
- (float)_titleWidth;
- (BOOL)_useSilverLookForBarStyle:(int)arg1;
- (id)_currentTextColorForBarStyle:(int)arg1;
- (id)_currentTextShadowColorForBarStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })_currentTextShadowOffsetForBarStyle:(int)arg1;
- (id)_defaultFont;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_accessibilityIsTitleElement;
- (BOOL)_accessibilityServesAsFirstElement;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;

@end
