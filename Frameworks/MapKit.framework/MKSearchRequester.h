/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKSearchRequesterDelegate>, GMMRequester;

@interface MKSearchRequester : NSObject <PBRequesterDelegate> {
    <MKSearchRequesterDelegate> *_delegate;
    GMMRequester *_requester;
    int _defaultSearchResultType;
}

@property id delegate;


- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)requesterDidFinish:(id)arg1;
- (id)initWithSearchDelegate:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (void)startWithRequest:(id)arg1 defaultSearchResultType:(int)arg2;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;

@end
