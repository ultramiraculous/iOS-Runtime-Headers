/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDataEntityEncoder : HDEntityEncoder {
    HDDataProvenanceCache *_dataProvenanceCache;
    HDMetadataValueStatement *_metadataValueStatement;
}

@property (nonatomic, retain) HDDataProvenanceCache *dataProvenanceCache;
@property (nonatomic, retain) HDMetadataValueStatement *metadataValueStatement;

- (void).cxx_destruct;
- (void)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow { }*)arg3;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow { }*)arg2 collection:(id)arg3;
- (id)dataProvenanceCache;
- (void)finish;
- (id)initWithHealthEntityClass:(Class)arg1 healthDaemon:(id)arg2 database:(id)arg3 purpose:(int)arg4 authorizationFilter:(id /* block */)arg5;
- (id)metadataValueStatement;
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow { }*)arg2 error:(id*)arg3;
- (id)orderedProperties;
- (void)setDataProvenanceCache:(id)arg1;
- (void)setMetadataValueStatement:(id)arg1;

@end