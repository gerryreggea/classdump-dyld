/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AXHearingAidSupport/AXHearingAidSupport-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIFont, UIImage;

@interface AXGradientLabel : UIView {

	NSString* _text;
	UIFont* _font;
	UIImage* _gradient;
	CGColorRef _patternColor;

}

@property (nonatomic,retain) NSString * text;                 //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * font;                   //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIImage * gradient;              //@synthesize gradient=_gradient - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGColorRef)_patternColor;
-(id)text;
-(void)setFont:(id)arg1 ;
-(id)font;
-(void)setText:(id)arg1 ;
-(void)setGradient:(id)arg1 ;
-(id)gradient;
@end

