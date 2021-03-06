/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentVerificationMethodsViewController : PKPaymentSetupFieldsViewController {
    PKPaymentSetupVerificationMethodTableController * _methodTableController;
    PKPaymentVerificationController * _verificationController;
}

@property (nonatomic, readonly) PKPaymentVerificationController *verificationController;

- (void).cxx_destruct;
- (void)_configure;
- (void)_loadVerificationOptions;
- (id)_newVerificationRequest;
- (id)_requestErrorAlertController:(id)arg1;
- (id)_setupAssistantVerificationAlert;
- (void)cancel:(id)arg1;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)handleNextButtonTapped:(id)arg1;
- (id)initWithVerificationController:(id)arg1;
- (void)terminateFlow;
- (id)verificationController;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)visibleFieldIdentifiers;

@end
