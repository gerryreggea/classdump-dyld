/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptViewController, SUScriptWindowContext, SUScriptCanvasFunction, SUScriptFunction, NSNumber, WebScriptObject, NSString;

@interface SUScriptWindow : SUScriptObject {

	SUScriptViewController* _backViewController;
	BOOL _canSwipeToDismiss;
	SUScriptWindowContext* _context;
	SUScriptViewController* _frontViewController;
	id _height;
	SUScriptCanvasFunction* _maskFunction;
	id _shadowOpacity;
	id _shadowRadius;
	SUScriptFunction* _shouldDismissFunction;
	id _width;

}

@property (readonly) SUScriptWindowContext * context;                                  //@synthesize context=_context - In the implementation block
@property (copy) id canSwipeToDismiss; 
@property (retain) SUScriptViewController * backViewController; 
@property (retain) SUScriptViewController * frontViewController; 
@property (retain) NSNumber * height; 
@property (retain) WebScriptObject * maskFunction; 
@property (retain) NSNumber * shadowOpacity; 
@property (retain) NSNumber * shadowRadius; 
@property (retain) WebScriptObject * shouldDismissFunction; 
@property (readonly) NSString * style; 
@property (retain) NSNumber * width; 
@property (readonly) SUScriptViewController * windowParentViewController; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(void)dismissWindowsWithOptions:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)style;
-(id)context;
-(id)width;
-(void)setWidth:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id)height;
-(void)show:(id)arg1 ;
-(void)setShadowOpacity:(id)arg1 ;
-(void)setShadowRadius:(id)arg1 ;
-(void)setHeight:(id)arg1 ;
-(id)shadowRadius;
-(id)shadowOpacity;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setBackViewController:(id)arg1 ;
-(void)_registerForOverlayNotifications;
-(id)_copySafeTransitionOptionsFromOptions:(id)arg1 ;
-(id)_backgroundViewController:(BOOL)arg1 ;
-(id)_overlayViewController:(BOOL)arg1 ;
-(id)_newOverlayTransitionWithOptions:(id)arg1 ;
-(void)setCanSwipeToDismiss:(id)arg1 ;
-(void)setFrontViewController:(id)arg1 ;
-(void)setShouldDismissFunction:(id)arg1 ;
-(id)backViewController;
-(id)canSwipeToDismiss;
-(id)frontViewController;
-(CGSize)_overlaySize;
-(id)shouldDismissFunction;
-(void)_overlayDidDismissNotification:(id)arg1 ;
-(void)_overlayDidFlipNotification:(id)arg1 ;
-(void)_overlayDidShowNotification:(id)arg1 ;
-(void)dismiss:(id)arg1 ;
-(void)flip:(id)arg1 ;
-(id)maskFunction;
-(void)setMaskFunction:(id)arg1 ;
-(id)windowParentViewController;
@end

