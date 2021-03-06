/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, <SSAuthorizationRequestDelegate>;

@interface SSAuthorizationRequest : SSRequest  {
    NSNumber *_accountIdentifier;
    id _token;
}

@property(readonly) NSNumber * accountIdentifier;
@property(readonly) id authorizationToken;
@property <SSAuthorizationRequestDelegate> * delegate;


- (id)authorizationToken;
- (id)init;
- (void)dealloc;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithAuthorizationToken:(id)arg1 accountIdentifier:(id)arg2;
- (BOOL)handleFinishResponse:(id)arg1 error:(id*)arg2;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)accountIdentifier;

@end
