/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSNumber;

@interface SAUIRequestUpdateViews : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSNumber * timeInSeconds; 
@property (nonatomic,copy) NSArray * viewIds; 
+(id)requestUpdateViews;
+(id)requestUpdateViewsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)commands;
-(void)setCommands:(id)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)timeInSeconds;
-(void)setTimeInSeconds:(id)arg1 ;
-(id)viewIds;
-(void)setViewIds:(id)arg1 ;
@end
