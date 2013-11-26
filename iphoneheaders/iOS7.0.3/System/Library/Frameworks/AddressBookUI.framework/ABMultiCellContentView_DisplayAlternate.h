/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:21 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABMultiCellContentView_Rows.h>

@class UILabel, NSString;

@interface ABMultiCellContentView_DisplayAlternate : ABMultiCellContentView_Rows {

	UILabel* _displayLabel;

}

@property (nonatomic,readonly) NSString * displayText; 
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6 ;
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6 includeRows:(BOOL)arg7 ;
+(CGRect)displayLabelFrameForValueViewFrame:(CGRect)arg1 styleProvider:(id)arg2 whenEditing:(BOOL)arg3 ;
+(id)displayLabelForReuse;
+(void)setupDisplayLabel:(id)arg1 withPropertyGroup:(id)arg2 styleProvider:(id)arg3 ;
+(void)numberOfLines:(int*)arg1 lineBreakMode:(int*)arg2 forDisplayLabelWithPropertyGroup:(id)arg3 styleProvider:(id)arg4 ;
-(void)reloadFromModel;
-(void)setAbCellStyle:(int)arg1 ;
-(void)updateSubviewsForNewStateAnimated:(BOOL)arg1 ;
-(void)reloadIncludingRows:(BOOL)arg1 includingDisplayView:(BOOL)arg2 ;
-(void)reloadFromModelIncludingRows:(BOOL)arg1 ;
-(void)reloadDisplayText;
-(CGRect)valueTextRect;
-(id)displayText;
-(void)reload;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
