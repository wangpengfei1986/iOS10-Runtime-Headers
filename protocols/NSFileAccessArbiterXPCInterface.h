/* Generated by RuntimeBrowser.
 */

@protocol NSFileAccessArbiterXPCInterface <NSFileAccessArbiter>

@required

- (void)addPresenter:(id <NSFilePresenterXPCInterface>)arg1 withID:(id)arg2 fileURL:(NSURL *)arg3 lastPresentedItemEventIdentifier:(NSNumber *)arg4 options:(unsigned long long)arg5 responses:(unsigned long long)arg6;
- (void)addProvider:(void *)arg1 withID:(void *)arg2 forProvidedItemsURL:(void *)arg3 options:(void *)arg4 withServer:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 11: <NSFileProviderXPCInterface> *, id, NSURL *, unsigned long long, NSXPCListenerEndpoint *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)grantAccessClaim:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 10: NSFileAccessClaim *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSArray *, NSError *, void*
- (void)grantSubarbitrationClaim:(void *)arg1 withServer:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSFileSubarbitrationClaim *, NSXPCListenerEndpoint *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)prepareToArbitrateForURLs:(NSArray *)arg1;
- (void)provideDebugInfoWithLocalInfo:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (oneway void)removePresenterWithID:(id)arg1;
- (oneway void)removeProviderWithID:(id)arg1;
- (oneway void)revokeAccessClaimForID:(id)arg1;
- (void)startArbitratingWithReply:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end