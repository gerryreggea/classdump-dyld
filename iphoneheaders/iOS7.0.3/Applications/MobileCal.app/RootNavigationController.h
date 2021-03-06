/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UINavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIWindowDelegate.h>

@class _UINavigationControllerPalette, UIBarButtonItem, PaletteView, CalendarModel;

@interface RootNavigationController : UINavigationController <UINavigationControllerDelegate, UIPopoverControllerDelegate, UIWindowDelegate> {

	_UINavigationControllerPalette* _palette;
	id _backButtonViewController;
	BOOL _showingOverriddenToolbarItems;
	UIBarButtonItem* _searchBarButtonItem;
	UIBarButtonItem* _todayBarButtonItem;
	UIBarButtonItem* _inboxBarButtonItem;
	UIBarButtonItem* _calendarsBarButtonItem;
	UIBarButtonItem* _addEventBarButtonItem;
	PaletteView* _paletteView;
	UIBarButtonItem* _leftPaddingItem;
	UIBarButtonItem* _rightPaddingItem;
	CalendarModel* _model;
	unsigned _numberOfNotifications;

}

@property (nonatomic,retain) UIBarButtonItem * searchBarButtonItem;                 //@synthesize searchBarButtonItem=_searchBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * todayBarButtonItem;                  //@synthesize todayBarButtonItem=_todayBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * inboxBarButtonItem;                  //@synthesize inboxBarButtonItem=_inboxBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * calendarsBarButtonItem;              //@synthesize calendarsBarButtonItem=_calendarsBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * addEventBarButtonItem;               //@synthesize addEventBarButtonItem=_addEventBarButtonItem - In the implementation block
@property (nonatomic,retain) PaletteView * paletteView;                             //@synthesize paletteView=_paletteView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * leftPaddingItem;                     //@synthesize leftPaddingItem=_leftPaddingItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * rightPaddingItem;                    //@synthesize rightPaddingItem=_rightPaddingItem - In the implementation block
@property (nonatomic,retain) CalendarModel * model;                                 //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) BOOL showingOverriddenToolbarItems;                    //@synthesize showingOverriddenToolbarItems=_showingOverriddenToolbarItems - In the implementation block
@property (assign,nonatomic) unsigned numberOfNotifications;                        //@synthesize numberOfNotifications=_numberOfNotifications - In the implementation block
+(id)_inboxTitleForNotificationCount:(unsigned)arg1 ;
-(int)currentViewType;
-(void)updateBackButtonToDate:(id)arg1 ;
-(id)bestDateForNewEvent;
-(id)topMainViewController;
-(id)paletteView;
-(id)showSearchAnimated:(BOOL)arg1 ;
-(void)_notificationCountChanged:(id)arg1 ;
-(void)_calendarsChanged:(id)arg1 ;
-(void)setNumberOfNotifications:(unsigned)arg1 ;
-(BOOL)showingOverriddenToolbarItems;
-(id)inboxBarButtonItem;
-(void)centerCalendarsButton;
-(void)_updateAddEventButtonEnabledness;
-(id)addEventBarButtonItem;
-(id)searchBarButtonItem;
-(void)searchPressed;
-(void)addEventPressed;
-(void)setSearchBarButtonItem:(id)arg1 ;
-(void)setAddEventBarButtonItem:(id)arg1 ;
-(id)todayBarButtonItem;
-(void)todayPressed;
-(void)setTodayBarButtonItem:(id)arg1 ;
-(id)calendarsBarButtonItem;
-(void)calendarsPressed;
-(void)setCalendarsBarButtonItem:(id)arg1 ;
-(unsigned)numberOfNotifications;
-(void)inboxPressed;
-(void)setInboxBarButtonItem:(id)arg1 ;
-(void)setLeftPaddingItem:(id)arg1 ;
-(void)setRightPaddingItem:(id)arg1 ;
-(id)leftPaddingItem;
-(id)rightPaddingItem;
-(void)setShowingOverriddenToolbarItems:(BOOL)arg1 ;
-(void)_updatePaletteStateWithViewController:(id)arg1 ;
-(void)addNavigationBarButtonItemsWithViewController:(id)arg1 ;
-(void)addToolbarButtonItemsWithViewController:(id)arg1 ;
-(id)initWithRootViewController:(id)arg1 model:(id)arg2 ;
-(void)pushCalendarViewControllerWithViewType:(int)arg1 andDate:(id)arg2 ;
-(id)showInboxAnimated:(BOOL)arg1 ;
-(id)showInboxAnimated:(BOOL)arg1 eventToSelect:(id)arg2 ;
-(void)setPaletteView:(id)arg1 ;
-(void)dealloc;
-(BOOL)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)navigationController:(id)arg1 animatorForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(BOOL)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1 ;
-(id)model;
-(void)setModel:(id)arg1 ;
-(void).cxx_destruct;
@end

