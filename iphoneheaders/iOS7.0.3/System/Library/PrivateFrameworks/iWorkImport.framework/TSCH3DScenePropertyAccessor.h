/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCH3DScene;

@interface TSCH3DScenePropertyAccessor : NSObject <TSCHUnretainedParent> {

	TSCH3DScene* mScene;

}

@property (nonatomic,readonly) TSCH3DScene * scene; 
+(id)accessorWithScene:(id)arg1 ;
-(void)clearParent;
-(id)initWithScene:(id)arg1 ;
-(id)scene;
-(void)dealloc;
@end

