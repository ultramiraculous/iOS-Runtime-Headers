/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class NSMutableDictionary, PLEntryNotificationOperatorComposition, PLXPCListenerOperatorComposition, PLXPCResponderOperatorComposition;

@interface PLBLMDebugService : PLService {
    PLEntryNotificationOperatorComposition *_bbCallback;
    PLEntryNotificationOperatorComposition *_ioreportCallback;
    PLEntryNotificationOperatorComposition *_processmonitorCallback;
    PLEntryNotificationOperatorComposition *_processnetworkCallback;
    NSMutableDictionary *_triggers;
    PLEntryNotificationOperatorComposition *_wifiCallback;
    PLXPCListenerOperatorComposition *_xpcListenerBLMDebugTrigger;
    PLXPCResponderOperatorComposition *_xpcResponderBLMDebugQuery;
}

@property(retain) PLEntryNotificationOperatorComposition * bbCallback;
@property(retain) PLEntryNotificationOperatorComposition * ioreportCallback;
@property(retain) PLEntryNotificationOperatorComposition * processmonitorCallback;
@property(retain) PLEntryNotificationOperatorComposition * processnetworkCallback;
@property(retain) NSMutableDictionary * triggers;
@property(retain) PLEntryNotificationOperatorComposition * wifiCallback;
@property(retain) PLXPCListenerOperatorComposition * xpcListenerBLMDebugTrigger;
@property(retain) PLXPCResponderOperatorComposition * xpcResponderBLMDebugQuery;

+ (id)entryEventNoneDefinitionBLMDebug;
+ (id)entryEventNoneDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (id)Testservice:(id)arg1;
- (id)bbCallback;
- (id)init;
- (void)initOperatorDependancies;
- (id)ioreportCallback;
- (id)logRailData:(id)arg1 withTriggerName:(id)arg2 inTimeRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg3;
- (id)processmonitorCallback;
- (id)processnetworkCallback;
- (void)registerTrigger:(id)arg1;
- (id)respondBLMDDebugQuery:(id)arg1;
- (void)setBbCallback:(id)arg1;
- (void)setIoreportCallback:(id)arg1;
- (void)setProcessmonitorCallback:(id)arg1;
- (void)setProcessnetworkCallback:(id)arg1;
- (void)setTriggers:(id)arg1;
- (void)setWifiCallback:(id)arg1;
- (void)setXpcListenerBLMDebugTrigger:(id)arg1;
- (void)setXpcResponderBLMDebugQuery:(id)arg1;
- (void)triggerLoggersNow:(id)arg1;
- (void)triggerSelectorAtDate:(id)arg1 withSelector:(SEL)arg2 withUseInfo:(id)arg3;
- (id)triggers;
- (id)wifiCallback;
- (id)xpcListenerBLMDebugTrigger;
- (id)xpcResponderBLMDebugQuery;

@end