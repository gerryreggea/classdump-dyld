/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Setup/Setup-Structs.h>
#import <Setup/BuddyPasscodeInput.h>
#import <Preferences/PSPasscodeFieldDelegate.h>

@class PSPasscodeField, UIGestureRecognizer;

@interface BuddySimplePasscodeInputView : BuddyPasscodeInput <PSPasscodeFieldDelegate> {

	PSPasscodeField* _passcodeField;
	UIGestureRecognizer* _tapRecognizer;

}

@property (nonatomic,retain) PSPasscodeField * passcodeField;                  //@synthesize passcodeField=_passcodeField - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * tapRecognizer;              //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
-(void)passcodeFieldTapped;
-(id)tapRecognizer;
-(void)setTapRecognizer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setPasscodeField:(id)arg1 ;
-(id)passcodeField;
-(void)disable;
-(void)passcodeField:(id)arg1 enteredPasscode:(id)arg2 ;
-(void)setPasscode:(id)arg1 ;
-(id)passcode;
@end
