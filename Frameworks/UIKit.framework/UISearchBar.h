/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UILabel, UIButton, UITextField, <UISearchBarDelegate>, NSString, UIView, UIColor, NSArray;

@interface UISearchBar : UIView  {
    UITextField *_searchField;
    UILabel *_promptLabel;
    UIButton *_cancelButton;
    <UISearchBarDelegate> *_delegate;
    id _controller;
    UIColor *_tintColor;
    UIImageView *_separator;
    NSString *_cancelButtonText;
    NSArray *_scopes;
    int _selectedScope;
    UIView *_background;
    UIView *_scopeBar;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInset;
    id _appearance;
    struct { 
        unsigned int barStyle : 3; 
        unsigned int showsBookmarkButton : 1; 
        unsigned int showsCancelButton : 1; 
        unsigned int isTranslucent : 1; 
        unsigned int autoDisableCancelButton : 1; 
        unsigned int showsScopeBar : 1; 
        unsigned int hideBackground : 1; 
        unsigned int combinesLandscapeBars : 1; 
        unsigned int usesEmbeddedAppearance : 1; 
        unsigned int showsSearchResultsButton : 1; 
        unsigned int searchResultsButtonSelected : 1; 
        unsigned int pretendsIsInBar : 1; 
        unsigned int disabled : 1; 
    } _searchBarFlags;
}

@property int barStyle;
@property(copy) NSString * text;
@property(copy) NSString * prompt;
@property(copy) NSString * placeholder;
@property BOOL showsBookmarkButton;
@property BOOL showsCancelButton;
@property BOOL showsSearchResultsButton;
@property(getter=isSearchResultsButtonSelected) BOOL searchResultsButtonSelected;
@property(getter=isTranslucent) BOOL translucent;
@property int autocapitalizationType;
@property int autocorrectionType;
@property int keyboardType;
@property(copy) NSArray * scopeButtonTitles;
@property int selectedScopeButtonIndex;
@property BOOL showsScopeBar;
@property(retain) UIColor * tintColor;
@property <UISearchBarDelegate> * delegate;

+ (void)_initializeSafeCategory;

- (BOOL)isTranslucent;
- (void)setAutocorrectionType:(int)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)_setAutoDisableCancelButton:(BOOL)arg1;
- (BOOL)_isInBar;
- (void)_takeAppearanceFromNavigationBarAppearance:(id)arg1;
- (id)controller;
- (void)setController:(id)arg1;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (int)selectedScopeButtonIndex;
- (id)scopeButtonTitles;
- (BOOL)showsCancelButton;
- (id)searchField;
- (void)_updateRightView;
- (void)setShowsSearchResultsButton:(BOOL)arg1;
- (BOOL)showsSearchResultsButton;
- (void)setSearchResultsButtonSelected:(BOOL)arg1;
- (BOOL)isSearchResultsButtonSelected;
- (void)setShowsBookmarkButton:(BOOL)arg1;
- (BOOL)showsBookmarkButton;
- (void)setShowsCancelButton:(BOOL)arg1;
- (void)_hideShowAnimationDidFinish;
- (void)setShowsCancelButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setShowsCancelButton:(BOOL)arg1;
- (BOOL)drawsBackground;
- (void)setCombinesLandscapeBars:(BOOL)arg1;
- (BOOL)combinesLandscapeBars;
- (void)setCancelButton:(id)arg1;
- (id)cancelButton;
- (void)_setShowsSeparator:(BOOL)arg1;
- (void)_setUpScopeBar;
- (void)setScopeButtonTitles:(id)arg1;
- (void)setSelectedScopeButtonIndex:(int)arg1;
- (void)setShowsScopeBar:(BOOL)arg1;
- (BOOL)showsScopeBar;
- (void)_scopeChanged:(id)arg1;
- (id)_scopeBar;
- (BOOL)pretendsIsInBar;
- (void)setPretendsIsInBar:(BOOL)arg1;
- (void)_updateSearchFieldArt;
- (void)_setupSearchField;
- (void)_setupPromptLabel;
- (void)_setCancelButtonText:(id)arg1;
- (void)_setCancelButtonBackgroundImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setupCancelButton;
- (void)_destroyCancelButton;
- (void)_cancelButtonPressed;
- (void)_bookmarkButtonPressed;
- (void)_resultsListButtonPressed;
- (void)_searchFieldBeginEditing;
- (void)_searchFieldEndEditing;
- (void)_searchFieldReturnPressed;
- (void)_searchFieldEditingChanged;
- (BOOL)canResignFirstResponder;
- (BOOL)_isEnabled;
- (void)_setEnabled:(BOOL)arg1;
- (void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (id)backgroundImage;
- (BOOL)usesEmbeddedAppearance;
- (void)setUsesEmbeddedAppearance:(BOOL)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setKeyboardType:(int)arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setTintColor:(id)arg1;
- (BOOL)isFirstResponder;
- (void)setAutocapitalizationType:(int)arg1;
- (int)autocorrectionType;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (int)autocapitalizationType;
- (int)keyboardType;
- (BOOL)resignFirstResponder;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)prompt;
- (void)_updateOpacity;
- (void)setTranslucent:(BOOL)arg1;
- (int)barStyle;
- (void)setBarStyle:(int)arg1;
- (id)tintColor;
- (void)setPrompt:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)becomeFirstResponder;
- (id)text;
- (void)encodeWithCoder:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)movedToSuperview:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
