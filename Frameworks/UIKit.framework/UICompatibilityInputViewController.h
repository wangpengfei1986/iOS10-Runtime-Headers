/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICompatibilityInputViewController : UIInputViewController <_UIKBDelegateAwareInputController> {
    UIKeyboard * _deferredSystemView;
    UIKeyboardInputMode * _incomingExtensionInputMode;
    double  _incomingExtensionInputModeTime;
    UIViewController * _inputController;
    UIView * _inputControllerSnapshot;
    UIKeyboardInputMode * _inputMode;
    double  _lastSuspendedTime;
    double  _resetInputModeTime;
    bool  _shouldRegenerateSizingConstraints;
    bool  _shouldSuppressRemoteInputController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *inputController;
@property (nonatomic, retain) UIView *inputControllerSnapshot;
@property (readonly) Class superclass;

+ (bool)_requiresProxyInterface;
+ (id)deferredInputModeControllerWithKeyboard:(id)arg1;
+ (id)inputViewControllerWithView:(id)arg1;

- (id)_compatView;
- (id)_compatibilityController;
- (id)_initAsDeferredController;
- (id)_keyboard;
- (id)_keyboardForThisViewController;
- (id)_systemViewControllerForInputMode:(id)arg1;
- (void)_tvUpdateAppearanceForUserInterfaceStyle;
- (void)assertCurrentInputModeIfNecessary;
- (id)childCompatibilityController;
- (void)dealloc;
- (void)didFinishTranslation;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)didSuspend:(id)arg1;
- (void)finishSplitTransition:(bool)arg1;
- (void)generateCompatibleSizeConstraintsIfNecessary;
- (id)inputController;
- (id)inputControllerSnapshot;
- (void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2;
- (void)loadView;
- (id)preferredFocusedItem;
- (void)rebuildChildConstraints;
- (void)removeSnapshotView;
- (void)resetInputMode;
- (void)resetInputModeInMainThread;
- (void)setInputController:(id)arg1;
- (void)setInputControllerSnapshot:(id)arg1;
- (void)setInputMode:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (void)shouldUpdateInputMode:(id)arg1;
- (void)snapshotCurrentDisplay;
- (void)tearDownInputController;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willBeginTranslation;
- (void)willResume:(id)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end