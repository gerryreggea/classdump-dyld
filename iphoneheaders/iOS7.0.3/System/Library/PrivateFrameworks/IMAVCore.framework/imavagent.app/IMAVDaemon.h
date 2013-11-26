/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/imavagent.app/imavagent
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <imavagent/imavagent-Structs.h>
@class NSRecursiveLock, NSMutableArray, IMRemoteObjectBroadcaster, LocalPreview, NSDate;

@interface IMAVDaemon : NSObject {

	NSRecursiveLock* _listenerLock;
	NSMutableArray* _listeners;
	NSMutableArray* _listenerLocalObjects;
	NSMutableArray* _listenerIDs;
	vproc_transaction_sRef _transaction;
	IMRemoteObjectBroadcaster* _notifier;
	LocalPreview* _localPreview;
	NSDate* _birthDate;
	id _stateMonitor;

}
+(id)sharedInstance;
-(void)logState;
-(void)_pidSuspended:(int)arg1 ;
-(void)_terminate;
-(void)_removeListener:(id)arg1 ;
-(void)_removeListenerObject:(id)arg1 ;
-(void)_removeLocalListenerObject:(id)arg1 ;
-(void)removeListenerObject:(id)arg1 ;
-(void)removeLocalListenerObject:(id)arg1 ;
-(id)listenerIDForLocalObject:(id)arg1 foundIndex:(unsigned*)arg2 ;
-(id)listenerWithName:(id)arg1 ;
-(BOOL)daemonInterface:(id)arg1 shouldGrantAccessForPID:(int)arg2 auditToken:(SCD_Struct_IM1)arg3 portName:(id)arg4 listenerConnection:(id)arg5 setupInfo:(id)arg6 setupResponse:(id*)arg7 ;
-(id)_setupInfoForListener:(id)arg1 withContext:(id)arg2 ;
-(void)stopPreviewWithLocalObject:(id)arg1 ;
-(BOOL)_setupListenerConnection:(id)arg1 listenerID:(id)arg2 pid:(int)arg3 setupInfo:(id)arg4 setupResponse:(id*)arg5 ;
-(void)startPreviewWithLocalObject:(id)arg1 ;
-(void)startPreviewWithMessageContext:(id)arg1 ;
-(void)stopPreviewWithMessageContext:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)remoteObjectDiedNotification:(id)arg1 ;
-(void)localObjectDiedNotification:(id)arg1 ;
-(void)shutdown;
@end
