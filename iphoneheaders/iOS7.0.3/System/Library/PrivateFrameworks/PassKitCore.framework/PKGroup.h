/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol PKGroupDelegate;
@class PKCatalogGroup, NSMutableDictionary, NSNumber;

@interface PKGroup : NSObject {

	PKCatalogGroup* _catalogGroup;
	NSMutableDictionary* _passesByUniqueID;
	BOOL _local;
	<PKGroupDelegate>* _delegate;
	unsigned _frontmostPassIndex;

}

@property (assign,nonatomic) <PKGroupDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned frontmostPassIndex;               //@synthesize frontmostPassIndex=_frontmostPassIndex - In the implementation block
@property (nonatomic,readonly) NSNumber * groupID; 
@property (assign,getter=isLocal,nonatomic) BOOL local;                 //@synthesize local=_local - In the implementation block
-(id)groupID;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(id)passWithUniqueID:(id)arg1 ;
-(void)_updatePass:(id)arg1 notify:(BOOL)arg2 ;
-(void)_moveUniqueID:(id)arg1 toIndex:(unsigned)arg2 notify:(BOOL)arg3 ;
-(void)_insertPass:(id)arg1 atIndex:(unsigned)arg2 notify:(BOOL)arg3 ;
-(void)_removeUniqueID:(id)arg1 notify:(BOOL)arg2 ;
-(unsigned)_indexOfUniqueID:(id)arg1 ;
-(unsigned)passCount;
-(id)passAtIndex:(unsigned)arg1 ;
-(unsigned)indexForPassUniqueID:(id)arg1 ;
-(id)initWithCatalogGroup:(id)arg1 passes:(id)arg2 ;
-(void)updateWithCatalogGroup:(id)arg1 passes:(id)arg2 notify:(BOOL)arg3 ;
-(id)copyCatalogGroup;
-(void)handleUserPassDelete:(id)arg1 ;
-(BOOL)containsPasses;
-(BOOL)containsOnlyUniqueID:(id)arg1 ;
-(void)enumerateUniqueIDsWithHandler:(/*^block*/ id)arg1 ;
-(unsigned)frontmostPassIndex;
-(void)setFrontmostPassIndex:(unsigned)arg1 ;
-(void)setLocal:(BOOL)arg1 ;
-(BOOL)isLocal;
@end

