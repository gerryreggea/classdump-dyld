/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreText/CoreText-Structs.h>
#import <CoreText/_CTGlyphStorage.h>

@interface _CTNativeGlyphStorage : _CTGlyphStorage {

	const int* _attachCounts;
	unsigned _retainCount;
	GlyphStack* _stack;
	long _capacity;
	void* _preallocatedStorage;

}
+(id)newWithCount:(long)arg1 ;
-(void)setProps:(unsigned)arg1 atIndex:(long)arg2 ;
-(void)setAttachmentCount:(long)arg1 atIndex:(long)arg2 ;
-(void)setStringIndex:(long)arg1 atIndex:(long)arg2 ;
-(long)attachmentCountAtIndex:(long)arg1 ;
-(void)popGlyphAtIndex:(long)arg1 ;
-(void)pushGlyphAtIndex:(long)arg1 ;
-(void)initGlyphStackWithCapacity:(long)arg1 ;
-(void)puntStringIndicesInRange:(SCD_Struct_CT0)arg1 by:(long)arg2 ;
-(id)initWithCount:(long)arg1 ;
-(id)copyWithRange:(SCD_Struct_CT0)arg1 ;
-(void)setGlyph:(unsigned short)arg1 atIndex:(long)arg2 ;
-(void)setAdvance:(CGSize)arg1 atIndex:(long)arg2 ;
-(void)insertGlyphsAtRange:(SCD_Struct_CT0)arg1 ;
-(void)swapGlyphsAtIndex:(long)arg1 withIndex:(long)arg2 ;
-(void)moveGlyphsFromRange:(SCD_Struct_CT0)arg1 toIndex:(long)arg2 ;
-(void)prepareWithCapacity:(long)arg1 preallocated:(bool)arg2 ;
-(void)setCapacity:(long)arg1 ;
-(const int*)stringIndices;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(unsigned)retainCount;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)finalize;
@end

