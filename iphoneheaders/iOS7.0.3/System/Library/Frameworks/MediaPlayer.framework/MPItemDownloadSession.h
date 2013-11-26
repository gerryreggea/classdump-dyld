/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class AVAsset, MPItemDownloadProperties, SSDownloadHandlerSession, NSError;

@interface MPItemDownloadSession : NSObject {

	AVAsset* _AVAsset;
	MPItemDownloadProperties* _downloadProperties;
	SSDownloadHandlerSession* _downloadSession;
	float _percentComplete;
	NSError* _sessionError;
	int _sessionState;

}

@property (nonatomic,retain) MPItemDownloadProperties * downloadProperties;              //@synthesize downloadProperties=_downloadProperties - In the implementation block
@property (assign,nonatomic) AVAsset * AVAsset;                                          //@synthesize AVAsset=_AVAsset - In the implementation block
@property (nonatomic,retain) SSDownloadHandlerSession * downloadSession;                 //@synthesize downloadSession=_downloadSession - In the implementation block
@property (assign,nonatomic) float percentComplete;                                      //@synthesize percentComplete=_percentComplete - In the implementation block
@property (nonatomic,retain) NSError * sessionError;                                     //@synthesize sessionError=_sessionError - In the implementation block
@property (assign,nonatomic) int sessionState;                                           //@synthesize sessionState=_sessionState - In the implementation block
-(void)setPercentComplete:(float)arg1 ;
-(id)initWithItemDownloadProperties:(id)arg1 ;
-(id)downloadProperties;
-(BOOL)isNetworkConstrainedForNetworkType:(int)arg1 ;
-(void)reloadNetworkConstraints;
-(void)setDownloadSession:(id)arg1 ;
-(void)snapshotProgressForItem:(id)arg1 ;
-(void)setDownloadProperties:(id)arg1 ;
-(id)AVAsset;
-(void)setAVAsset:(id)arg1 ;
-(id)downloadSession;
-(id)sessionError;
-(void)setSessionError:(id)arg1 ;
-(int)sessionState;
-(void)setSessionState:(int)arg1 ;
-(id)description;
-(float)percentComplete;
-(void).cxx_destruct;
@end
