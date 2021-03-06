/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class NSDate, NSString;

@interface CLLocation : NSObject <NSCopying, NSCoding> {
    id _internal;
}

@property(readonly) int _mapkit_source;
@property(readonly) struct { double latitude; double longitude; } coordinate;
@property(readonly) double altitude;
@property(readonly) double horizontalAccuracy;
@property(readonly) double verticalAccuracy;
@property(readonly) double course;
@property(readonly) double speed;
@property(readonly) NSDate * timestamp;
@property(readonly) struct { int suitability; struct { double latitude; double longitude; } coordinate; double horizontalAccuracy; double altitude; double verticalAccuracy; double speed; double course; double timestamp; int confidence; double lifespan; int type; } clientLocation;
@property(readonly) NSString * iso6709Notation;
@property(readonly) int type;

+ (int)_mapkit_typeWithSource:(int)arg1;
+ (id)_mapkit_stringWithType:(int)arg1;

- (void)setHorizontalAccuracy:(double)arg1;
- (int)type;
- (id)timestamp;
- (double)speed;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7;
- (double)getDistanceFrom:(const id)arg1;
- (id)_initWithCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7;
- (id)initWithIso6709Notation:(id)arg1;
- (double)distanceFromLocation:(const id)arg1;
- (id)propagateLocationToTime:(double)arg1;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; int x9; double x10; int x11; })arg1;
- (id)shortDescription;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5;
- (struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; int x9; double x10; int x11; })clientLocation;
- (double)horizontalAccuracy;
- (double)verticalAccuracy;
- (double)altitude;
- (struct { double x1; double x2; })coordinate;
- (id)iso6709Notation;
- (double)course;
- (id)locationDescription;
- (int)_mapkit_source;
- (BOOL)isEqualToLocationCoordinate:(struct { double x1; double x2; })arg1;

@end
