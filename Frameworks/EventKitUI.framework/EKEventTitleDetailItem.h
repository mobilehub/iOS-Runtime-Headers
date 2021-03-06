/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEventInfoHeaderView, UIColor, UITableViewCell;

@interface EKEventTitleDetailItem : EKEventDetailItem  {
    UITableViewCell *_cell;
    EKEventInfoHeaderView *_header;
    UIColor *_color;
    BOOL _showDot;
}


- (void)reset;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (id)cellForSubitemAtIndex:(int)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 forWidth:(float)arg2;

@end
