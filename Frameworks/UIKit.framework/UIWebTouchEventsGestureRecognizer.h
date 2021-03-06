/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray;

@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer  {
    id _touchTarget;
    SEL _touchAction;
    unsigned int _passedHitTest : 1;
    unsigned int _defaultPrevented : 1;
    unsigned int _inJavaScriptGesture : 1;
    float _originalGestureDistance;
    float _originalGestureAngle;
    int _type;
    struct CGPoint { 
        float x; 
        float y; 
    } _locationInWindow;
    NSMutableArray *_touchLocations;
    NSMutableArray *_touchIdentifiers;
    NSMutableArray *_touchPhases;
    float _scale;
    float _rotation;
}

@property(readonly) float rotation;
@property(readonly) float scale;
@property(readonly) BOOL inJavaScriptGesture;
@property(retain) NSMutableArray * touchPhases;
@property(retain) NSMutableArray * touchIdentifiers;
@property(retain) NSMutableArray * touchLocations;
@property(readonly) struct CGPoint { float x; float y; } locationInWindow;
@property(readonly) int type;
@property(getter=isDefaultPrevented) BOOL defaultPrevented;


- (BOOL)inJavaScriptGesture;
- (float)rotation;
- (id)_typeDescription;
- (id)_locationsDescription;
- (id)_identifiersDescription;
- (id)_phaseDescription:(int)arg1;
- (id)_phasesDescription;
- (BOOL)_hitTestTouches:(id)arg1;
- (void)_recordTouches:(id)arg1 type:(int)arg2;
- (void)_processTouches:(id)arg1 withEvent:(id)arg2 type:(int)arg3;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (id)touchPhases;
- (void)setTouchPhases:(id)arg1;
- (id)touchIdentifiers;
- (void)setTouchIdentifiers:(id)arg1;
- (id)touchLocations;
- (void)setTouchLocations:(id)arg1;
- (BOOL)isDefaultPrevented;
- (void)setDefaultPrevented:(BOOL)arg1;
- (void)_reset;
- (void)_resetGestureRecognizer;
- (struct CGPoint { float x1; float x2; })locationInWindow;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (int)type;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)description;
- (float)scale;

@end
