/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray;

@interface GKGetGameMetadataRequest : GKDataRequest  {
    NSArray *_gamesPlayed;
}

@property(retain) NSArray * gamesPlayed;


- (id)gamesPlayed;
- (int)cachePriority;
- (int)cacheType;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (void)setGamesPlayed:(id)arg1;
- (id)cacheKey;
- (id)key;
- (id)request;
- (void)dealloc;

@end
