/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIAlertView;

@interface UITwoSidedAlertController : NSObject  {
    UIAlertView *_front;
    UIAlertView *_back;
    UIAlertView *_currentAlert;
    id _delegate;
}


- (id)frontAlert;
- (id)backAlert;
- (id)createFrontAlert;
- (id)createBackAlert;
- (void)flip;
- (void)frontAlertClickedButtonAtIndex:(int)arg1;
- (void)backAlertClickedButtonAtIndex:(int)arg1;
- (void)dismiss;
- (void)alertSheet:(id)arg1 buttonClicked:(int)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (void)show;
- (void)alertViewCancel:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
