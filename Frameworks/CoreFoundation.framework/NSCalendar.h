/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSCalendar : NSObject <NSCopying, NSCoding> {
}

+ (id)currentCalendar;
+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)autoupdatingCurrentCalendar;
+ (id)gregorianCalendar;

- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned int)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forDate:(id)arg3;
- (BOOL)rangeOfUnit:(unsigned int)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4;
- (void)setTimeZone:(id)arg1;
- (id)components:(unsigned int)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned int)arg4;
- (id)components:(unsigned int)arg1 fromDate:(id)arg2;
- (id)dateFromComponents:(id)arg1;
- (void)setLocale:(id)arg1;
- (id)timeZone;
- (id)locale;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCalendarIdentifier:(id)arg1;
- (unsigned char)_addComponents:(double*)arg1 :(unsigned long)arg2 :(const char *)arg3 :(void*)arg4;
- (unsigned char)_decomposeAbsoluteTime:(double)arg1 :(const char *)arg2 :(void*)arg3;
- (unsigned char)_composeAbsoluteTime:(double*)arg1 :(const char *)arg2 :(void*)arg3;
- (struct { int x1; int x2; })_rangeOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forAT:(double)arg3;
- (long)_ordinalityOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forAT:(double)arg3;
- (unsigned char)_rangeOfUnit:(unsigned int)arg1 startTime:(double*)arg2 interval:(double*)arg3 forAT:(double)arg4;
- (id)_copyLocale;
- (id)_copyTimeZone;
- (id)_gregorianStartDate;
- (void)_setGregorianStartDate:(id)arg1;
- (struct { int x1; int x2; })_minimumRangeOfUnit:(unsigned int)arg1;
- (struct { int x1; int x2; })_maximumRangeOfUnit:(unsigned int)arg1;
- (unsigned char)_diffComponents:(double)arg1 :(double)arg2 :(unsigned long)arg3 :(const char *)arg4 :(void*)arg5;
- (id)PMSymbol;
- (id)longEraSymbols;
- (id)gregorianStartDate;
- (id)shortStandaloneQuarterSymbols;
- (id)standaloneQuarterSymbols;
- (id)shortQuarterSymbols;
- (id)quarterSymbols;
- (id)veryShortStandaloneWeekdaySymbols;
- (id)shortStandaloneWeekdaySymbols;
- (id)standaloneWeekdaySymbols;
- (id)veryShortWeekdaySymbols;
- (id)veryShortStandaloneMonthSymbols;
- (id)shortStandaloneMonthSymbols;
- (id)standaloneMonthSymbols;
- (id)veryShortMonthSymbols;
- (id)AMSymbol;
- (id)shortWeekdaySymbols;
- (id)weekdaySymbols;
- (id)shortMonthSymbols;
- (id)monthSymbols;
- (id)eraSymbols;
- (id)calendarIdentifier;
- (void)setFirstWeekday:(unsigned int)arg1;
- (unsigned int)firstWeekday;
- (void)setMinimumDaysInFirstWeek:(unsigned int)arg1;
- (unsigned int)minimumDaysInFirstWeek;
- (void)setGregorianStartDate:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })minimumRangeOfUnit:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })maximumRangeOfUnit:(unsigned int)arg1;
- (unsigned int)ordinalityOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forDate:(id)arg3;
- (unsigned long)_cfTypeID;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
