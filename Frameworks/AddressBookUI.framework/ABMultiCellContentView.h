/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIView, UITableViewCell, ABAbstractPropertyGroup, <ABMultiCellContentViewUpdateDelegate>;

@interface ABMultiCellContentView : ABPersonCellContentView <ABResponderDelegate> {
    UITableViewCell *_cell;
    BOOL _usesCustomPropertyCell;
    UIView *_labelDivider;
    BOOL _isImportant;
    BOOL _isEmphasized;
    BOOL _isHighlighted;
    BOOL _allowsEditing;
    BOOL _isEditing;
    BOOL _shouldIgnoreEndEditing;
    int _property;
    ABAbstractPropertyGroup *_pg;
    id _pgInfo;
    BOOL _needsReload;
    UIView *_touchedView;
    <ABMultiCellContentViewUpdateDelegate> *_updateDelegate;
    int _abCellStyle;
}

@property BOOL shouldIgnoreEndEditing;
@property BOOL usesCustomPropertyCell;
@property UITableViewCell * cell;
@property int abCellStyle;
@property <ABMultiCellContentViewUpdateDelegate> * updateDelegate;
@property(getter=isEmphasized) BOOL emphasized;
@property(getter=isImportant) BOOL important;
@property BOOL allowsEditing;
@property(getter=isEditing) BOOL editing;
@property(retain) id propertyGroupInfo;
@property(readonly) ABAbstractPropertyGroup * propertyGroup;

+ (void)setupTextField:(id)arg1 withStyleProvider:(id)arg2;
+ (struct CGSize { float x1; float x2; })layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize { float x1; float x2; })arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6;
+ (id)reuseIdentifierForPropertyGroup:(id)arg1 info:(id)arg2;
+ (Class)classForProperty:(int)arg1;
+ (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 forPropertyGroup:(id)arg2 info:(id)arg3 styleProvider:(id)arg4 whenEditing:(BOOL)arg5;

- (BOOL)canBecomeFirstResponder;
- (BOOL)isEditing;
- (BOOL)canResignFirstResponder;
- (BOOL)allowsEditing;
- (void)setAllowsEditing:(BOOL)arg1;
- (id)cell;
- (void)reload;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)resignFirstResponder;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setEditing:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)becomeFirstResponder;
- (id)init;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLabelText:(id)arg1;
- (int)abCellStyle;
- (void)clearTextFieldDelegates:(id)arg1;
- (void)entryField:(id)arg1 valueDidChange:(id)arg2 forKey:(id)arg3;
- (id)updateDelegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 property:(int)arg2;
- (void)setPropertyGroupInfo:(id)arg1;
- (void)setKeyboardSettings:(id)arg1 onTextField:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForLabelDivider;
- (id)labelTextColorWhenEditing:(BOOL)arg1;
- (id)displayHighlightedTextColor;
- (id)initCommonWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 property:(int)arg2;
- (id)pickerView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundRectForView:(id)arg1;
- (void)setEmphasized:(BOOL)arg1;
- (void)setImportant:(BOOL)arg1;
- (BOOL)wantsLabelDivider;
- (void)entryFieldDidBeginEditing:(id)arg1;
- (BOOL)entryFieldShouldReturn:(id)arg1;
- (BOOL)tabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (BOOL)canBeginEditingAnytime;
- (void)entryFieldBeginAttemptBecomeFirstResponder:(id)arg1;
- (void)entryFieldEndAttemptBecomeFirstResponder:(id)arg1;
- (BOOL)shouldIgnoreEndEditing;
- (void)setShouldIgnoreEndEditing:(BOOL)arg1;
- (void)setCell:(id)arg1;
- (BOOL)isEmphasized;
- (BOOL)isImportant;
- (void)reloadLabelFromModel;
- (id)newTextFieldWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 tag:(int)arg2 keyboardSettings:(id)arg3 delegate:(id)arg4;
- (BOOL)usesCustomPropertyCell;
- (id)displayTextColor;
- (BOOL)entryFieldShouldBeginEditing:(id)arg1;
- (BOOL)entryFieldShouldEndEditing:(id)arg1;
- (void)entryFieldDidEndEditing:(id)arg1;
- (BOOL)ABTabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (BOOL)canHandleProperty:(int)arg1;
- (void)updateSubviewsForNewStateAnimated:(BOOL)arg1;
- (id)viewForFirstResponder;
- (id)hitTestForTouches:(id)arg1 withEvent:(id)arg2;
- (BOOL)shouldSendTouchesToSuperviewForHitView:(id)arg1;
- (BOOL)isValidValue:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForView:(id)arg1;
- (void)layoutLabel;
- (void)reloadFromModel;
- (void)setUpdateDelegate:(id)arg1;
- (id)propertyGroup;
- (id)propertyGroupInfo;
- (void)setPropertyGroup:(id)arg1 andInfo:(id)arg2;
- (void)setUsesCustomPropertyCell:(BOOL)arg1;
- (void)reloadIfNeeded:(BOOL)arg1 reloadFromModel:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 forPropertyGroup:(id)arg2 info:(id)arg3 styleProvider:(id)arg4 whenEditing:(BOOL)arg5;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })focusRectForView:(id)arg1;
- (void)setAbCellStyle:(int)arg1;

@end
