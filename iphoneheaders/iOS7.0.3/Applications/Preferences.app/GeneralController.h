/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSTimer, TVOutManager, PSSpecifier;

@interface GeneralController : PSListController {

	NSArray* _autoLockValues;
	NSDictionary* _autoLockTitleDictionary;
	NSMutableDictionary* _localizedAutoLockTitleDictionary;
	NSTimer* _usageTimer;
	TVOutManager* _tvOutManager;
	PSSpecifier* _tvOutSpecifier;
	PSSpecifier* _siriSpecifier;

}
-(void)updateAutoLockSpecifier;
-(void)_localizeAutoLockTitles;
-(void)_setUseSwitchForOrientationLockWithSpecifier:(id)arg1 ;
-(void)updateAssistantSpecifiers;
-(void)profileNotification:(id)arg1 ;
-(void)handleTVOutChange;
-(id)screenLock:(id)arg1 ;
-(void)setScreenLock:(id)arg1 specifier:(id)arg2 ;
-(id)passcodeLockEnabled:(id)arg1 ;
-(id)parentalControlsEnabled:(id)arg1 ;
-(id)locksAndUnlocksWithCase:(id)arg1 ;
-(void)setLocksAndUnlocksWithCase:(id)arg1 specifier:(id)arg2 ;
-(id)EDGEEnabled:(id)arg1 ;
-(void)enableEdge:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)handleURL:(id)arg1 ;
-(id)specifiers;
-(void)didUnlock;
-(void)didAcceptEnteredPIN:(id)arg1 ;
@end

