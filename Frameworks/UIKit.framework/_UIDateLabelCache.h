/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIFont;

@interface _UIDateLabelCache : NSObject  {
    double _today;
    double _noon;
    double _tomorrow;
    double _previousWeek;
    UIFont *_timeDesignatorFont;
    NSString *_amString;
    NSString *_pmString;
    struct CGSize { 
        float width; 
        float height; 
    } _amSize;
    struct CGSize { 
        float width; 
        float height; 
    } _pmSize;
    struct __CFDictionary { } *_dateStringCache;
    struct __CFDateFormatter { } *_timeFormatter;
    struct __CFDateFormatter { } *_shortDateFormatter;
    struct __CFDateFormatter { } *_shortTimeFormatter;
    struct __CFTimeZone { } *_tz;
    struct __CFDictionary { } *_dateSizeCache;
    BOOL _designatorValid;
    BOOL _use24HourTime;
    BOOL _timeDesignatorAppearsBeforeTime;
}


- (void)_loadDesignatorStrings;
- (void)invalidateDateSizeCache;
- (void)invalidateDateCache;
- (void)_significantTimeChange;
- (void)_localeWillChange;
- (void)_localeDidChange;
- (id)amString;
- (id)pmString;
- (struct CGSize { float x1; float x2; })amSize;
- (struct CGSize { float x1; float x2; })pmSize;
- (void)_updateTodayAndNoon;
- (int)dateKeyForAbsoluteTime:(double)arg1;
- (double)todayAbsoluteTime;
- (double)noonAbsoluteTime;
- (id)timeDesignatorForAbsoluteTime:(double)arg1;
- (struct CGSize { float x1; float x2; })timeDesignatorSizeForAbsoluteTime:(double)arg1 forFont:(id)arg2;
- (id)dateStringForAbsoluteTime:(double)arg1 dateKey:(int)arg2;
- (struct CGSize { float x1; float x2; })mainTimeSizeForDateKey:(int)arg1;
- (void)setMainTimeSize:(struct CGSize { float x1; float x2; })arg1 forDateKey:(int)arg2;
- (BOOL)use24HourTime;
- (BOOL)timeDesignatorAppearsBeforeTime;
- (BOOL)_timeDesignatorAppearsBeforeTime;
- (id)timeDesignatorFont;
- (id)init;
- (void)dealloc;

@end
