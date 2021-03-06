/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarBluetoothItemView : UIStatusBarItemView  {
    BOOL _connected;
    BOOL _shouldAnimateConnection;
}

+ (void)_initializeSafeCategory;

- (id)contentsImageForStyle:(int)arg1;
- (BOOL)updateForNewData:(struct { BOOL x1[22]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; BOOL x20[256]; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; }*)arg1 actions:(int)arg2;
- (void)performPendedActions;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;

@end
