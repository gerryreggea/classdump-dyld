/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSArray, IMAVMicrophone;

@interface IMAVMicrophoneController : NSObject {

	id _internal;
	NSMutableArray* _microphones;
	NSObject<OS_dispatch_queue>* _queue;

}

@property (nonatomic,readonly) NSArray * microphones; 
@property (nonatomic,retain) IMAVMicrophone * currentMicrophone; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)microphones;
-(void)setCurrentMicrophone:(id)arg1 ;
-(void)_rebuildMicrophoneList;
-(void)_loadSavedMicrophone;
-(id)currentMicrophone;
@end
