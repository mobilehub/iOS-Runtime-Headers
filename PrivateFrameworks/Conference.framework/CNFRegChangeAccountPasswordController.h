/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class NSString, <CNFRegChangeAccountPasswordDelegate>;

@interface CNFRegChangeAccountPasswordController : CNFRegAccountWebViewController  {
    <CNFRegChangeAccountPasswordDelegate> *_delegate;
    NSString *_appleID;
}

@property(copy) NSString * appleID;
@property <CNFRegChangeAccountPasswordDelegate> * delegate;


- (id)appleID;
- (void)setAppleID:(id)arg1;
- (void)doHandoffWithStatus:(int)arg1 appleId:(id)arg2 password:(id)arg3;
- (id)initWithAppleID:(id)arg1;
- (id)overrideURLForURL:(id)arg1;
- (id)bagKey;
- (id)logName;
- (void)cancelTapped;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
