/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:05:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/ics.qldisplay/ics
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ics/ics-Structs.h>
#import <QuickLook/QLDisplayBundle.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class EKICSPreviewController;

@interface QLICSDisplayBundle : QLDisplayBundle <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	EKICSPreviewController* _icsPreviewViewController;

}
-(void)setIcsPreviewViewController:(id)arg1 ;
-(id)_copyController;
-(void)loadWithHints:(id)arg1 ;
-(int)airPlayMode;
-(void)dealloc;
-(void)loadView;
@end
