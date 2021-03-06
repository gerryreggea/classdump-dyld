/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIScrollView.h>

@class UIView;

@interface SKUIProductPagePlaceholderScrollView : UIScrollView {

	UIView* _placeholderView;
	float _offset;
	BOOL _isPad;

}

@property (assign,nonatomic) BOOL isPad;                            //@synthesize isPad=_isPad - In the implementation block
@property (nonatomic,retain) UIView * placeholderView;              //@synthesize placeholderView=_placeholderView - In the implementation block
@property (assign,nonatomic) float offset;                          //@synthesize offset=_offset - In the implementation block
-(void)setPlaceholderView:(id)arg1 ;
-(id)placeholderView;
-(void)layoutSubviews;
-(void)setOffset:(float)arg1 ;
-(float)offset;
-(void)setIsPad:(BOOL)arg1 ;
-(BOOL)isPad;
-(void).cxx_destruct;
@end

