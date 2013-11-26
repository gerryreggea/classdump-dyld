/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <CoreText/CoreText-Structs.h>
@interface CTGlyphStorageInterface : NSObject {

	long _glyphCount;
	unsigned short* _glyphs;
	CGSize* _advances;
	unsigned* _props;
	int* _stringIndexes;
	int* _absorbedCounts;

}
-(CTGlyphStorageRef)createCopy:(SCD_Struct_CT0)arg1 ;
-(void)getCustomAdvance:(CGSize*)arg1 forIndex:(long)arg2 ;
-(void)setGlyphID:(unsigned short)arg1 forIndex:(long)arg2 ;
-(void)setAdvance:(CGSize)arg1 forIndex:(long)arg2 ;
-(void)setProps:(unsigned)arg1 forIndex:(long)arg2 ;
-(void)setAbsorbedCount:(long)arg1 forIndex:(long)arg2 ;
-(void)setStringIndex:(long)arg1 forIndex:(long)arg2 ;
-(void)swapGlyph:(long)arg1 withIndex:(long)arg2 ;
-(void)moveGlyphsTo:(long)arg1 from:(SCD_Struct_CT0)arg2 ;
-(void)insertGlyphs:(SCD_Struct_CT0)arg1 ;
-(void)initGlyphStack:(long)arg1 ;
-(void)pushGlyph:(long)arg1 ;
-(void)popGlyph:(long)arg1 ;
-(void)disposeGlyphStack;
@end
