/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface MPMediaRemoteState : NSObject  {
    int _notifyLaunchedToken;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _commandHandlerBlock;

    BOOL _canBeNowPlayingApp;
    BOOL _isOverrideApp;
    BOOL _includeVideoRoutes;
    unsigned int _routeDiscoveryCount;
}

@property BOOL isOverrideApp;
@property BOOL includeVideoRoutes;
@property(copy) id commandHandlerBlock;
@property BOOL canBeNowPlayingApp;


- (BOOL)canBeNowPlayingApp;
- (id)commandHandlerBlock;
- (BOOL)isOverrideApp;
- (void)_avSystemControllerServerConnectionDiedNotification:(id)arg1;
- (void)beginRouteDiscovery;
- (void)endRouteDiscovery;
- (void)setIsOverrideApp:(BOOL)arg1;
- (BOOL)includeVideoRoutes;
- (void)setIncludeVideoRoutes:(BOOL)arg1;
- (void)setCommandHandlerBlock:(id)arg1;
- (void)setCanBeNowPlayingApp:(BOOL)arg1;
- (id)init;
- (void)dealloc;

@end
