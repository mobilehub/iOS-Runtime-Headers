/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSURL, UIImage;

@interface GKLoadImageRequest : GKDataRequest  {
    NSURL *_url;
    UIImage *_image;
}

@property(retain) UIImage * image;
@property(retain) NSURL * url;


- (int)cachePriority;
- (int)cacheType;
- (BOOL)authenticationRequired;
- (id)errorForResponse:(id)arg1;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (id)demarshalResponseData:(id)arg1;
- (id)cacheKey;
- (void)setUrl:(id)arg1;
- (id)request;
- (id)url;
- (id)image;
- (void)dealloc;
- (void)setImage:(id)arg1;
- (id)header;

@end
