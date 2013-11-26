/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:21 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABSectionListHeaderView.h>

@class _UIBackdropView, UIView;

@interface ABSectionListVibrantHeaderView : ABSectionListHeaderView {

	_UIBackdropView* _backdrop;
	UIView* _plusDView;
	BOOL _wantsPlusDLayer;

}

@property (assign,nonatomic) BOOL wantsPlusDLayer;              //@synthesize wantsPlusDLayer=_wantsPlusDLayer - In the implementation block
-(void)setBackdropGroupName:(id)arg1 ;
-(void)setWantsPlusDLayer:(BOOL)arg1 ;
-(BOOL)wantsPlusDLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFloating:(BOOL)arg1 ;
@end
