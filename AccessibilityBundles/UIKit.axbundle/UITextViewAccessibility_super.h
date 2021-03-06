/* Generated by RuntimeBrowser.
   Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
 */

@interface UITextViewAccessibility_super : UIAccessibilitySafeCategory  {
}

+ (void)_initializeSafeCategory;

- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (id)_accessibilityTextViewTextOperationResponder;
- (void)_accessibilitySetValue:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_accessibilityBoundsForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_accessibilityRangeForLineNumberAndColumn:(id)arg1;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)dealloc;
- (void)keyboardInputChangedSelection:(id)arg1;
- (void)webViewDidChange:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (void)selectAll:(id)arg1;
- (BOOL)keyboardInputChanged:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityValue;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;

@end
