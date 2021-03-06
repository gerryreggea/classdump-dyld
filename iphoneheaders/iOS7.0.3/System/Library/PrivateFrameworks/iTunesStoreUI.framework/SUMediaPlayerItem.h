/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSURL, NSString, NSArray;

@interface SUMediaPlayerItem : NSObject <NSCopying> {

	NSURL* _backgroundImageURL;
	NSString* _bookmarkIdentifier;
	NSArray* _downloadPingURLs;
	int _initialOrientation;
	unsigned long long _itemIdentifier;
	int _itemType;
	NSArray* _playbackPingURLs;
	double _playableDuration;
	NSString* _subtitle;
	NSString* _title;
	NSURL* _url;

}

@property (nonatomic,retain) NSURL * backgroundImageURL;                     //@synthesize backgroundImageURL=_backgroundImageURL - In the implementation block
@property (assign,nonatomic) double bookmarkedStartTime; 
@property (nonatomic,copy) NSString * bookmarkIdentifier;                    //@synthesize bookmarkIdentifier=_bookmarkIdentifier - In the implementation block
@property (assign,nonatomic) int initialOrientation;                         //@synthesize initialOrientation=_initialOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) int itemType;                                   //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,copy) NSArray * downloadPingURLs;                       //@synthesize downloadPingURLs=_downloadPingURLs - In the implementation block
@property (nonatomic,copy) NSArray * playbackPingURLs;                       //@synthesize playbackPingURLs=_playbackPingURLs - In the implementation block
@property (assign,nonatomic) double playableDuration;                        //@synthesize playableDuration=_playableDuration - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                    //@synthesize url=_url - In the implementation block
-(double)playableDuration;
-(id)initWithItem:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)title;
-(id)URL;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void)setURL:(id)arg1 ;
-(unsigned long long)itemIdentifier;
-(int)itemType;
-(void)setItemType:(int)arg1 ;
-(void)setItemIdentifier:(unsigned long long)arg1 ;
-(id)_newPingURLsWithArray:(id)arg1 ;
-(void)setBookmarkedStartTime:(double)arg1 ;
-(double)bookmarkedStartTime;
-(void)resetBookmarkedStartTime;
-(id)backgroundImageURL;
-(void)setBackgroundImageURL:(id)arg1 ;
-(id)bookmarkIdentifier;
-(void)setBookmarkIdentifier:(id)arg1 ;
-(id)downloadPingURLs;
-(void)setDownloadPingURLs:(id)arg1 ;
-(int)initialOrientation;
-(void)setInitialOrientation:(int)arg1 ;
-(void)setPlayableDuration:(double)arg1 ;
-(id)playbackPingURLs;
-(void)setPlaybackPingURLs:(id)arg1 ;
@end

