/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIStatusBarTinting.h>

@class UIColor, _UIHostedWindowHostingHandle;

@interface _UIRemoteView : UIView <UIStatusBarTinting> {

	BOOL _actsAsTintView;
	UIColor* _statusBarTintColor;
	_UIHostedWindowHostingHandle* _hostedWindowHostingHandle;
	/*^block*/ id _tintColorDidChangeHandler;

}

@property (nonatomic,retain) _UIHostedWindowHostingHandle * hostedWindowHostingHandle;                  //@synthesize hostedWindowHostingHandle=_hostedWindowHostingHandle - In the implementation block
@property (assign,setter=_setActsAsTintView:,nonatomic) BOOL _actsAsTintView;                           //@synthesize actsAsTintView=_actsAsTintView - In the implementation block
@property (setter=_setStatusBarTintColor:,nonatomic,retain) UIColor * _statusBarTintColor;              //@synthesize statusBarTintColor=_statusBarTintColor - In the implementation block
@property (nonatomic,copy) id tintColorDidChangeHandler;                                                //@synthesize tintColorDidChangeHandler=_tintColorDidChangeHandler - In the implementation block
+(Class)layerClass;
+(id)viewWithHostedWindowHostingHandle:(id)arg1 ;
+(id)viewWithRemoteContextID:(unsigned)arg1 ;
-(void)dealloc;
-(id)_statusBarTintColor;
-(void)tintColorDidChange;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)_setStatusBarTintColor:(id)arg1 ;
-(id)hostedWindowHostingHandle;
-(void)setHostedWindowHostingHandle:(id)arg1 ;
-(void)_setActsAsTintView:(BOOL)arg1 ;
-(void)setTintColorDidChangeHandler:(/*^block*/ id)arg1 ;
-(void)_setStatusBarTintColor:(id)arg1 duration:(double)arg2 ;
-(void)setContextID:(unsigned)arg1 ;
-(void)applyTransformUndoingRemoteRootLayerTransform:(CGAffineTransform)arg1 frame:(CGRect)arg2 ;
-(/*^block*/ id)tintColorDidChangeHandler;
-(BOOL)_actsAsTintView;
@end

