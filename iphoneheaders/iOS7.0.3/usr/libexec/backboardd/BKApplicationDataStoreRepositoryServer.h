/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <BackBoardServices/BKSBaseXPCServer.h>

@protocol BKApplicationDataStoreRepository;
@interface BKApplicationDataStoreRepositoryServer : BKSBaseXPCServer {

	<BKApplicationDataStoreRepository>* _dataStore;

}

@property (nonatomic,retain) <BKApplicationDataStoreRepository> * dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
+(id)sharedInstance;
-(id)dataStore;
-(void)_handleConnect:(id)arg1 ;
-(void)_handleSetPrefetchedKeys:(id)arg1 client:(id)arg2 ;
-(void)_handleSynchronize:(id)arg1 ;
-(void)_handleGetAvailableDataStores:(id)arg1 ;
-(void)_handleGetObjectForKey:(id)arg1 ;
-(void)_handleSetObjectForKey:(id)arg1 client:(id)arg2 ;
-(void)_handleRemoveObjectForKey:(id)arg1 client:(id)arg2 ;
-(void)_handleRemoveAllObjects:(id)arg1 ;
-(void)setDataStore:(id)arg1 ;
-(id)init;
-(void)queue_handleMessage:(id)arg1 client:(id)arg2 ;
-(Class)queue_classForNewClientConnection:(id)arg1 ;
@end

