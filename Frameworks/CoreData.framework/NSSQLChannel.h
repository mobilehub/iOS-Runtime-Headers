/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLCore, NSManagedObjectContext, NSSQLEntity, NSMutableArray, NSSQLConnection;

@interface NSSQLChannel : NSObject  {
    NSSQLConnection *_connection;
    NSSQLCore *_sqlCore;
    NSSQLEntity *_currentEntity;
    NSMutableArray *_fetchProperties;
    NSManagedObjectContext *_currentMOCon;
}


- (void)finalize;
- (void)dealloc;
- (BOOL)isFetchInProgress;
- (void)_openChannel;
- (void)selectRowsWithCachedStatement:(id)arg1;
- (id)sqlCore;
- (void)endFetch;
- (id)initWithSQLCore:(id)arg1;
- (id)_propertiesToFetch;
- (void)setCurrentEntity:(id)arg1;
- (void)selectRowsWithFetchRequest:(id)arg1;
- (void)selectRowsWithStatement:(id)arg1;
- (BOOL)selectCountWithFetchRequest:(id)arg1;
- (void)endFetchAndRecycleStatement:(BOOL)arg1;
- (void)_closeChannel;
- (void)_setCurrentEntityAndRelationshipWithFetchRequest:(id)arg1;
- (id)connection;
- (id)currentContext;
- (void)setCurrentContext:(id)arg1;

@end
