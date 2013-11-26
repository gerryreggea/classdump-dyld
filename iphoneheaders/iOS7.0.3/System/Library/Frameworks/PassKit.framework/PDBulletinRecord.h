/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:05:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSMutableSet, PKDiff, NSDate, NSString, NSSet;

@interface PDBulletinRecord : NSObject <NSSecureCoding> {

	NSMutableSet* _diffs;
	PKDiff* _seedDiff;
	NSDate* _date;
	NSString* _recordID;
	NSString* _passTypeID;

}

@property (nonatomic,readonly) PKDiff * seedDiff;                  //@synthesize seedDiff=_seedDiff - In the implementation block
@property (nonatomic,readonly) NSSet * diffs;                      //@synthesize diffs=_diffs - In the implementation block
@property (nonatomic,readonly) NSDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * recordID;                //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) NSString * passTypeID;              //@synthesize passTypeID=_passTypeID - In the implementation block
+(id)recordWithDiff:(id)arg1 passTypeID:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)passTypeID;
-(id)seedDiff;
-(id)localizedBulletinInfoWithSeedCard:(id)arg1 ;
-(id)localizedBulletinSectionInfoWithSeedCard:(id)arg1 ;
-(void)_removeDiffs:(id)arg1 ;
-(BOOL)addDiff:(id)arg1 forPassTypeID:(id)arg2 ;
-(BOOL)removeDiffsConflictingWithDiff:(id)arg1 ;
-(BOOL)removeDiffsForCardUniqueID:(id)arg1 ;
-(BOOL)hasDiffs;
-(id)diffs;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)date;
-(id)recordID;
@end
