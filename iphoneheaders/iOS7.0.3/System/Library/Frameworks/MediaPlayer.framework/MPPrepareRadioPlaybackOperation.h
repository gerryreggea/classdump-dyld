/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class RadioGetTracksRequest, NSLock, RadioRequestContext, RadioStation;

@interface MPPrepareRadioPlaybackOperation : NSOperation {

	/*^block*/ id _firstTrackBlock;
	RadioGetTracksRequest* _loadTracksRequest;
	NSLock* _lock;
	/*^block*/ id _preparedBlock;
	RadioRequestContext* _requestContext;
	RadioStation* _station;

}

@property (copy) id firstTrackBlock; 
@property (copy) id preparedBlock; 
@property (copy) RadioRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
+(BOOL)stationNeedsPreparation:(id)arg1 ;
-(id)initWithStation:(id)arg1 ;
-(id)requestContext;
-(void)setRequestContext:(id)arg1 ;
-(void)setFirstTrackBlock:(/*^block*/ id)arg1 ;
-(void)setPreparedBlock:(/*^block*/ id)arg1 ;
-(id)_loadStationTracks:(id*)arg1 ;
-(/*^block*/ id)preparedBlock;
-(/*^block*/ id)firstTrackBlock;
-(void)cancel;
-(void)main;
-(void).cxx_destruct;
@end

