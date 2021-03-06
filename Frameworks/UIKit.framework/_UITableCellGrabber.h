/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITableCell;

@interface _UITableCellGrabber : UIControl  {
    UITableCell *_cell;
    struct CGPoint { 
        float x; 
        float y; 
    } _downPoint;
}


- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingAt:(struct CGPoint { float x1; float x2; })arg1 previous:(struct CGPoint { float x1; float x2; })arg2 withEvent:(struct __GSEvent { }*)arg3;
- (void)_controlMouseUp:(struct __GSEvent { }*)arg1;
- (BOOL)continueTrackingAt:(struct CGPoint { float x1; float x2; })arg1 previous:(struct CGPoint { float x1; float x2; })arg2 withEvent:(struct __GSEvent { }*)arg3;
- (void)_controlMouseDragged:(struct __GSEvent { }*)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)shouldTrack;
- (BOOL)beginTrackingAt:(struct CGPoint { float x1; float x2; })arg1 withEvent:(struct __GSEvent { }*)arg2;
- (id)initWithCell:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_controlMouseDown:(struct __GSEvent { }*)arg1;
- (BOOL)cancelTouchTracking;
- (BOOL)cancelMouseTracking;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
