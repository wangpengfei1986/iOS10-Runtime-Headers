/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessFriendsNotificationEngine : NSObject <HDDataObserver, HDFitnessFriendsCloudKitManagerChangesObserver, HDFitnessFriendsManagerReadyObserver, HDNanoAlertSuppressionObserver> {
    HDFitnessFriendsNotificationBBDataProvider * _bulletinBoardNotificationDataProvider;
    <HDHealthDataManager> * _dataManager;
    <HDFitnessFriendsNotificationEngineDelegate> * _delegate;
    HDFitnessFriendsManager * _friendManager;
    <HDHealthDaemon> * _healthDaemon;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _recievedChangesFromCloudKit;
}

@property (nonatomic, retain) NSNumber *achievementAnchor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDFitnessFriendsNotificationEngineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *goalCompletionAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *workoutAnchor;

- (void).cxx_destruct;
- (bool)_areAllGoalsMetForSnapshot:(id)arg1;
- (id)_fetchNewDataForFriends;
- (id)_higherPriorityAchievementFromAchievement1:(id)arg1 achievement2:(id)arg2;
- (id)_mostRecentGoalCompletedSnapshotIndexForFriendWithUUID:(id)arg1;
- (void)_notifyAboutWorkoutDetectionIfRequired:(id)arg1;
- (void)_queue_coalesceAndNotifyFromDict:(id)arg1;
- (id)_queue_fetchNewDataForFriends;
- (void)_queue_showFriendNotificationsIfRequired;
- (void)_queue_updateFriendsDict:(id)arg1 withAchievements:(id)arg2;
- (void)_queue_updateFriendsDict:(id)arg1 withGoalCompletionsFromSnapshots:(id)arg2;
- (void)_queue_updateFriendsDict:(id)arg1 withWorkouts:(id)arg2;
- (void)_setHealthDaemon:(id)arg1;
- (void)_setMostRecentGoalCompletedSnapshotIndex:(id)arg1 forFriendWithUUID:(id)arg2;
- (void)_setupNotificationEngineToRunAfterDelay;
- (id)_userDefaultsDomainWithHealthDaemon:(id)arg1;
- (id)achievementAnchor;
- (void)alertSuppressionInvalidatedForSuppressionId:(id)arg1 reason:(long long)arg2;
- (void)cloudKitManager:(id)arg1 didRecieveNewNotificationEvents:(id)arg2 moreComing:(bool)arg3 changesProcessedHandler:(id /* block */)arg4;
- (void)cloudKitManagerDidBeginUpdates:(id)arg1;
- (void)cloudKitManagerDidEndUpdates:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)fitnessFriendsManagerReady:(id)arg1;
- (id)goalCompletionAnchor;
- (id)init;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)setAchievementAnchor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGoalCompletionAnchor:(id)arg1;
- (void)setWorkoutAnchor:(id)arg1;
- (void)showFriendNotifications;
- (id)workoutAnchor;

@end