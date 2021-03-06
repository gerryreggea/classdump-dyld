/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSURL;

@interface EKPersistentParticipant : EKPersistentObject <NSCopying>

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSURL * address; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * comment; 
+(id)defaultPropertiesToLoad;
-(void)setComment:(id)arg1 ;
-(void)setAddress:(id)arg1 ;
-(id)init;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)UUID;
-(id)displayName;
-(void)setEmailAddress:(id)arg1 ;
-(id)emailAddress;
-(void)setDisplayName:(id)arg1 ;
-(id)owner;
-(id)address;
-(id)comment;
-(id)firstName;
-(id)lastName;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
@end

