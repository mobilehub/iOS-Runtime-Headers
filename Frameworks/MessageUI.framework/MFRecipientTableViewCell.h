/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFComposeRecipient, MFRecipientTableViewCellView;

@interface MFRecipientTableViewCell : UITableViewCell  {
    MFRecipientTableViewCellView *_recipientView;
    MFComposeRecipient *_recipient;
}

+ (float)height;
+ (id)identifier;
+ (id)cellForRecipient:(id)arg1;
+ (void)_initializeSafeCategory;

- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (id)recipient;
- (void)setRecipient:(id)arg1;
- (id)accessibilityLabel;

@end
