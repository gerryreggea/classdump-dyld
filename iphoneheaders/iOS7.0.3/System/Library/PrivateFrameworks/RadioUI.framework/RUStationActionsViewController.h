/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <RadioUI/_RUStationTrackInfoViewDelegate.h>
#import <AVFoundation/MCProfileConnectionObserver.h>
#import <StoreKit/SKStoreProductViewControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol RUStationActionsViewControllerDelegate;
@class UILabel, UISwitch, NSArray, RadioStation, NSMutableArray, UITableViewCell, RUStationTuningView, UITableView, UIView, _RUStationTrackInfoView, MPRadioAVItem;

@interface RUStationActionsViewController : UIViewController <_RUStationTrackInfoViewDelegate, MCProfileConnectionObserver, SKStoreProductViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {

	UILabel* _copyrightLabel;
	int _currentAction;
	BOOL _isProfileExplicitContentRestricted;
	UILabel* _navigationTitleLabel;
	UISwitch* _playExplicitTracksSwitch;
	NSArray* _playbackQueue;
	RadioStation* _station;
	NSMutableArray* _stationActionGroups;
	UITableViewCell* _stationTuningCell;
	RUStationTuningView* _stationTuningView;
	UITableView* _tableView;
	UIView* _topShadowView;
	_RUStationTrackInfoView* _trackInfoView;
	MPRadioAVItem* _item;
	<RUStationActionsViewControllerDelegate>* _delegate;

}

@property (nonatomic,readonly) RadioStation * station;                                                //@synthesize station=_station - In the implementation block
@property (nonatomic,readonly) MPRadioAVItem * item;                                                  //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) <RUStationActionsViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)productViewControllerDidFinish:(id)arg1 ;
-(id)station;
-(void)_doneAction:(id)arg1 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)delegate;
-(void)viewDidLayoutSubviews;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(id)item;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)loadView;
-(id)initWithStation:(id)arg1 item:(id)arg2 playbackQueue:(id)arg3 ;
-(void)_radioAuthenticatedAccountIdentifierDidChangeNotification:(id)arg1 ;
-(id)_newShadowViewWithFrame:(CGRect)arg1 ;
-(id)_newSectionHeaderWithFrame:(CGRect)arg1 title:(id)arg2 ;
-(void)_updateAvailableActions;
-(void)_userDefaultExplicitTracksEnabledDidChangeNotification:(id)arg1 ;
-(void)_layoutTopShadowView;
-(void)_updateTableFooterView;
-(void)_showStoreSheetAction:(id)arg1 ;
-(void)_updateIsProfileExplicitContentRestrictedForProfileConnection:(id)arg1 ;
-(int)_stationActionForIndexPath:(id)arg1 ;
-(void)_playExplicitSwitchAction:(id)arg1 ;
-(void)_addDerivedStationUsingArtist:(BOOL)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)trackInfoViewDidTapArtwork:(id)arg1 ;
-(id)_indexPathForStationAction:(int)arg1 ;
-(void).cxx_destruct;
@end

