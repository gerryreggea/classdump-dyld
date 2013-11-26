/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:05 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIImageView.h>

@class UIImage, UIImageView;

@interface TPLegacyLCDBar : UIImageView {

	UIImage* _barBackground;
	UIImageView* _shadowView;

}

@property (nonatomic,retain) UIImage * barBackground;              //@synthesize barBackground=_barBackground - In the implementation block
@property (readonly) UIImageView * shadowView;                     //@synthesize shadowView=_shadowView - In the implementation block
+(float)defaultHeightForOrientation:(int)arg1 ;
+(id)backgroundImage;
+(id)shadowImage;
+(float)defaultHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)shadowView;
-(id)initWithDefaultSize;
-(void)setOrientation:(int)arg1 ;
-(id)initWithDefaultSizeForOrientation:(int)arg1 ;
-(void)setOrientation:(int)arg1 updateFrame:(BOOL)arg2 ;
-(CGRect)contentStretchRect;
-(id)barBackground;
-(void)setBarBackground:(id)arg1 ;
@end
