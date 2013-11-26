/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIColor;

@interface PLCameraOverlayTextLabelView : UIView {

	NSString* _text;
	float _textSize;
	float _textStrokeWidth;
	UIColor* _textColor;

}

@property (nonatomic,retain) NSString * text;                    //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) float textStrokeWidth;              //@synthesize textStrokeWidth=_textStrokeWidth - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                //@synthesize textColor=_textColor - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)text;
-(void)setTextColor:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(id)textColor;
-(id)initWithText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 text:(id)arg2 textSize:(float)arg3 ;
-(id)initWithText:(id)arg1 textSize:(float)arg2 ;
-(float)textStrokeWidth;
-(void)setTextStrokeWidth:(float)arg1 ;
@end
