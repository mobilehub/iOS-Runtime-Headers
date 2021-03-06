/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSString, NSDictionary;

@interface AAURLConfigurationResponse : AAResponse  {
    NSDictionary *_urls;
}

@property(readonly) NSString * accountCreationURL;
@property(readonly) NSString * updateAccountURL;
@property(readonly) NSString * registerURL;
@property(readonly) NSString * validateURL;
@property(readonly) NSString * authenticateURL;
@property(readonly) NSString * initiateValidateEmailURL;
@property(readonly) NSString * completeValidateEmailURL;
@property(readonly) NSString * mobileMeOfferAlertURL;


- (id)initWithDictionary:(id)arg1;
- (void)dealloc;
- (id)completeValidateEmailURL;
- (id)updateAccountURL;
- (id)accountCreationURL;
- (id)mobileMeOfferAlertURL;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)registerURL;
- (id)validateURL;
- (id)authenticateURL;
- (id)initiateValidateEmailURL;

@end
