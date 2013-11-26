/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Game Center~iphone/Game Center~iphone-Structs.h>
#import <UIKit/UIControl.h>

@class GKLabel, GKColorPalette;

@interface GKBuyButton : UIControl {

	GKLabel* _titleLabel;
	GKColorPalette* _palette;

}

@property (nonatomic,retain) GKLabel * titleLabel;                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) GKColorPalette * palette;              //@synthesize palette=_palette - In the implementation block
-(void)wasPressed;
-(void)wasDepressed;
-(void)setPalette:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(id)titleLabel;
-(void)setTitleLabel:(id)arg1 ;
-(id)palette;
@end
