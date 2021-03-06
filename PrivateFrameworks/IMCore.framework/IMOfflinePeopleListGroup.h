/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableArray;

@interface IMOfflinePeopleListGroup : IMPeopleListGroup  {
    NSMutableArray *_visibleMembers;
    NSMutableArray *_dontShowMembers;
    int _changes;
    BOOL _pendingClear;
}

@property(readonly) BOOL isChanging;


- (int)numberOfItems;
- (id)init;
- (void)dealloc;
- (void)endChanges;
- (void)removeAllItems;
- (void)forgetIgnoredPresences;
- (void)_clearVisibleMembers;
- (BOOL)isChanging;
- (void)dontShowPresence:(id)arg1;
- (id)visibleMembers;
- (void)addPeopleListItem:(id)arg1;
- (void)removePeopleListItem:(id)arg1;
- (void)beginChanges;

@end
