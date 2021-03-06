/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISOperation, NSString;

@interface SUBackgroundTaskOperation : ISOperation {

	ISOperation* _operation;
	NSString* _permissionIdentifier;
	unsigned _taskIdentifier;

}

@property (readonly) ISOperation * operation; 
@property (readonly) NSString * permissionIdentifier; 
-(void)dealloc;
-(id)operation;
-(void)run;
-(void)_takeBackgroundAssertion;
-(void)_removeBackgroundAssertion;
-(void)_cancelBackgroundAssertion;
-(id)initWithOperation:(id)arg1 identifier:(id)arg2 ;
-(id)permissionIdentifier;
@end

