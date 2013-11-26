/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/CMMapper.h>

@class WDCharacterRun, WMStyle, NSString;

@interface WMCharacterRunMapper : CMMapper {

	WDCharacterRun* wdCharacterRun;
	WMStyle* mStyle;
	float mFontSizeBumpFactor;
	NSString* mText;
	BOOL mIsDeleted;

}
+(void)addNonCollapsableSpanAt:(id)arg1 withState:(id)arg2 ;
-(void)dealloc;
-(id)initWithText:(id)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(int)defaultTabWidth;
-(id)copyCharacterStyle;
-(unsigned)countAndStripLeadingTabs;
-(void)mapSubstring:(id)arg1 at:(id)arg2 ;
-(void)mapTabs:(unsigned)arg1 at:(id)arg2 afterText:(id)arg3 ;
-(id)initWithWDCharacterRun:(id)arg1 parent:(id)arg2 ;
-(void)map1At:(id)arg1 withState:(id)arg2 ;
-(id)baseStyle;
-(id)boldStyle;
-(BOOL)isDeleted;
@end
