/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSPendingNotificationRepository : NSObject

- (id)_pendingNotificationDictionariesForBundleIdentifier:(id)arg1;
- (void)_setPendingNotificationDictionaries:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)applicationStateDidRestore;
- (id)lastFireDateKeyForBundleIdentifier:(id)arg1;
- (id)lastLocalNotificationFireDateForBundleIdentifier:(id)arg1;
- (id)pendingNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)performClockMigration;
- (void)performMigration;
- (void)performMigrationForBundleIdentifier:(id)arg1;
- (void)setLastFireDateKey:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setLastLocalNotificationFireDate:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;

@end