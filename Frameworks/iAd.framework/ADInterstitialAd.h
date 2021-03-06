/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADInterstitialView, <ADInterstitialAdDelegate>;

@interface ADInterstitialAd : NSObject  {
    <ADInterstitialAdDelegate> *_delegate;
    ADInterstitialView *_interstitialView;
    BOOL _presentedInView;
}

@property(getter=isLoaded,readonly) BOOL loaded;
@property(getter=isActionInProgress,readonly) BOOL actionInProgress;
@property BOOL presentedInView;
@property(retain) ADInterstitialView * interstitialView;
@property <ADInterstitialAdDelegate> * delegate;


- (void)setLocalAd:(id)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (BOOL)isLoaded;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)presentInView:(id)arg1;
- (void)presentFromViewController:(id)arg1;
- (void)interstitialView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (BOOL)interstitialViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
- (BOOL)presentedInView;
- (void)setPresentedInView:(BOOL)arg1;
- (id)interstitialView;
- (void)setInterstitialView:(id)arg1;
- (void)interstitialViewDidLoadAd:(id)arg1;
- (void)interstitialViewActionDidFinish:(id)arg1;
- (void)interstitialViewDidUnloadAd:(id)arg1;
- (void)cancelAction;
- (void)setDebuggingDelegate:(id)arg1;
- (BOOL)isActionInProgress;
- (void)setSection:(id)arg1;

@end
