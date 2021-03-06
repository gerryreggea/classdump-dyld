/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString;

@interface _UITableViewCellBadge : UIView {

	BOOL _isSelected;
	NSString* _text;
	CGSize _textSize;

}

@property (nonatomic,copy) NSString * text;                                //@synthesize text=_text - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize isSelected=_isSelected - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)text;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)setText:(id)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)_sizeToFit;
-(void)setIsSelected:(BOOL)arg1 ;
@end

