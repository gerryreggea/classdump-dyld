/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUGridZoomLevelInfo.h>
#import <PhotosUI/PUSectionedGridLayoutDelegate.h>

@class NSArray;

@interface PUCollectionsZoomLevelInfo : PUGridZoomLevelInfo <PUSectionedGridLayoutDelegate> {

	NSArray* _allMomentLists;

}
-(id)displayTitle;
-(int)imageFormat;
-(CFStringRef)aggregateLevelKey;
-(id)sectionHeaderElementKind;
-(BOOL)supportsIncrementalChangeNotifications;
-(void)modelDidChange;
-(void)updateLayoutMetricsForWidth:(float)arg1 ;
-(BOOL)hasEnoughContentToDisplay;
-(id)renderedStripsElementKind;
-(void)configureSectionHeaderView:(id)arg1 forVisualSection:(int)arg2 ;
-(int)numberOfVisualSectionsForSectionedGridLayout:(id)arg1 ;
-(id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(int)arg2 ;
-(id)newCollectionViewLayout;
-(id)diagnosticsProviderForVisualSection:(int)arg1 ;
-(id)assetsToDisplayInMapForVisualSection:(int)arg1 ;
-(int)maxRowsPerSection;
-(id)_momentLists;
-(void).cxx_destruct;
@end
