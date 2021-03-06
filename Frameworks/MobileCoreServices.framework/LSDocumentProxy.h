/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class NSString;

@interface LSDocumentProxy : LSResourceProxy  {
    NSString *_name;
    NSString *_typeIdentifier;
    NSString *_MIMEType;
}

@property(readonly) NSString * MIMEType;
@property(readonly) NSString * typeIdentifier;
@property(readonly) NSString * name;

+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3;

- (void)bind;
- (id)initWithName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3;
- (id)typeIdentifier;
- (id)MIMEType;
- (id)name;
- (void)dealloc;
- (struct { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)_iconVariantDefinitions:(int)arg1;

@end
