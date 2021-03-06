/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <NSObject>, MPAVController, NSDictionary;

@interface MPQueueFeeder : AVQueueFeeder  {
    MPAVController *_avController;
    struct __CFSet { } *_itemsWithReferencesToClear;
    unsigned int _repeatType;
    unsigned int _shuffleType;
    struct __CFDictionary { } *_nextStartTimes;
    id _representedObject;
    BOOL _fullScreenPlaybackQueue;
    BOOL _isSourceChangeInProgress;
    BOOL _deallocating;
}

@property(readonly) Class itemClass;
@property(retain,readonly) NSDictionary * preferredLanguages;
@property(readonly) BOOL trackChangesCanEndPlayback;
@property(readonly) unsigned int realRepeatType;
@property(readonly) unsigned int realShuffleType;
@property BOOL isSourceChangeInProgress;
@property BOOL fullScreenPlaybackQueue;
@property(retain) <NSObject> * representedObject;
@property unsigned int shuffleType;
@property unsigned int repeatType;
@property MPAVController * AVController;

+ (void)restoreAVControllerPlaybackQueue:(id)arg1 fromUnarchiver:(id)arg2 feederClass:(Class)arg3;

- (id)preferredLanguages;
- (void)dealloc;
- (id)itemForIndex:(unsigned int)arg1;
- (void)setRepeatType:(unsigned int)arg1;
- (id)playbackInfoAtIndex:(unsigned int)arg1;
- (void)setNextStartTime:(double)arg1 forIndex:(unsigned int)arg2;
- (id)AVController;
- (void)_fixNextStartTimesByInsertingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_fixNextStartTimesByRemovingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)invalidateQueueCaches;
- (void)shuffleItemsWithAnchor:(unsigned int*)arg1;
- (BOOL)reloadWithDataSource:(id)arg1;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2;
- (void)beginSourceChange;
- (void)commitSourceChangeWithStartQueueIndex:(unsigned int)arg1;
- (id)errorResolverForItem:(id)arg1;
- (BOOL)shouldBeginPlaybackOfItem:(id)arg1 error:(id*)arg2;
- (Class)itemClass;
- (unsigned int)itemTypeForIndex:(unsigned int)arg1;
- (BOOL)trackChangesCanEndPlayback;
- (void)addReferenceToItem:(id)arg1;
- (unsigned int)realRepeatType;
- (unsigned int)realShuffleType;
- (void)contentsDidChangeByInsertingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)contentsDidChangeByRemovingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned int)arg1;
- (BOOL)_canPurgeNextStartTimes;
- (void)restoreAVControllerPlaybackQueue:(id)arg1 fromUnarchiver:(id)arg2;
- (void)archiveAVControllerPlaybackQueue:(id)arg1 toArchiver:(id)arg2;
- (BOOL)isSourceChangeInProgress;
- (void)setIsSourceChangeInProgress:(BOOL)arg1;
- (BOOL)fullScreenPlaybackQueue;
- (void)setFullScreenPlaybackQueue:(BOOL)arg1;
- (unsigned int)shuffleType;
- (void)setShuffleType:(unsigned int)arg1;
- (unsigned int)repeatType;
- (void)setAVController:(id)arg1;
- (void)clearReferencesToItem:(id)arg1;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)copyRawItemAtIndex:(unsigned int)arg1;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;

@end
