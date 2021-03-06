/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@class NSDictionary;

@interface BookmarkDAVFolder : CoreDAVContainer <CoreDAVModifiedContainer, CoreDAVAddedContainer> {
    NSDictionary *_appleAttributes;
}

@property(readonly) NSDictionary * appleAttributes;
@property BOOL isBookmarkMenuFolder;
@property BOOL isBookmarkBarFolder;
@property BOOL isBookmarkFolder;

+ (id)copyPropertyMappingsForParser;

- (void)dealloc;
- (id)initWithServerID:(id)arg1 containerName:(id)arg2 appleAttributes:(id)arg3;
- (void)setIsBookmarkFolder:(BOOL)arg1;
- (void)setIsBookmarkBarFolder:(BOOL)arg1;
- (void)setIsBookmarkMenuFolder:(BOOL)arg1;
- (id)appleAttributes;
- (BOOL)isBookmarkBarFolder;
- (BOOL)isBookmarkMenuFolder;
- (BOOL)isBookmarkFolder;
- (void)_faultResourceType;
- (id)_appleAttributesString;
- (id)copyMkcolTask;
- (id)copyPropPatchTask;
- (void)applyParsedProperties:(id)arg1;

@end
