/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class AVPlayerItemAccessLogEventInternal, NSDate, NSString;

@interface AVPlayerItemAccessLogEvent : NSObject <NSCopying> {

	AVPlayerItemAccessLogEventInternal* _playerItemAccessLogEvent;

}

@property (nonatomic,readonly) int numberOfSegmentsDownloaded; 
@property (nonatomic,readonly) int numberOfMediaRequests; 
@property (nonatomic,readonly) NSDate * playbackStartDate; 
@property (nonatomic,readonly) NSString * URI; 
@property (nonatomic,readonly) NSString * serverAddress; 
@property (nonatomic,readonly) int numberOfServerAddressChanges; 
@property (nonatomic,readonly) NSString * playbackSessionID; 
@property (nonatomic,readonly) double playbackStartOffset; 
@property (nonatomic,readonly) double segmentsDownloadedDuration; 
@property (nonatomic,readonly) double durationWatched; 
@property (nonatomic,readonly) int numberOfStalls; 
@property (nonatomic,readonly) long long numberOfBytesTransferred; 
@property (nonatomic,readonly) double transferDuration; 
@property (nonatomic,readonly) double observedBitrate; 
@property (nonatomic,readonly) double indicatedBitrate; 
@property (nonatomic,readonly) int numberOfDroppedVideoFrames; 
@property (nonatomic,readonly) double startupTime; 
@property (nonatomic,readonly) int downloadOverdue; 
@property (nonatomic,readonly) double observedMaxBitrate; 
@property (nonatomic,readonly) double observedMinBitrate; 
@property (nonatomic,readonly) double observedBitrateStandardDeviation; 
@property (nonatomic,readonly) NSString * playbackType; 
@property (nonatomic,readonly) int mediaRequestsWWAN; 
@property (nonatomic,readonly) double switchBitrate; 
-(id)serviceIdentifier;
-(double)transferDuration;
-(double)currentObservedBitrate;
-(double)startupTime;
-(int)downloadOverdue;
-(int)entryReasonCode;
-(double)observedMaxBitrate;
-(double)observedMinBitrate;
-(double)observedBitrateStandardDeviation;
-(id)playbackType;
-(int)mediaRequestsWWAN;
-(double)switchBitrate;
-(int)numberOfMediaRequests;
-(id)playbackStartDate;
-(id)serverAddress;
-(int)numberOfServerAddressChanges;
-(id)playbackSessionID;
-(double)playbackStartOffset;
-(double)segmentsDownloadedDuration;
-(double)durationWatched;
-(int)numberOfStalls;
-(long long)numberOfBytesTransferred;
-(double)observedBitrate;
-(double)indicatedBitrate;
-(int)numberOfDroppedVideoFrames;
-(int)numberOfSegmentsDownloaded;
-(void)dealloc;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)URI;
-(void)finalize;
@end

