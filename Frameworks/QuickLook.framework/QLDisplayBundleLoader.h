/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSMutableDictionary;

@interface QLDisplayBundleLoader : NSObject  {
    NSMutableDictionary *_displayBundlesById;
}

+ (id)sharedLoader;

- (id)init;
- (void)_lookForDisplayBundles;
- (Class)loadDisplayBundle:(id)arg1;
- (Class)displayBundleClassForDocumentType:(id)arg1;
- (id)copyDisplayBundleWithPreviewItem:(id)arg1 owner:(id)arg2;

@end
