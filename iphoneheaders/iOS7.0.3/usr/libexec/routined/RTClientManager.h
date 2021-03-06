/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/routined
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSXPCListener.h>
#import <MobileCoreServices/NSXPCListenerDelegate.h>
#import <CoreRoutine/RTDaemonProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface RTClientManager : NSXPCListener <NSXPCListenerDelegate, RTDaemonProtocol> {

	NSObject<OS_dispatch_queue>* _queue;
	NSMutableArray* _connectedClients;

}

@property (nonatomic,retain) NSObject<OS_dispatch_queue> * queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * connectedClients;                //@synthesize connectedClients=_connectedClients - In the implementation block
+(id)sharedInstance;
-(id)findClientFromConnection:(id)arg1 ;
-(void)handleClientDisconnection:(id)arg1 ;
-(void)handleClientConnection:(id)arg1 ;
-(void)setConnectedClients:(id)arg1 ;
-(id)connectedClients;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withReply:(/*^block*/ id)arg3 ;
-(void)fetchLocationsOfInterestOfType:(int)arg1 withReply:(/*^block*/ id)arg2 ;
-(void)fetchAllLocationsOfInterestWithReply:(/*^block*/ id)arg1 ;
-(void)fetchNextLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withReply:(/*^block*/ id)arg4 ;
-(void)fetchRoutineEnabledWithReply:(/*^block*/ id)arg1 ;
-(void)fetchBBPluginSupportedWithReply:(/*^block*/ id)arg1 ;
-(void)setRoutineEnabled:(BOOL)arg1 ;
-(void)clearRoutine;
-(void)synchronizeDefaults;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(void).cxx_destruct;
@end

