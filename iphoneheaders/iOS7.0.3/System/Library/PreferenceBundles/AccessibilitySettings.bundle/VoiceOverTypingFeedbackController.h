/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:06:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSListController.h>

@interface VoiceOverTypingFeedbackController : PSListController {

	int _optionSoftware;
	int _optionHardware;
	int _swSelectedRow;
	int _hwSelectedRow;

}
-(int)feedbackTypeForString:(id)arg1 ;
-(int)rowForTypingFeedbackOption:(int)arg1 isSoftware:(BOOL)arg2 ;
-(id)specifierForIndexPath:(id)arg1 ;
-(void)_updateSelectedRows;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
@end
