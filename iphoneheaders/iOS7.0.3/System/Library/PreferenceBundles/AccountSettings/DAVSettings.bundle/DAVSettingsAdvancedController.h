/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/DAVSettings.bundle/DAVSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSListController.h>

@class DAAccount, NSString, DAVSettingsAccountsUIController;

@interface DAVSettingsAdvancedController : PSListController {

	DAAccount* _account;
	NSString* _placeHolder;
	BOOL _isReloadingProperties;
	DAVSettingsAccountsUIController* _accountController;

}
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountBooleanPropertyWithSpecifier:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountPropertyWithSpecifier:(id)arg1 ;
-(id)specifiers;
@end
