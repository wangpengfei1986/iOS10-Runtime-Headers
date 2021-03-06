/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryRequestOperation : MSVOperation {
    MSVOperationQueue * _operationQueue;
    MPModelLibraryRequest * _request;
    id /* block */  _responseHandler;
    MSVOperationQueue * _serialAccessQueue;
}

@property (nonatomic, retain) MSVOperationQueue *operationQueue;
@property (nonatomic, copy) MPModelLibraryRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic, retain) MSVOperationQueue *serialAccessQueue;

- (void).cxx_destruct;
- (void)execute;
- (id)operationQueue;
- (id)request;
- (id /* block */)responseHandler;
- (id)serialAccessQueue;
- (void)setOperationQueue:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setSerialAccessQueue:(id)arg1;

@end
