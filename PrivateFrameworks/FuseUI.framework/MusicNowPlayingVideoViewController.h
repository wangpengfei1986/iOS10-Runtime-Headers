/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicNowPlayingVideoViewController : MPVideoViewController <MPVideoOverlayDelegate> {
    UITapGestureRecognizer * _tap;
    MPVideoPlaybackOverlayView * _videoOverlayView;
    NSObject<OS_dispatch_source> * _videoOverlayViewIdleTimer;
    <MusicNowPlayingVideoViewControllerDelegate> * _videoViewControllerDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <MusicNowPlayingVideoViewControllerDelegate> *videoViewControllerDelegate;

+ (long long)_activityIndicatorViewStyle;

- (void).cxx_destruct;
- (void)_cancelIdleTimer;
- (void)_handleTap:(id)arg1;
- (void)_startIdleTimer:(double)arg1;
- (void)displayVideoViewOnScreen;
- (void)handleExternalPlaybackDidChange;
- (void)overlay:(id)arg1 didBeginUserEvent:(long long)arg2;
- (void)overlay:(id)arg1 didCancelUserEvent:(long long)arg2;
- (void)overlay:(id)arg1 didEndUserEvent:(long long)arg2;
- (void)overlayTappedBackButton:(id)arg1;
- (void)setCanShowControlsOverlay:(bool)arg1;
- (void)setControlsOverlayVisible:(bool)arg1 animate:(bool)arg2 force:(bool)arg3;
- (void)setItem:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setVideoViewControllerDelegate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)videoOverlayView;
- (id)videoViewControllerDelegate;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end