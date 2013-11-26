/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/SSRestoreContentItem.h>

@class NSString, DownloadSessionProperties, NSError;

@interface RestoreDownloadItem : SSRestoreContentItem {

	NSString* _clientIdentifier;
	long long _downloadIdentifier;
	DownloadSessionProperties* _downloadSessionProperties;
	NSError* _error;
	long long _handlerIdentifier;
	BOOL _hasRestoreData;
	long long _restoreDataSize;

}

@property (nonatomic,readonly) long long downloadIdentifier;                                   //@synthesize downloadIdentifier=_downloadIdentifier - In the implementation block
@property (nonatomic,copy) DownloadSessionProperties * downloadSessionProperties;              //@synthesize downloadSessionProperties=_downloadSessionProperties - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                                        //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) long long handlerIdentifier;                                      //@synthesize handlerIdentifier=_handlerIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasRestoreData;                                              //@synthesize hasRestoreData=_hasRestoreData - In the implementation block
@property (assign,nonatomic) long long restoreDataSize;                                        //@synthesize restoreDataSize=_restoreDataSize - In the implementation block
@property (nonatomic,retain) NSError * error;                                                  //@synthesize error=_error - In the implementation block
-(void)setHandlerIdentifier:(long long)arg1 ;
-(void)setDownloadSessionProperties:(id)arg1 ;
-(id)downloadSessionProperties;
-(BOOL)hasRestoreData;
-(void)setHasRestoreData:(BOOL)arg1 ;
-(void)setRestoreDataSize:(long long)arg1 ;
-(long long)restoreDataSize;
-(void)setError:(id)arg1 ;
-(long long)downloadIdentifier;
-(id)initWithDownloadIdentifier:(long long)arg1 ;
-(void)dealloc;
-(id)error;
-(long long)handlerIdentifier;
-(id)copyRestoreDictionary;
-(id)clientIdentifier;
-(void)setClientIdentifier:(id)arg1 ;
@end
