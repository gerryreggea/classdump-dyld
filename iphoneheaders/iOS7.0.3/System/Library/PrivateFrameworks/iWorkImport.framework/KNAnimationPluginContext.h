/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/KNAnimationPluginContext.h>

@protocol KNAnimationPluginContext <NSObject>
@property (nonatomic,readonly) NSArray * textures; 
@property (nonatomic,readonly) unsigned direction; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double percent; 
@property (nonatomic,readonly) KNAnimatedBuild * animatedBuild; 
@property (nonatomic,readonly) NSDictionary * transitionAttributes; 
@property (nonatomic,readonly) NSArray * magicMoveMatches; 
@property (nonatomic,readonly) BOOL isBuild; 
@property (nonatomic,readonly) BOOL isTransition; 
@property (nonatomic,readonly) BOOL isMagicMove; 
@property (nonatomic,readonly) BOOL isFrameRenderer; 
@property (nonatomic,readonly) BOOL isWarmingUp; 
@required
-(BOOL)isMagicMove;
-(id)animatedBuild;
-(BOOL)isFrameRenderer;
-(BOOL)isBuild;
-(BOOL)isTransition;
-(id)transitionAttributes;
-(id)magicMoveMatches;
-(BOOL)isWarmingUp;
-(double)duration;
-(unsigned)direction;
-(id)textures;
-(double)percent;
@end


@class NSArray, KNAnimatedBuild, NSDictionary;

@interface KNAnimationPluginContext : NSObject <KNAnimationPluginContext> {

	BOOL _isWarmingUp;
	KNAnimatedBuild* _animatedBuild;
	NSArray* _magicMoveMatches;
	NSArray* _textures;
	NSDictionary* _transitionAttributes;
	unsigned _direction;
	int _rendererType;
	double _percent;
	double _duration;

}

@property (assign,nonatomic) NSArray * textures;                               //@synthesize textures=_textures - In the implementation block
@property (assign,nonatomic) unsigned direction;                               //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double percent;                                   //@synthesize percent=_percent - In the implementation block
@property (assign,nonatomic) KNAnimatedBuild * animatedBuild;                  //@synthesize animatedBuild=_animatedBuild - In the implementation block
@property (assign,nonatomic) NSDictionary * transitionAttributes;              //@synthesize transitionAttributes=_transitionAttributes - In the implementation block
@property (assign,nonatomic) NSArray * magicMoveMatches;                       //@synthesize magicMoveMatches=_magicMoveMatches - In the implementation block
@property (assign,nonatomic) BOOL isWarmingUp;                                 //@synthesize isWarmingUp=_isWarmingUp - In the implementation block
@property (assign,nonatomic) int rendererType;                                 //@synthesize rendererType=_rendererType - In the implementation block
@property (nonatomic,readonly) BOOL isBuild; 
@property (nonatomic,readonly) BOOL isTransition; 
@property (nonatomic,readonly) BOOL isMagicMove; 
@property (nonatomic,readonly) BOOL isFrameRenderer; 
-(BOOL)isMagicMove;
-(id)animatedBuild;
-(BOOL)isFrameRenderer;
-(BOOL)isBuild;
-(BOOL)isTransition;
-(id)transitionAttributes;
-(id)magicMoveMatches;
-(void)setAnimatedBuild:(id)arg1 ;
-(void)setRendererType:(int)arg1 ;
-(void)setTransitionAttributes:(id)arg1 ;
-(void)setMagicMoveMatches:(id)arg1 ;
-(int)rendererType;
-(BOOL)isWarmingUp;
-(void)setIsWarmingUp:(BOOL)arg1 ;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setDirection:(unsigned)arg1 ;
-(unsigned)direction;
-(void)setTextures:(id)arg1 ;
-(id)textures;
-(double)percent;
-(void)setPercent:(double)arg1 ;
@end

