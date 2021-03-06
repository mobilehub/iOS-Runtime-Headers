/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSError, NSMutableArray, MPMovieView, MPMoviePlayerController, MPVideoViewController, NSMutableDictionary, NSArray;

@interface MPMoviePlayerControllerNew : NSObject <MPMediaPlayback> {
    MPMoviePlayerController *_moviePlayer;
    MPVideoViewController *_videoViewController;
    MPMovieView *_movieView;
    NSArray *_movies;
    NSMutableArray *_queuedThumbnailRequests;
    float _currentPlaybackRate;
    unsigned int _stateBeforeSettingPlaybackTime;
    int _movieSourceType;
    int _controlStyle;
    int _repeatMode;
    BOOL _shouldAutoplay;
    BOOL _useApplicationAudioSession;
    BOOL _setUseApplicationAudioSessionWhenPlaybackEnds;
    BOOL _preparedQueue;
    BOOL _didAppear;
    BOOL _ignorePlaybackStateChanges;
    BOOL _playWhenSourceTypeIsDetermined;
    BOOL _prepareWhenSourceTypeIsDetermined;
    BOOL _isChangingMoviePath;
    BOOL _wasPlayingBeforeSuspended;
    BOOL _canPostDidFinishNotificationOnItemChange;
    BOOL _didPostDidFinishNotification;
    BOOL _shouldRestartPlaybackFromBeginning;
    NSError *_playbackError;
    double _initialPlaybackTime;
    double _endPlaybackTime;
    NSMutableDictionary *_timedMetadataForUniqueKey;
    BOOL _isActive;
    BOOL _isResigningActive;
    BOOL _didResignActive;
    BOOL _canShowControlsOverlayBeforeResignedActive;
    double _timeWhenResignedActive;
    unsigned int _movieIndexWhenResignedActive;
}

@property float currentPlaybackRate;
@property double currentPlaybackTime;
@property(readonly) BOOL isPreparedToPlay;


- (double)duration;
- (id)view;
- (id)backgroundView;
- (void)setBackgroundColor:(id)arg1;
- (id)init;
- (void)dealloc;
- (double)endPlaybackTime;
- (int)movieMediaTypes;
- (void)setMovieSourceType:(int)arg1;
- (void)setEndPlaybackTime:(double)arg1;
- (void)_videoViewScaleModeDidChangeNotification:(id)arg1;
- (void)videoControllerWillEnterFullscreen:(id)arg1;
- (void)videoControllerWillExitFullscreen:(id)arg1;
- (void)videoControllerDidExitFullscreen:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (id)_videoViewController;
- (void)_timeDidJumpNotification:(id)arg1;
- (BOOL)isFullscreen;
- (void)setUseApplicationAudioSession:(BOOL)arg1;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (double)playableDuration;
- (id)accessLog;
- (BOOL)videoController:(id)arg1 tappedButtonPart:(unsigned int)arg2;
- (void)_willTerminateNotification:(id)arg1;
- (void)_itemReadyToPlayNotification:(id)arg1;
- (void)_timedMetadataAvailableNotification:(id)arg1;
- (void)_videoViewPathWillChangeNotification:(id)arg1;
- (void)_ensureActive;
- (void)_resignActive;
- (id)_videoView;
- (BOOL)shouldAutoplay;
- (float)currentPlaybackRate;
- (void)setContentURL:(id)arg1;
- (int)loadState;
- (void)setControlStyle:(int)arg1;
- (int)controlStyle;
- (void)setShouldAutoplay:(BOOL)arg1;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setAllowsAirPlay:(BOOL)arg1;
- (BOOL)allowsAirPlay;
- (BOOL)isPreparedToPlay;
- (void)prepareToPlay;
- (void)setCurrentPlaybackTime:(double)arg1;
- (void)setCurrentPlaybackRate:(float)arg1;
- (int)movieSourceType;
- (void)movieView:(id)arg1 willMoveToWindow:(id)arg2;
- (void)movieViewDidMoveToWindow:(id)arg1;
- (BOOL)videoControllerShouldAutohide:(id)arg1;
- (void)videoControllerDidEnterFullscreen:(id)arg1;
- (void)viewControllerRequestsExit:(id)arg1 reason:(int)arg2;
- (void)_itemPlaybackErrorNotification:(id)arg1;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)_timedMetadataImageAvailableNotification:(id)arg1;
- (void)_moviePlayerWillBecomeActiveNotification:(id)arg1;
- (void)_moviePlayerDidBecomeActiveNotification:(id)arg1;
- (void)_movieTypeAvailableNotification:(id)arg1;
- (void)_movieSourceTypeAvailableNotification:(id)arg1;
- (void)_movieDurationAvailableNotification:(id)arg1;
- (void)_movieNaturalSizeAvailableNotification:(id)arg1;
- (void)_willResignActiveNotification:(id)arg1;
- (void)_didBecomeActiveNotification:(id)arg1;
- (void)_windowOrientationChangingNotification:(id)arg1;
- (BOOL)_shouldContinuePlaybackInBackground;
- (void)_setMovies:(id)arg1;
- (void)_setNowPlayingMovie:(id)arg1;
- (id)_nowPlayingMovie;
- (void)_prepareToPlayWithStartIndex:(unsigned int)arg1;
- (void)_setUseApplicationAudioSession:(BOOL)arg1;
- (void)_pausePlaybackForSuspension;
- (void)_clearPlaybackStateAfterTimeJumpIfNecessary;
- (void)_postNotificationName:(id)arg1 object:(id)arg2;
- (void)_postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)_postDidFinishNotificationWithUserInfo:(id)arg1;
- (void)_restartPlaybackFromBeginning;
- (BOOL)_canContinuePlayingWhenLocked;
- (id)thumbnailImageAtTime:(double)arg1 timeOption:(int)arg2;
- (void)requestThumbnailImagesAtTimes:(id)arg1 timeOption:(int)arg2;
- (void)cancelAllThumbnailImageRequests;
- (void)_itemDidGenerateCGImage:(id)arg1;
- (id)timedMetadata;
- (id)timedMetadataForKey:(id)arg1;
- (id)errorLog;
- (id)_movies;
- (id)contentURL;
- (void)setScalingMode:(int)arg1;
- (int)scalingMode;
- (void)setMovieControlMode:(int)arg1;
- (void)setInitialPlaybackTime:(double)arg1;
- (double)initialPlaybackTime;
- (void)_setMoviePlayer:(id)arg1;
- (void)_simpleRemoteNotification:(id)arg1;
- (struct CGSize { float x1; float x2; })naturalSize;
- (void)stop;
- (void)pause;
- (void)setFullscreen:(BOOL)arg1;
- (void)play;
- (int)playbackState;
- (void)setRepeatMode:(int)arg1;
- (void)skipToPreviousItem;
- (void)skipToBeginning;
- (void)endSeeking;
- (int)repeatMode;
- (double)currentPlaybackTime;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)skipToNextItem;

@end
