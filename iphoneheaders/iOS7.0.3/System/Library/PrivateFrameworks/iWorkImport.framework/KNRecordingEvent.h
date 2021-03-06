/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface KNRecordingEvent : NSObject <NSCopying> {

	double mStartTime;

}

@property (nonatomic,readonly) double startTime; 
@property (getter=isIgnoredWhenSeeking,nonatomic,readonly) BOOL ignoredWhenSeeking; 
@property (nonatomic,readonly) BOOL canPrecedeDiscontinuity; 
-(void)saveToArchive:(RecordingEventArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithStartTime:(double)arg1 ;
-(BOOL)isIgnoredWhenSeeking;
-(BOOL)canPrecedeDiscontinuity;
-(id)recordingEventByAddingTimeOffset:(double)arg1 ;
-(id)initWithContext:(id)arg1 archive:(const RecordingEventArchive*)arg2 unarchiver:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(double)startTime;
@end

