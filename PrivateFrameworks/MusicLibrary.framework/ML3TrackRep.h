/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MLChapterTOC;

@interface ML3TrackRep : MLTrack  {
    MLChapterTOC *_chapterTOC;
}


- (unsigned long)year;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)title;
- (BOOL)isHidden;
- (void)dealloc;
- (id)chapterTOC;
- (void)markNominalAmountHasBeenPlayed;
- (void)incrementSkipCount;
- (BOOL)isRental;
- (unsigned int)playCount;
- (unsigned int)skipCount;
- (void)gaplessHeuristicInfo:(unsigned int*)arg1 duration:(unsigned int*)arg2 lastPacketsResync:(unsigned int*)arg3 encodingDelay:(unsigned int*)arg4 encodingDrain:(unsigned int*)arg5;
- (id)podcastURL;
- (BOOL)isITunesU;
- (double)lastPlayedDate;
- (id)lyrics;
- (id)albumArtist;
- (id)genre;
- (unsigned long)discNumber;
- (id)composer;
- (id)artist;
- (id)grouping;
- (id)comments;
- (unsigned long long)globalID;
- (id)sortTitle;
- (id)sortComposer;
- (id)sortSeriesDisplayName;
- (id)podcastName;
- (id)podcastDirectStoreURL;
- (unsigned long long)storeItemAdamID;
- (unsigned long long)storePlaylistAdamID;
- (id)seriesDisplayName;
- (id)seasonDisplayName;
- (BOOL)isAudibleAudioBook;
- (unsigned long)trackIndexInAlbum;
- (unsigned long long)accountID;
- (id)eqPresetName;
- (BOOL)videoHasAlternateAudio;
- (BOOL)videoHasSubtitles;
- (unsigned int)videoAudioTrackID;
- (void)setVideoAudioTrackID:(unsigned int)arg1;
- (void)setVideoSubtitleTrackID:(unsigned int)arg1;
- (BOOL)markAsDeleted;
- (BOOL)isCurrentlyRestricted;
- (double)lastPlayedBookmarkTimeInSeconds;
- (int)totalTimeInMS;
- (unsigned long)ratingLevel;
- (unsigned long long)persistentUID;
- (id)initWithML3Entity:(id)arg1;
- (void)updateLastPlayedBookmarkTimeInSeconds:(double)arg1;
- (id)initWithTrackContext:(void*)arg1;
- (BOOL)isEqualToTrack:(id)arg1;
- (unsigned long long)albumPID;
- (unsigned long long)artistPID;
- (id)infoShortDescription;
- (id)infoDescription;
- (id)sortArtist;
- (id)sortAlbum;
- (id)sortAlbumArtist;
- (void)setLyrics:(id)arg1;
- (unsigned long)bpm;
- (unsigned int)seasonNumber;
- (unsigned int)episodeNumber;
- (unsigned long)audibleDRMGroupID;
- (unsigned long)numberOfTracksInAlbum;
- (unsigned long)numberOfDiscs;
- (id)contentRatingInfo;
- (id)movieInfo;
- (BOOL)isCompilationTrack;
- (BOOL)isExcludedFromShuffle;
- (BOOL)isOTAPurchasedContent;
- (BOOL)hasLyrics;
- (BOOL)hasVideoData;
- (BOOL)isDemoRental;
- (double)demoRentalDuration;
- (double)demoRentalPlaybackDuration;
- (double)demoRentalPlaybackStartTime;
- (double)demoRentalStartTime;
- (float)volumeAdjustment;
- (float)volumeNormalization;
- (int)durationInMS;
- (int)startTimeInMS;
- (int)customStopTimeInMS;
- (BOOL)hasChapterData;
- (unsigned int)videoSubtitleTrackID;
- (BOOL)hasNominalAmountBeenPlayed;
- (BOOL)shouldBookmarkLastPlayedTime;
- (BOOL)hasLastPlayedBookmarkTime;
- (long long)imageDBRecordID:(int)arg1;
- (id)filePath;
- (unsigned long long)fileSize;
- (id)album;
- (unsigned long)mediaType;
- (double)releaseDate;
- (void)setRating:(BOOL)arg1;
- (BOOL)rating;
- (id)copyright;

@end
