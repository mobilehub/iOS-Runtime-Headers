/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSStream : NSObject  {
}

+ (void)getStreamsToHost:(id)arg1 port:(int)arg2 inputStream:(id*)arg3 outputStream:(id*)arg4;
+ (id)errorForCFStreamError:(struct { int x1; int x2; })arg1;

- (void)close;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)open;
- (unsigned int)streamStatus;
- (id)propertyForKey:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)streamError;
- (id)betterStreamError;

@end
