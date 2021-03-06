/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SURemoteNotificationController : NSObject  {
}

@property(readonly) int enabledNotificationTypes;

+ (id)sharedInstance;

- (id)init;
- (int)enabledNotificationTypes;
- (void)handleRegistrationFailureWithError:(id)arg1;
- (void)handleRegistrationSuccessWithToken:(id)arg1;
- (void)handleNotificationDictionary:(id)arg1;

@end
