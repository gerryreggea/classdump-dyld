/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:14 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataAccess/DAAction.h>

@class NSString;

@interface DAMoveAction : DAAction {

	NSString* _sourceContainerId;
	NSString* _sourceServerId;
	NSString* _destinationContainerId;

}

@property (readonly) NSString * sourceContainerId;                   //@synthesize sourceContainerId=_sourceContainerId - In the implementation block
@property (readonly) NSString * sourceServerId;                      //@synthesize sourceServerId=_sourceServerId - In the implementation block
@property (readonly) NSString * destinationContainerId;              //@synthesize destinationContainerId=_destinationContainerId - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithItemChangeType:(int)arg1 changedItem:(id)arg2 sourceContainerId:(id)arg3 sourceServerId:(id)arg4 destinationContainerId:(id)arg5 ;
-(id)sourceContainerId;
-(id)sourceServerId;
-(id)destinationContainerId;
@end
