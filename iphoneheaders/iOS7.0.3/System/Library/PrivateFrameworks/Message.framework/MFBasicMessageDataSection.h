/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Message/MFMessageDataSection.h>

@class NSData, NSString;

@interface MFBasicMessageDataSection : NSObject <MFMessageDataSection> {

	NSData* _data;
	BOOL _complete;
	BOOL _partial;
	NSString* _partName;

}

@property (assign,getter=isPartial,nonatomic) BOOL partial;                //@synthesize partial=_partial - In the implementation block
@property (assign,getter=isComplete,nonatomic) BOOL complete;              //@synthesize complete=_complete - In the implementation block
@property (nonatomic,retain) NSData * data;                                //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * partName;                          //@synthesize partName=_partName - In the implementation block
-(void)dealloc;
-(id)data;
-(void)setData:(id)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(BOOL)isPartial;
-(id)partName;
-(BOOL)isComplete;
-(void)setPartial:(BOOL)arg1 ;
-(void)setPartName:(id)arg1 ;
@end
