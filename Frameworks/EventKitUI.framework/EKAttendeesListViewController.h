/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEvent, EKAttendeesListView;

@interface EKAttendeesListViewController : UIViewController  {
    EKEvent *_event;
    EKAttendeesListView *_contentView;
}


- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (id)title;
- (void)dealloc;
- (void)attendeeSelected:(id)arg1;
- (id)initWithEvent:(id)arg1;

@end
