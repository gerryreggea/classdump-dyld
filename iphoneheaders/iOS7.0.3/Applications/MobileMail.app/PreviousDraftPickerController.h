/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <MobileMail/MessageMiniMallObserver.h>

@class MessageMiniMall, PreviousDraftPickerHeaderView;

@interface PreviousDraftPickerController : UITableViewController <MessageMiniMallObserver> {

	/*^block*/ id _actionBlock;
	MessageMiniMall* _mall;
	PreviousDraftPickerHeaderView* _headerView;

}
-(void)pulledToRefresh:(id)arg1 ;
-(void)miniMallMessageCountChanged:(id)arg1 ;
-(void)miniMallMessageAtIndexChanged:(id)arg1 ;
-(void)miniMallStartFetch:(id)arg1 ;
-(void)miniMallCurrentMessageRemoved:(id)arg1 ;
-(void)miniMallDidFinishSearch:(id)arg1 ;
-(void)miniMallDidLoadMessages:(id)arg1 ;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(float)draftRowHeight;
-(void)updateContentSizeForViewInPopoverAllowShrink:(BOOL)arg1 ;
-(void)_monitorActivityDidEnd:(id)arg1 ;
-(void)_cancel:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setActionBlock:(/*^block*/ id)arg1 ;
@end

