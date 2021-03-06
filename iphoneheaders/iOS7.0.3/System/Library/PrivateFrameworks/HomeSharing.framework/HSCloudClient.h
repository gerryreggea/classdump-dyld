/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <HomeSharing/HSCloudAvailability.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class HSConnectionConfiguration, NSObject, NSMutableSet;

@interface HSCloudClient : NSObject <HSCloudAvailability> {

	BOOL _active;
	HSConnectionConfiguration* _configuration;
	NSObject<OS_xpc_object>* _connection;
	NSObject<OS_dispatch_queue>* _connectionQueue;
	unsigned long long _daemonConfiguration;
	NSMutableSet* _knownArtworkIDs;
	NSObject<OS_dispatch_queue>* _knownArtworkIDsQueue;
	NSMutableSet* _pendingArtworkRequests;
	NSObject<OS_dispatch_queue>* _pendingArtworkRequestsQueue;
	long long _preferredVideoQuality;
	/*^block*/ id _updateInProgressChangedHandler;

}

@property (nonatomic,copy) id updateInProgressChangedHandler;              //@synthesize updateInProgressChangedHandler=_updateInProgressChangedHandler - In the implementation block
-(void)authenticateWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)resignActive;
-(BOOL)isCellularDataRestricted;
-(void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 ;
-(void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 ;
-(BOOL)canShowCloudMusic;
-(BOOL)canShowCloudVideo;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)loadArtworkDataForSagaID:(unsigned long long)arg1 ;
-(void)loadArtworkDataForPurchaseHistoryID:(unsigned long long)arg1 ;
-(BOOL)shouldProhibitActionsForCurrentNetworkConditions;
-(BOOL)canShowCloudDownloadButtons;
-(void)addPlaylistWithName:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)addGeniusPlaylistWithName:(id)arg1 seedItemSagaIDs:(id)arg2 itemSagaIDs:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(void)becomeActive;
-(void)deauthenticateWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)isExpiredWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)isAuthenticatedWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)incrementItemProperty:(id)arg1 forSagaID:(unsigned long long)arg2 ;
-(void)loadUpdateProgressWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)removePlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)updatePlaylistWithSagaID:(unsigned long long)arg1 itemSagaIDs:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(/*^block*/ id)updateInProgressChangedHandler;
-(void)loadIsUpdateInProgressWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setUpdateInProgressChangedHandler:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setPreferredVideoQuality:(long long)arg1 ;
-(void)updateSagaLibraryWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)updateJaliscoLibraryWithReason:(long long)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)updateArtistImagesWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_sendConfigurationToDaemon;
-(void)_performBlockOnMainThread:(/*^block*/ id)arg1 ;
-(void)isAuthenticatedWithQueue:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)loadArtworkDataForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)loadArtworkDataForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)loadArtworkDataForPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)removeJaliscoLibrary;
-(void)updateJaliscoLibraryWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)updateJaliscoAppsLibraryWithReason:(long long)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)searchJaliscoAppsLibrary:(id)arg1 searchMethod:(long long)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)jaliscoAppsImageDataForStoreID:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)redownloadPurchaseAppWithStoreID:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)setHidden:(BOOL)arg1 purchasedAppWithStoreID:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)unhideAllPurchasedApps:(/*^block*/ id)arg1 ;
-(void)downloadGeniusDataWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)loadArtworkInfoForSagaIDs:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)resetConfiguration:(id)arg1 ;
-(void)setDaemonConfiguration:(unsigned long long)arg1 ;
-(void)uploadItemProperties;
-(void)_serverDidLaunch;
-(void)_serverUpdateInProgressDidChange;
@end

