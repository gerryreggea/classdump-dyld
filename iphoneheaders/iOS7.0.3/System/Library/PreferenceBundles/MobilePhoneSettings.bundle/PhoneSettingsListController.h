/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSListController.h>

@interface PhoneSettingsListController : PSListController
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)bundle;
-(id)setControlEnabled:(BOOL)arg1 atIndex:(unsigned)arg2 ;
-(void)simRemoved:(id)arg1 ;
-(void)updateCellStates;
-(void)pushController:(Class)arg1 specifier:(id)arg2 ;
-(id)sheetSpecifierWithTitle:(id)arg1 controller:(Class)arg2 detail:(Class)arg3 ;
-(id)setCellEnabled:(BOOL)arg1 atIndex:(unsigned)arg2 ;
-(id)setCellLoading:(BOOL)arg1 atIndex:(unsigned)arg2 ;
-(id)specifiers;
@end
