/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VUSocialUpload/VUSocialUpload-Structs.h>
#import <Social/SLComposeServiceViewController.h>
#import <VUSocialUpload/VimeoComposeOptionViewDelegate.h>

@class UIImageView, SLSheetAction, VimeoDetailsController, ACAccountStore, ACAccount, NSString, NSArray;

@interface VimeoComposeViewController : SLComposeServiceViewController <VimeoComposeOptionViewDelegate> {

	UIImageView* _logoView;
	SLSheetAction* _detailsAction;
	VimeoDetailsController* _detailsController;
	ACAccountStore* _accountStore;
	ACAccount* _vimeoAccount;
	NSString* _description;
	NSArray* _tags;
	int _videoSize;
	int _privacySettings;

}

@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) ACAccount * vimeoAccount;                   //@synthesize vimeoAccount=_vimeoAccount - In the implementation block
@property (nonatomic,retain) NSString * description;                     //@synthesize description=_description - In the implementation block
@property (nonatomic,retain) NSArray * tags;                             //@synthesize tags=_tags - In the implementation block
@property (assign,nonatomic) int videoSize;                              //@synthesize videoSize=_videoSize - In the implementation block
@property (assign,nonatomic) int privacySettings;                        //@synthesize privacySettings=_privacySettings - In the implementation block
-(void)setAccountStore:(id)arg1 ;
-(id)accountStore;
-(BOOL)validateText:(id)arg1 ;
-(int)privacySettings;
-(void)setPrivacySettings:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)send;
-(void)setTags:(id)arg1 ;
-(id)tags;
-(id)sheetActions;
-(void)setDescription:(id)arg1 ;
-(void)setVimeoAccount:(id)arg1 ;
-(int)videoSize;
-(void)setVideoSize:(int)arg1 ;
-(id)vimeoAccount;
-(void)vimeoComposeOptionsViewDidFinish:(id)arg1 ;
@end

