/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class <SWFakeRunSensorDelegate>;

@interface SWFakeRunSensor : SWRunSensor  {
    <SWFakeRunSensorDelegate> *_delegate;
}

+ (void)initialize;
+ (id)_newDelegate;

- (void)deactivate;
- (id)init;
- (void)dealloc;
- (void)_fakeNextPacketWithPayload:(id)arg1 timestamp:(unsigned long)arg2;
- (void)beginLinking;
- (void)cancelLinking;
- (unsigned int)remainingBatteryLifetimeInHours;
- (void)beginSearching;
- (void)cancelSearching;
- (void)_fakeLinkingSuccess;
- (void)_fakeLinkingFailure;
- (void)_fakeSearchSuccess;

@end
