/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSTMergeRegionMap;

@interface TSTMergeRegionMapIterator : NSObject {

	TSTMergeRegionMap* mMergeRegionMap;
	hash_map_iterator<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> >* mMergeRegionIterator;

}
-(SCD_Struct_TS497)nextMergeRegion;
-(BOOL)hasNextMergeRegion;
-(id)initWithMergeRegionMap:(id)arg1 ;
-(void)dealloc;
-(id).cxx_construct;
-(void)reset;
@end
