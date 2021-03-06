/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIEvent : NSObject  {
    double _timestamp;
}

@property(readonly) int type;
@property(readonly) int subtype;
@property(readonly) double timestamp;


- (id)touchesForGestureRecognizer:(id)arg1;
- (int)type;
- (double)timestamp;
- (void)_setTimestamp:(double)arg1;
- (int)_shakeState;
- (id)allTouches;
- (id)touchesForWindow:(id)arg1;
- (id)touchesForView:(id)arg1;
- (id)_touchesForGestureRecognizer:(id)arg1;
- (int)subtype;
- (id)_initWithEvent:(struct __GSEvent { }*)arg1 touches:(id)arg2;
- (struct __GSEvent { }*)_gsEvent;
- (id)_init;
- (id)_mk_copyReplacingTouch:(id)arg1 withTouch:(id)arg2;

@end
