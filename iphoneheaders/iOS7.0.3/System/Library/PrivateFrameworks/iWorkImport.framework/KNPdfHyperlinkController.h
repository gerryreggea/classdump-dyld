/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSAPdfHyperlinkController.h>

@class NSArray;

@interface KNPdfHyperlinkController : TSAPdfHyperlinkController {

	NSArray* mSlides;
	CGRect mCanvasRect;
	int mCurrentSlideNumber;

}

@property (assign,nonatomic) int currentSlideNumber; 
-(CGRect)canvasRect;
-(BOOL)ignoreUrl:(id)arg1 ;
-(BOOL)isDestination:(id)arg1 ;
-(id)destinationFromUrl:(id)arg1 ;
-(int)currentSlideNumber;
-(void)setCurrentSlideNumber:(int)arg1 ;
-(void)addHyperlinksForReps:(id)arg1 targetRect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(id)nameForSlide:(id)arg1 ;
-(id)nameFromIndex:(unsigned)arg1 ;
-(int)getFirstNonHiddenIndex:(unsigned)arg1 delta:(int)arg2 ;
-(id)initWithShow:(id)arg1 ;
-(id)currentSlideName;
-(void)dealloc;
@end
