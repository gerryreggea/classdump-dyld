/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:14 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UITextView.h>

@class GKTextStyle, GKLabel, NSString;

@interface GKTextView : UITextView {

	GKTextStyle* __baseStyle;
	GKTextStyle* _appliedStyle;
	GKLabel* _placeholderLabel;

}

@property (nonatomic,retain) NSString * placeholderText; 
@property (nonatomic,retain) GKTextStyle * _baseStyle;                //@synthesize _baseStyle=__baseStyle - In the implementation block
@property (nonatomic,retain) GKTextStyle * appliedStyle;              //@synthesize appliedStyle=_appliedStyle - In the implementation block
@property (assign,nonatomic) GKLabel * placeholderLabel;              //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
+(void)initialize;
-(void)_UIAppearance_set_baseStyle:(id)arg1 ;
-(void)applyTextStyle:(id)arg1 ;
-(void)set_baseStyle:(id)arg1 ;
-(void)updatePlaceholderVisibility;
-(void)replayAndApplyStyle;
-(void)setPlaceholderLabel:(id)arg1 ;
-(void)_gkTextViewDidChange;
-(id)_baseStyle;
-(id)appliedStyle;
-(void)setAppliedStyle:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setAttributedText:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(id)insertDictationResultPlaceholder;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(id)placeholderLabel;
-(id)placeholderText;
-(void)setPlaceholderText:(id)arg1 ;
@end
