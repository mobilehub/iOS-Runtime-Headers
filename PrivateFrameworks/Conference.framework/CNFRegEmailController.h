/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class NSArray, NSTimer, NSString, PSSpecifier;

@interface CNFRegEmailController : CNFRegFirstRunController  {
    PSSpecifier *_emailSpecifier;
    PSSpecifier *_actionGroupSpecifier;
    PSSpecifier *_currentActionSpecifier;
    NSArray *_checkMailSpecifiers;
    NSTimer *_validationTimeoutTimer;
    NSString *_pendingAlias;
}

@property(copy) NSString * pendingAlias;


- (void)_updateUI;
- (void)_failValidationWithError:(id)arg1;
- (void)_finishValidation;
- (void)willResignActive;
- (void)_setupEventHandlers;
- (void)willBecomeActive;
- (id)_rightButtonItem;
- (void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (id)pendingAlias;
- (id)specifiers;
- (BOOL)showActionSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)setEmailEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_showCheckMailButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)nextTapped;
- (void)_returnKeyWasPressed;
- (void)checkMailTapped:(id)arg1;
- (void)_handleValidationModeCancelled;
- (void)_updateControllerState;
- (id)emailTextField;
- (BOOL)emailFieldIsEmpty;
- (void)emailFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (id)pendingAliasForSpecifier:(id)arg1;
- (void)setPendingAlias:(id)arg1 forSpecifier:(id)arg2;
- (double)timeoutDuration;
- (void)stopValidationTimeoutTimer;
- (void)startValidationTimeoutTimer;
- (void)validationTimeout:(id)arg1;
- (void)_buildEmailSpecifierCache:(id)arg1;
- (void)_buildActionGroupSpecifierCache:(id)arg1;
- (void)_buildCheckMailSpecifierCache:(id)arg1;
- (void)_buildSpecifierCache:(id)arg1;
- (void)setPendingAlias:(id)arg1;
- (id)logName;
- (id)bundle;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)init;
- (void)dealloc;

@end
