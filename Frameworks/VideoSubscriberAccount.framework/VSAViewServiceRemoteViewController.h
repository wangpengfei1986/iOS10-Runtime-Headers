/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAViewServiceRemoteViewController : _UIRemoteViewController <VSAViewServiceHostProtocol> {
    <VSAViewServiceRemoteViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSAViewServiceRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)_didCancelRequest;
- (void)_didChooseAdditionalProviders;
- (void)_didFailWithError:(id)arg1;
- (void)_dismissViewController;
- (void)_presentViewController;
- (void)_request:(id)arg1 didCompleteWithResponse:(id)arg2;
- (void)_request:(id)arg1 didFailWithError:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end