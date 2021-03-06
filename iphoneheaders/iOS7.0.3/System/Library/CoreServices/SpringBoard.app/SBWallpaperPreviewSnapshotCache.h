/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBIconIndexNodeObserver.h>

@class SBFMappedImageCache;

@interface SBWallpaperPreviewSnapshotCache : NSObject <SBIconIndexNodeObserver> {

	SBFMappedImageCache* _imageCache;
	int _invalidatedLocations;

}
-(id)homeScreenSnapshot;
-(id)lockScreenSnapshot;
-(void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)invalidateSnapshotsForLocations:(int)arg1 ;
-(void)_backlightFadeFinished;
-(id)_lockScreenSnapshotProvider;
-(id)_homeScreenSnapshotProvider;
-(void)regenerateSnapshotsForLocations:(int)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(id)initWithImageCache:(id)arg1 ;
@end

