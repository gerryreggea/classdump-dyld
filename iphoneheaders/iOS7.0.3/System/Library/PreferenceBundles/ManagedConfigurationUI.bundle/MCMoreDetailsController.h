/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class UIImage;

@interface MCMoreDetailsController : PSListController {

	UIImage* _iconImage;

}

@property (nonatomic,retain) UIImage * iconImage;              //@synthesize iconImage=_iconImage - In the implementation block
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)iconImage;
-(id)_specifierForPayload:(id)arg1 ;
-(void)setIconImage:(id)arg1 ;
-(id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 ;
-(void).cxx_destruct;
@end

