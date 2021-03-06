/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNXPCDataMapperProgressiveHandler : NSObject <ProgressiveResultsHandlerProtocol> {
    id /* block */  _completionBlock;
    id /* block */  _progressBlock;
}

- (void)completedWithError:(id)arg1;
- (void)dealloc;
- (id)initWithProgressBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (void)receiveProgressiveContacts:(id)arg1 matchInfos:(id)arg2;

@end
