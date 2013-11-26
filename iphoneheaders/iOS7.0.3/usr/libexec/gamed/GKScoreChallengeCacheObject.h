/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <gamed/GKChallengeCacheObject.h>

@class NSNumber, NSString, NSDate;

@interface GKScoreChallengeCacheObject : GKChallengeCacheObject

@property (assign,nonatomic,@dynamic) int rank; 
@property (nonatomic,@dynamic,retain) NSNumber * value; 
@property (nonatomic,@dynamic,retain) NSString * formattedValue; 
@property (nonatomic,@dynamic,retain) NSDate * date; 
@property (nonatomic,@dynamic,retain) NSNumber * context; 
@property (nonatomic,@dynamic,retain) NSString * localizedTitle; 
+(id)entityName;
-(void)updateWithServerRepresentation:(id)arg1 ;
-(Class)classForInternalRepresentation;
-(BOOL)hasDetails;
-(id)internalRepresentation;
@end
