/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class UITextField;

@interface MFComposeSubjectView : MFComposeHeaderView <UITextFieldDelegate> {
    UITextField *_textField;
    unsigned int _delegateRespondsToTextChange : 1;
}


- (BOOL)endEditing:(BOOL)arg1;
- (void)setAcceptsEmoji:(BOOL)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (void)textChanged:(id)arg1;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (BOOL)becomeFirstResponder;
- (id)text;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)_canBecomeFirstResponder;

@end
