/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MediaAppTestState : NSObject  {
    BOOL _gatherPerformanceData;
    id _delegate;
}

+ (id)sharedTestState;

- (void)setDelegate:(id)arg1;
- (void)setGatherPerformanceData:(BOOL)arg1;
- (BOOL)gatherPerformanceData;
- (void)clearState;
- (void)sendPlaybackDidEndMessage:(id)arg1;

@end
