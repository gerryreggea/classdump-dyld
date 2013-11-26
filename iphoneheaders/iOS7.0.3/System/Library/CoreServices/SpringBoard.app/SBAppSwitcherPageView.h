/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@protocol SBAppSwitcherPageContentView;
@class UIView;

@interface SBAppSwitcherPageView : UIView {

	UIView* _shadowView;
	UIView* _hitTestBlocker;
	UIView<SBAppSwitcherPageContentView>* _view;
	UIView* _overlayView;
	int _orientation;

}

@property (nonatomic,retain) UIView<SBAppSwitcherPageContentView> * view;              //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UIView * overlay;                                         //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic) int orientation;                                          //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) float shadowAlpha; 
+(CGSize)sizeForOrientation:(int)arg1 ;
+(float)_edgeBorderForOrientation:(int)arg1 ;
+(float)scale;
-(void)setView:(id)arg1 animated:(BOOL)arg2 ;
-(CGAffineTransform)_transformForScale;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)view;
-(void)invalidate;
-(int)orientation;
-(void)setView:(id)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(id)overlay;
-(void)setOverlay:(id)arg1 ;
-(void)setShadowAlpha:(float)arg1 ;
-(float)shadowAlpha;
-(CGRect)_viewFrame;
-(void)setShadowEnabled:(BOOL)arg1 ;
-(CGAffineTransform)_transformForOrientation:(int)arg1 ;
@end
