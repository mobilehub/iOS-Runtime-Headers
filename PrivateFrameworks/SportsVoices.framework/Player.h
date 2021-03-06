/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@class NSString, NSBundle;

@interface Player : NSObject <AVAudioPlayerDelegate> {
    NSString *_directory;
    NSBundle *_bundle;
}

@property(readonly) BOOL isPlaying;

+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
+ (void)initialize;
+ (void)__initializeAudioSession;
+ (void)__audioSessionInterruptionDidBegin;
+ (void)__audioSessionInterruptionDidEnd;
+ (id)__stringForAudioSessionError:(long)arg1;
+ (id)__sharedPlayQueue;
+ (void)__clearSharedPlayQueue;
+ (void)__deactivateAudioSession;
+ (void)__nts_indicateEndOfQueuePlayback:(id)arg1;
+ (void)__nts_queuePlayerStatusChanged:(id)arg1;

- (void)dealloc;
- (id)_playerItemForFileNamed:(id)arg1;
- (void)_addFileToQueue:(id)arg1;
- (BOOL)isPlaying;
- (id)initWithDirectory:(id)arg1 bundle:(id)arg2;
- (void)playSoundFilesInSequence:(id)arg1;
- (void)stopAllSounds;

@end
