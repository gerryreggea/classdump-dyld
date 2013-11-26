/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSMutableSet, NSMutableDictionary, NSDictionary;

@interface IDSAppleIDNotification : NSObject {

	NSString* _appleID;
	NSString* _deviceName;
	NSMutableSet* _aliases;
	NSMutableSet* _sessions;
	NSMutableSet* _serviceTypes;
	NSMutableDictionary* _sessionToBlockMap;

}

@property (nonatomic,retain) NSString * appleID;                            //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                         //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSMutableSet * aliases;                        //@synthesize aliases=_aliases - In the implementation block
@property (nonatomic,retain) NSMutableSet * sessions;                       //@synthesize sessions=_sessions - In the implementation block
@property (nonatomic,retain) NSMutableSet * serviceTypes;                   //@synthesize serviceTypes=_serviceTypes - In the implementation block
@property (nonatomic,retain) NSDictionary * sessionToBlockMap;              //@synthesize sessionToBlockMap=_sessionToBlockMap - In the implementation block
-(id)appleID;
-(void)setAppleID:(id)arg1 ;
-(void)setDeviceName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)deviceName;
-(void)addAlias:(id)arg1 ;
-(void)addServiceType:(id)arg1 ;
-(void)addSession:(id)arg1 ;
-(void)addCompletionBlock:(/*^block*/ id)arg1 forSession:(id)arg2 ;
-(id)aliases;
-(void)setAliases:(id)arg1 ;
-(id)sessions;
-(void)setSessions:(id)arg1 ;
-(id)serviceTypes;
-(void)setServiceTypes:(id)arg1 ;
-(id)sessionToBlockMap;
-(void)setSessionToBlockMap:(id)arg1 ;
@end
