/* Generated by RuntimeBrowser.
 */

@protocol VSAViewServiceRemoteViewControllerDelegate <NSObject>

@optional

- (void)dismissViewServiceRemoteViewController:(VSAViewServiceRemoteViewController *)arg1;
- (void)presentViewServiceRemoteViewController:(VSAViewServiceRemoteViewController *)arg1;
- (void)viewServiceRemoteViewController:(VSAViewServiceRemoteViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)viewServiceRemoteViewController:(VSAViewServiceRemoteViewController *)arg1 didFinishWithResponse:(VSAViewServiceResponse *)arg2;
- (void)viewServiceRemoteViewControllerDidCancel:(VSAViewServiceRemoteViewController *)arg1;
- (void)viewServiceRemoteViewControllerDidChooseAdditionalProviders:(VSAViewServiceRemoteViewController *)arg1;

@end
