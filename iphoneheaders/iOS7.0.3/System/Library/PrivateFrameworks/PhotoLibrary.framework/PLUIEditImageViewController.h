/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PLUIImageViewController.h>

@interface PLUIEditImageViewController : PLUIImageViewController {

	id _delegate;
	int _saveOptions;
	int _mode;

}

@property (assign,nonatomic) id delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int mode;                 //@synthesize mode=_mode - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(id)photo;
-(id)imageTile;
-(void)cropOverlayWasCancelled:(id)arg1 ;
-(void)cropOverlayWasOKed:(id)arg1 ;
-(int)cropOverlayMode;
-(unsigned)_contentAutoresizingMask;
-(unsigned)_tileAutoresizingMask;
-(void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2 ;
-(void)setImageSavingOptions:(int)arg1 ;
-(int)saveOptions;
-(int)imageFormat;
-(id)initWithPhoto:(id)arg1 ;
@end
