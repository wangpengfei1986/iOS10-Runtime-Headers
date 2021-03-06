/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@interface PRSCoreParsecBagHandler : PRSBagHandler {
    PARBag * _bag;
    NSMutableArray * _tasks;
}

- (void).cxx_destruct;
- (void)getFTEStringsWithReply:(id /* block */)arg1;
- (bool)isLocaleSupported:(id)arg1;
- (void)refreshGUID;
- (void)removeTask:(id)arg1;
- (bool)searchSupported:(bool)arg1;
- (void)triggerTaskWhenReady:(id)arg1;
- (void)updateFromSession:(id)arg1 bag:(id)arg2 forClient:(id)arg3 error:(id)arg4;
- (void)updateWithBagDictionary:(id)arg1 error:(id)arg2;

@end
