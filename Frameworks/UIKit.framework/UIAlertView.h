/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIToolbar, UIWindow, UILabel, <UIAlertViewDelegate>, UIView, NSMutableArray, NSString;

@interface UIAlertView : UIView  {
    <UIAlertViewDelegate> *_delegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_bodyTextLabel;
    UILabel *_taglineTextLabel;
    float _startY;
    struct CGPoint { 
        float x; 
        float y; 
    } _center;
    id _context;
    int _cancelButton;
    int _defaultButton;
    int _firstOtherButton;
    UIToolbar *_toolbar;
    UIWindow *_originalWindow;
    UIWindow *_dimWindow;
    int _suspendTag;
    int _dismissButtonIndex;
    float _bodyTextHeight;
    NSMutableArray *_buttons;
    NSMutableArray *_textFields;
    UIView *_keyboard;
    UIView *_table;
    UIView *_dimView;
    UIView *_backgroundImageView;
    struct { 
        unsigned int numberOfRows : 7; 
        unsigned int delegateAlertSheetButtonClicked : 1; 
        unsigned int delegateDidPresentAlertSheet : 1; 
        unsigned int delegateDidDismissAlertSheet : 1; 
        unsigned int hideButtonBar : 1; 
        unsigned int alertStyle : 3; 
        unsigned int dontDimBackground : 1; 
        unsigned int dismissSuspended : 1; 
        unsigned int dontBlockInteraction : 1; 
        unsigned int sheetWasPoppedUp : 1; 
        unsigned int animating : 1; 
        unsigned int hideWhenDoneAnimating : 1; 
        unsigned int layoutWhenDoneAnimating : 1; 
        unsigned int titleMaxLineCount : 2; 
        unsigned int bodyTextMaxLineCount : 3; 
        unsigned int runsModal : 1; 
        unsigned int runningModal : 1; 
        unsigned int addedTextView : 1; 
        unsigned int addedTableShadows : 1; 
        unsigned int showOverSBAlerts : 1; 
        unsigned int showMinTableContent : 1; 
        unsigned int bodyTextTruncated : 1; 
        unsigned int orientation : 3; 
        unsigned int groupsTextFields : 1; 
        unsigned int includesCancel : 1; 
        unsigned int useUndoStyle : 1; 
        unsigned int delegateBodyTextAlignment : 1; 
        unsigned int delegateClickedButtonAtIndex : 1; 
        unsigned int delegateClickedButtonAtIndex2 : 1; 
        unsigned int delegateCancel : 1; 
        unsigned int delegateCancel2 : 1; 
        unsigned int delegateWillPresent : 1; 
        unsigned int delegateWillPresent2 : 1; 
        unsigned int delegateDidPresent : 1; 
        unsigned int delegateDidPresent2 : 1; 
        unsigned int delegateWillDismiss : 1; 
        unsigned int delegateWillDismiss2 : 1; 
        unsigned int delegateDidDismiss : 1; 
        unsigned int delegateDidDismiss2 : 1; 
        unsigned int forceHorizontalButtonsLayout : 1; 
        unsigned int suppressKeyboardOnPopup : 1; 
        unsigned int keyboardShowing : 1; 
        unsigned int dontCallDismissDelegate : 1; 
        unsigned int useAutomaticKB : 1; 
        unsigned int manualKeyboardVisible : 1; 
        unsigned int rotatingManualKeybaord : 1; 
        unsigned int shouldHandleFirstKeyUpEvent : 1; 
        unsigned int forceKeyboardUse : 1; 
        unsigned int cancelWhenDoneAnimating : 1; 
    } _modalViewFlags;
}

@property id delegate;
@property(copy) NSString * title;
@property(copy) NSString * message;
@property(readonly) int numberOfButtons;
@property int cancelButtonIndex;
@property(readonly) int firstOtherButtonIndex;
@property(getter=isVisible,readonly) BOOL visible;

