/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKAnchorContext : NSObject {

	shared_ptr<vk::AnchorContext>* _anchorContext;
	shared_ptr<vk::AnchorFactory>* _anchorFactory;

}
-(id)init;
-(id).cxx_construct;
-(shared_ptr<vk::AnchorContext>*)anchorContext;
-(void)setMercatorTerrainHeightCache:(id)arg1 ;
-(id)initMercator;
-(BOOL)isMercator;
-(id)newAnchorAtCoordinate:(SCD_Struct_VK61)arg1 followsTerrain:(BOOL)arg2 ;
-(id)initWithAnchorContext:(AnchorContext*)arg1 ;
-(shared_ptr<vk::AnchorFactory>*)anchorFactory;
-(id)initGeocentricWithCache:(id)arg1 ;
-(void).cxx_destruct;
@end
