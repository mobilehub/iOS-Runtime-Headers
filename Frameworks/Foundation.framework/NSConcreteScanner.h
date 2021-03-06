/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSCharacterSet;

@interface NSConcreteScanner : NSScanner  {
    NSString *scanString;
    NSCharacterSet *skipSet;
    NSCharacterSet *invertedSkipSet;
    id locale;
    unsigned int scanLocation;
    struct { 
        unsigned int caseSensitive : 1; 
        unsigned int  : 31; 
    } flags;
}


- (void)setLocale:(id)arg1;
- (id)locale;
- (void)finalize;
- (id)string;
- (id)initWithString:(id)arg1;
- (void)dealloc;
- (BOOL)scanInt:(int*)arg1;
- (void)setCharactersToBeSkipped:(id)arg1;
- (id)_invertedSkipSet;
- (void)setCaseSensitive:(BOOL)arg1;
- (BOOL)caseSensitive;
- (BOOL)scanLongLong:(long long*)arg1;
- (unsigned int)scanLocation;
- (id)charactersToBeSkipped;
- (void)setScanLocation:(unsigned int)arg1;

@end
