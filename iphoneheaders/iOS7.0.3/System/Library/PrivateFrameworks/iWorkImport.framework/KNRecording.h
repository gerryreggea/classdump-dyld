/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@class NSArray, KNRecordingMovieTrack, NSDate;

@interface KNRecording : TSPObject {

	NSArray* mEventTracks;
	KNRecordingMovieTrack* mMovieTrack;
	double mDuration;
	NSDate* mModificationDate;
	BOOL mInSyncWithShow;

}

@property (nonatomic,readonly) NSArray * eventTracks; 
@property (nonatomic,readonly) KNRecordingMovieTrack * movieTrack; 
@property (nonatomic,readonly) double duration; 
@property (getter=isInSyncWithShow,nonatomic,readonly) BOOL inSyncWithShow; 
@property (nonatomic,readonly) NSDate * modificationDate; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(RecordingArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithContext:(id)arg1 eventTracks:(id)arg2 movieTrack:(id)arg3 duration:(double)arg4 modificationDate:(id)arg5 ;
-(id)eventTracks;
-(id)movieTrack;
-(id)initWithContext:(id)arg1 eventTracks:(id)arg2 movieTrack:(id)arg3 duration:(double)arg4 ;
-(id)recordingByReplacingSegmentAfterTime:(double)arg1 withRecording:(id)arg2 ;
-(id)recordingByMarkingAsOutOfSyncWithShow;
-(BOOL)isInSyncWithShow;
-(void)dealloc;
-(double)duration;
-(id)initWithContext:(id)arg1 ;
-(id)modificationDate;
@end

