/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartBodyLayoutItem.h>

@class TSCHPieBodyLayoutItemPathCache;

@interface TSCHChartPieBodyLayoutItem : TSCHChartBodyLayoutItem {

	TSCHPieBodyLayoutItemPathCache* mPathCache;

}

@property (retain) TSCHPieBodyLayoutItemPathCache * p_pathCache; 
-(CGRect)calcDrawingRect;
-(id)renderersWithRep:(id)arg1 ;
-(CGAffineTransform)transformForRenderingLabelForSeries:(unsigned)arg1 outElementSize:(CGSize*)arg2 outClipRect:(CGRect*)arg3 ;
-(CGRect)calcOverhangRect;
-(CGSize)bodySizeForOverhangSize:(CGSize)arg1 ;
-(void)p_collectMaxRatio:(float*)arg1 maxLabelOverhang:(float*)arg2 maxWedgeExplosion:(float*)arg3 maxComboExplosion:(float*)arg4 ;
-(CGSize)overhangSizeForBodySize:(CGSize)arg1 ;
-(id)pathCacheForSeries:(unsigned)arg1 ;
-(id)p_pathCache;
-(void)setP_pathCache:(id)arg1 ;
-(CGAffineTransform)transformForRenderingElementForSeries:(unsigned)arg1 outElementSize:(CGSize*)arg2 outClipRect:(CGRect*)arg3 ;
-(CGPathRef)pathOfElementForSeries:(unsigned)arg1 outWedgeCenterPoint:(CGPoint*)arg2 ;
-(id)knobsOfElementForSeries:(unsigned)arg1 ;
-(void)dealloc;
-(void)setLayoutSize:(CGSize)arg1 ;
@end

