/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImageView, SKUIEditorialCellLayout, UIView, UIImage;

@interface SKUIBrickGridCollectionViewCell : UICollectionViewCell {

	NSString* _accessibilityLabel;
	UIImageView* _brickImageView;
	UIEdgeInsets _contentInsets;
	SKUIEditorialCellLayout* _editorialCellLayout;
	UIView* _editorialContainerView;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;               //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;              //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,retain) UIImage * brickImage; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(void)setAccessibilityLabel:(id)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)applyEditorialLayout:(id)arg1 orientation:(int)arg2 ;
-(void)setBrickImage:(id)arg1 ;
-(id)brickImage;
-(void).cxx_destruct;
@end