+ (id)_alertWindow;
+ (void)applyTransformToAllAlerts:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
+ (id)_popupAlertBackground:(BOOL)arg1;
+ (struct CGSize { float x1; float x2; })minimumSize;
+ (void)_initializeSafeCategory;

- (BOOL)isVisible;
- (void)dismissAnimated:(BOOL)arg1;
- (BOOL)_needsKeyboard;
- (void)_cancelAnimated:(BOOL)arg1;
- (void)_layoutPopupAlertWithOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_willRotateKeyboard;
- (BOOL)groupsTextFields;
- (int)textFieldCount;
- (void)setKeyboardShowsOnPopup:(BOOL)arg1;
- (void)_alertSheetTextFieldDidEndEditing:(id)arg1;
- (void)_alertSheetTextFieldDidStartEditing:(id)arg1;
- (void)_updateKeyboardStateForPreviousResponder:(id)arg1;
- (void)_setupKBWatcher;
- (void)_cleanupKBWatcher;
- (void)setShowsOverSpringBoardAlerts:(BOOL)arg1;
- (void)_keyboardHiddingAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_showManualKBIfNecessary;
- (void)_showKeyboard:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_performPopup:(BOOL)arg1 animationType:(int)arg2;
- (void)_performPopup:(BOOL)arg1;
- (void)_growAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_bubbleAnimationShrinkDidStop:(id)arg1 finished:(id)arg2;
- (void)_bubbleAnimationNormalDidStop:(id)arg1 finished:(id)arg2;
- (void)_jiggleStage1AnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_jiggleStage2AnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_jiggleStage3AnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_jiggleStage4AnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_jiggleStage5AnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_jiggleStage6AnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_performPopoutAnimationAnimated:(BOOL)arg1;
- (void)_repopupNoAnimation;
- (BOOL)_canShowAlerts;
- (void)_updateFrameForDisplay;
- (id)bodyTextLabel;
- (id)taglineTextLabel;
- (void)popupAlertAnimated:(BOOL)arg1 animationType:(int)arg2 atOffset:(float)arg3;
- (void)popupAlertAnimated:(BOOL)arg1 animationType:(int)arg2;
- (void)_presentSheetFromView:(id)arg1 above:(BOOL)arg2;
- (void)presentSheetFromBehindView:(id)arg1;
- (void)presentSheetToAboveView:(id)arg1;
- (void)_presentSheetStartingFromYCoordinate:(double)arg1;
- (int)alertSheetStyle;
- (void)setForceHorizontalButtonsLayout:(BOOL)arg1;
- (BOOL)forceHorizontalButtonsLayout;
- (void)presentSheetFromButtonBar:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)_createSubtitleLabelIfNeeded;
- (void)_setupTitleStyle;
- (void)setSubtitle:(id)arg1;
- (id)bodyText;
- (int)titleMaxLineCount;
- (int)bodyMaxLineCount;
- (id)textField;
- (void)_alertSheetTextFieldReturn:(id)arg1;
- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2 buttonClass:(Class)arg3;
- (id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2;
- (BOOL)showsOverSpringBoardAlerts;
- (BOOL)_isAnimating;
- (void)_repopup;
- (BOOL)_dimsBackground;
- (void)_temporarilyHideAnimated:(BOOL)arg1;
- (void)_layoutIfNeeded;
- (void)popupAlertAnimated:(BOOL)arg1 atOffset:(float)arg2;
- (void)presentSheetFromAboveView:(id)arg1;
- (void)presentSheetInView:(id)arg1;
- (void)_slideSheetOut:(BOOL)arg1;
- (void)dismiss;
- (struct CGSize { float x1; float x2; })backgroundSize;
- (float)_bottomVerticalInset;
- (void)_alertSheetAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)setAlertSheetStyle:(int)arg1;
- (BOOL)dimsBackground;
- (int)suspendTag;
- (void)setBlocksInteraction:(BOOL)arg1;
- (BOOL)blocksInteraction;
- (BOOL)runsModal;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRect;
- (float)_buttonHeight;
- (void)_truncateViewHeight:(id)arg1 toFitInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withMinimumHeight:(float)arg3;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6;
- (id)buttonTitleAtIndex:(int)arg1;
- (void)setDefaultButtonIndex:(int)arg1;
- (void)_setFirstOtherButtonIndex:(int)arg1;
- (int)firstOtherButtonIndex;
- (id)_dimView;
- (void)setGroupsTextFields:(BOOL)arg1;
- (BOOL)requiresPortraitOrientation;
- (int)_currentOrientation;
- (void)_setAlertSheetStyleFromButtonBar:(id)arg1;
- (id)buttons;
- (void)_createTitleLabelIfNeeded;
- (void)_createBodyTextLabelIfNeeded;
- (void)_createTaglineTextLabelIfNeeded;
- (void)setTaglineText:(id)arg1;
- (void)setBodyTextMaxLineCount:(int)arg1;
- (id)addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (void)_setTextFieldsHidden:(BOOL)arg1;
- (id)textFieldAtIndex:(int)arg1;
- (void)setDefaultButton:(id)arg1;
- (id)defaultButton;
- (void)setDestructiveButton:(id)arg1;
- (id)destructiveButton;
- (id)_addButtonWithTitle:(id)arg1;
- (int)buttonCount;
- (void)setContext:(id)arg1;
- (void)_buttonClicked:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_cleanupAfterPopupAnimation;
- (void)setTableShouldShowMinimumContent:(BOOL)arg1;
- (BOOL)tableShouldShowMinimumContent;
- (BOOL)_manualKeyboardIsVisible;
- (BOOL)_shouldOrderInAutomaticKeyboard;
- (void)_popoutAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_removeAlertWindowOrShowAnOldAlert;
- (void)_rotatingAnimationDidStop:(id)arg1;
- (void)layoutAnimated:(BOOL)arg1;
- (BOOL)isBodyTextTruncated;
- (void)_adjustLabelFontSizes;
- (float)_titleVerticalTopInset;
- (float)_titleVerticalBottomInset;
- (float)_titleHorizontalInset;
- (void)_appSuspended:(id)arg1;
- (void)setDimsBackground:(BOOL)arg1;
- (void)setSuspendTag:(int)arg1;
- (float)_maxHeight;
- (int)numberOfLinesInTitle;
- (void)_prepareForDisplay;
- (void)replaceAlert:(id)arg1;
- (void)_prepareToBeReplaced;
- (int)defaultButtonIndex;
- (id)message;
- (int)addButtonWithTitle:(id)arg1;
- (id)buttonAtIndex:(int)arg1;
- (id)titleLabel;
- (BOOL)canBecomeFirstResponder;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (void)_keyboardDidHide:(id)arg1;
- (id)tableView;
- (void)setBodyText:(id)arg1;
- (void)popupAlertAnimated:(BOOL)arg1;
- (void)setDimView:(id)arg1;
- (void)setTitleMaxLineCount:(int)arg1;
- (int)numberOfButtons;
- (void)setCancelButtonIndex:(int)arg1;
- (void)_handleKeyEvent:(struct __GSEvent { }*)arg1;
- (void)setNumberOfRows:(int)arg1;
- (void)layout;
- (id)subtitle;
- (void)_keyboardWillShow:(id)arg1;
- (id)table;
- (BOOL)resignFirstResponder;
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5;
- (void)setRunsModal:(BOOL)arg1;
- (id)context;
- (id)keyboard;
- (int)numberOfRows;
- (id)title;
- (void)_addSubview:(id)arg1 positioned:(int)arg2 relativeTo:(id)arg3;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (void)_useUndoStyle:(BOOL)arg1;
- (void)showWithAnimationType:(int)arg1;
- (int)cancelButtonIndex;
- (void)show;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_accessibilitySendAlert;

@end
