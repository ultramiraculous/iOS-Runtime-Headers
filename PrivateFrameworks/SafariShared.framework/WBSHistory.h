/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistory : NSObject <WBSHistoryStoreDelegate> {
    NSMutableDictionary *_entriesByURLString;
    NSObject<OS_dispatch_queue> *_entriesByURLStringAccessQueue;
    BOOL _hasStartedLoadingHistory;
    double _historyAgeLimit;
    WBSHistorySQLiteStore *_historyStore;
    NSCountedSet *_stringsForUserTypedDomainExpansion;
    NSObject<OS_dispatch_queue> *_waitUntilHistoryHasLoadedQueue;
}

@property (nonatomic, readonly) NSArray *allItems;
@property (nonatomic) unsigned int cachedNumberOfDevicesInSyncCircle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSData *fetchThrottlerData;
@property (nonatomic, readonly) BOOL hasAnyHistoryItems;
@property (readonly) unsigned int hash;
@property (nonatomic) double historyAgeLimit;
@property (nonatomic, readonly) unsigned int numberOfHistoryItems;
@property (nonatomic, readonly) unsigned int numberOfHistoryItemsOnHistoryQueue;
@property (nonatomic) BOOL pushNotificationsAreInitialized;
@property (nonatomic, copy) NSData *pushThrottlerData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSData *syncCircleSizeRetrievalThrottlerData;

+ (void)clearExistingSharedHistory;
+ (id)existingSharedHistory;
+ (id)historyDatabaseURL;
+ (id)historyDatabaseWriteAheadLogURL;
+ (id)historyPropertyListURL;

- (void).cxx_destruct;
- (void)_addItem:(id)arg1 addToStringsForUserTypedDomainExpansions:(BOOL)arg2;
- (void)_addItemToStringsForUserTypedDomainExpansion:(id)arg1;
- (void)_addVisitedLinksForItemsIfNeeded:(id)arg1;
- (void)_clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_createHistoryStore;
- (void)_dispatchHistoryCleared:(id)arg1;
- (void)_dispatchHistoryItemDidChange:(id)arg1;
- (void)_dispatchHistoryItemWillChange:(id)arg1;
- (void)_dispatchHistoryItemsAdded:(id)arg1;
- (void)_dispatchHistoryItemsLoaded:(id)arg1;
- (void)_dispatchHistoryItemsRemoved:(id)arg1;
- (void)_dispatchHistoryItemsRemovedDuringLoading:(id)arg1;
- (void)_dispatchHistoryLoaded;
- (void)_dispatchHistoryVisitAdded:(id)arg1;
- (Class)_historyItemClass;
- (BOOL)_isStringForUserTypedDomainExpansionInHistory:(id)arg1;
- (void)_loadHistory;
- (void)_loadHistoryAsynchronouslyIfNeeded;
- (void)_removeAllVisitedLinks;
- (void)_removeHistoryItemsInResponseToUserAction:(id)arg1;
- (id)_removeItemForURLString:(id)arg1;
- (void)_removeItemFromStringsForUserTypedDomainExpansion:(id)arg1;
- (void)_removeItemsInResponseToUserAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_sendNotification:(id)arg1 withItems:(id)arg2;
- (void)_waitUntilHistoryHasLoadedMainThread;
- (void)addAutocompleteTrigger:(id)arg1 forURLString:(id)arg2;
- (id)allItems;
- (unsigned int)cachedNumberOfDevicesInSyncCircle;
- (BOOL)canRecordRedirectFromVisit:(id)arg1 to:(id)arg2;
- (void)clearHistory;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2;
- (void)clearHistoryWithCompletionHandler:(id /* block */)arg1;
- (void)close;
- (void)dealloc;
- (void)enumerateItemsUsingBlock:(id /* block */)arg1;
- (id)fetchThrottlerData;
- (void)getAllTombstonesWithCompletion:(id /* block */)arg1;
- (void)getServerChangeTokenDataWithCompletion:(id /* block */)arg1;
- (void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(id /* block */)arg2;
- (void)getVisitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)hasAnyHistoryItems;
- (double)historyAgeLimit;
- (void)historyLoader:(id)arg1 didLoadItems:(id)arg2 discardedItems:(id)arg3 stringsForUserTypeDomainExpansion:(id)arg4;
- (void)historyLoaderDidFinishLoading:(id)arg1;
- (id)historyStore;
- (void)historyStore:(id)arg1 didPrepareToDeleteWithDeletionPlan:(id)arg2;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1;
- (BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;
- (BOOL)historyStoreShouldRemoveItemsWithURLStringsThatAreNotValidURLs:(id)arg1;
- (id)init;
- (id)itemForURL:(id)arg1;
- (id)itemForURLString:(id)arg1;
- (id)itemRedirectedFrom:(id)arg1 to:(id)arg2 origin:(int)arg3 date:(id)arg4;
- (id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 timeOfVisit:(double)arg3 wasHTTPNonGet:(BOOL)arg4 wasFailure:(BOOL)arg5 increaseVisitCount:(BOOL)arg6 origin:(int)arg7;
- (id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 wasHTTPNonGet:(BOOL)arg3 wasFailure:(BOOL)arg4 increaseVisitCount:(BOOL)arg5;
- (id)lastSeenDateForCloudClientVersion:(unsigned int)arg1;
- (unsigned int)numberOfHistoryItems;
- (unsigned int)numberOfHistoryItemsOnHistoryQueue;
- (void)performBlockAfterHistoryHasLoaded:(id /* block */)arg1;
- (void)performMaintenance;
- (void)performMaintenance:(id /* block */)arg1;
- (void)pruneTombstonesWithEndDatePriorToDate:(id)arg1;
- (BOOL)pushNotificationsAreInitialized;
- (id)pushThrottlerData;
- (void)removeItemsInResponseToUserAction:(id)arg1;
- (void)replayAndAddTombstone:(id)arg1;
- (void)resetCloudHistoryDataWithCompletionHandler:(id /* block */)arg1;
- (void)savePendingChangesBeforeTerminationWithCompletionHandler:(id /* block */)arg1;
- (void)setCachedNumberOfDevicesInSyncCircle:(unsigned int)arg1;
- (void)setFetchThrottlerData:(id)arg1;
- (void)setHistoryAgeLimit:(double)arg1;
- (void)setLastSeenDate:(id)arg1 forCloudClientVersion:(unsigned int)arg2;
- (void)setPushNotificationsAreInitialized:(BOOL)arg1;
- (void)setPushThrottlerData:(id)arg1;
- (void)setServerChangeTokenData:(id)arg1;
- (void)setSyncCircleSizeRetrievalThrottlerData:(id)arg1;
- (id)syncCircleSizeRetrievalThrottlerData;
- (void)updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)arg1 completion:(id /* block */)arg2;
- (void)updateTitle:(id)arg1 forVisit:(id)arg2;
- (void)visitIdentifiersMatchingExistingVisits:(id)arg1 populateAssociatedVisits:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)waitUntilHistoryHasLoaded;

@end