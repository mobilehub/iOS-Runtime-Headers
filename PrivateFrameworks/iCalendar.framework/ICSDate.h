/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class NSString;

@interface ICSDate : ICSProperty  {
}

@property(retain) NSString * tzid;


- (id)description;
- (void)setTzid:(id)arg1;
- (BOOL)hasTimeComponent;
- (id)initWithValue:(id)arg1;
- (id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3 hour:(int)arg4 minute:(int)arg5 second:(int)arg6;
- (id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3;
- (id)components;
- (id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3 hour:(int)arg4 minute:(int)arg5 second:(int)arg6 timeZone:(id)arg7;
- (BOOL)hasFloatingTimeZone;
- (id)tzid;

@end
