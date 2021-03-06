/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MusicStoreUI/MSStructuredPageTableDataSource.h>

@interface MSTrackListDataSource : MSStructuredPageTableDataSource
-(id)headerViewForSection:(int)arg1 ;
-(int)tableViewStyle;
-(BOOL)canShowPreviewForItem:(id)arg1 ;
-(id)_stylesheetString;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)placeholderCellForIndexPath:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(void)configurePlaceholderCell:(id)arg1 forIndexPath:(id)arg2 ;
-(BOOL)canDoubleTapIndexPath:(id)arg1 ;
-(float)heightForPlaceholderCells;
-(void)reloadCellContexts;
-(Class)cellConfigurationClassForItem:(id)arg1 ;
-(id)cellConfigurationForIndex:(int)arg1 item:(id)arg2 ;
-(BOOL)canShowItemOfferButtonForItem:(id)arg1 ;
@end

