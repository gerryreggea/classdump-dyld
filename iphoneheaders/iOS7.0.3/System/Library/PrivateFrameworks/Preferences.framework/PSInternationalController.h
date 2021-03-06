/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSListController.h>

@interface PSInternationalController : PSListController {

	CFLocaleRef _locale;
	double _sampleTime;

}
+(void)setLocale:(id)arg1 ;
+(void)setLanguage:(id)arg1 ;
+(id)voiceControlLanguageIdentifiers;
+(id)titlesForLanguageIdentifiers:(id)arg1 ;
+(id)shortTitlesForLanguageIdentifiers:(id)arg1 ;
+(id)capitalizeFirstPartOfCountry:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)formattedDate:(id)arg1 ;
-(id)specifiers;
-(void)reloadSpecifiers;
-(void)setLanguage:(id)arg1 specifier:(id)arg2 ;
-(id)language:(id)arg1 ;
-(void)setLocale:(id)arg1 specifier:(id)arg2 ;
-(id)locale:(id)arg1 ;
-(void)localeChangedAction;
-(void)reloadLocale;
-(id)localizedComponent:(id)arg1 forDictionary:(id)arg2 ;
-(id)defaultCalendarForLocale:(id)arg1 ;
-(id)formattedTime:(id)arg1 ;
-(id)formattedPhoneNumber:(id)arg1 ;
-(void)_loadLocaleIfNeeded;
-(void)showLanguageSheet:(id)arg1 ;
-(id)localizedLanguage:(id)arg1 ;
-(void)setVoiceControlLanguage:(id)arg1 specifier:(id)arg2 ;
-(id)voiceControlLanguage:(id)arg1 ;
-(void)setCalendar:(id)arg1 specifier:(id)arg2 ;
-(id)calendar:(id)arg1 ;
@end

