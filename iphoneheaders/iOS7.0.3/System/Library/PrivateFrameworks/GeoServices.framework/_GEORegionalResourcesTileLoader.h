/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableArray, GEORegionalResourceTileData;

@interface _GEORegionalResourcesTileLoader : NSObject {

	NSMutableArray* _pendingDownloads;
	GEORegionalResourceTileData* _tile;
	/*^block*/ id _finishedHandler;
	/*^block*/ id _errorHandler;
	BOOL _canceled;

}
-(void)dealloc;
-(void)cancel;
-(void)_loadNextResource;
-(void)loadResourcesForTileKey:(const GEOTileKey*)arg1 finished:(/*^block*/ id)arg2 error:(/*^block*/ id)arg3 ;
-(id)_destinationPathForResource:(id)arg1 ;
-(BOOL)_loadRegionalResourceFromFilesystemIfPossible:(id)arg1 resourceChecksum:(id)arg2 ;
-(void)_addDownloadForName:(id)arg1 ofType:(int)arg2 baseURLString:(id)arg3 expectedChecksum:(id)arg4 ;
@end

