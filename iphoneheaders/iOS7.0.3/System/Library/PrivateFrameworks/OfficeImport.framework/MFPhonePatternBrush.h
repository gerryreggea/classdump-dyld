/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/MFPhoneBrush.h>

@class MFPhoneBitmap;

@interface MFPhonePatternBrush : MFPhoneBrush {

	MFPhoneBitmap* m_pattern;
	BOOL m_usePaletteForBilevel;

}
+(id)patternBrushWithBitmap:(id)arg1 usePaletteForBilevel:(BOOL)arg2 ;
-(void)dealloc;
-(void)fillPath:(id)arg1 :(id)arg2 ;
-(id)initWithBitmap:(id)arg1 usePaletteForBilevel:(BOOL)arg2 ;
@end
