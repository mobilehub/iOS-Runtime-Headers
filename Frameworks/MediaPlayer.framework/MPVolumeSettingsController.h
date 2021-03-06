/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface MPVolumeSettingsController : UITwoSidedAlertController <UITwoSidedAlertControllerDelegate> {
    NSString *_audioCategory;
}


- (void)twoSidedAlertControllerDidDismiss:(id)arg1;
- (id)createFrontAlert;
- (id)createBackAlert;
- (void)dealloc;
- (id)initWithAudioCategory:(id)arg1;
- (void)audioRoutingPicker:(id)arg1 didSelectRouteAtIndex:(int)arg2;

@end
