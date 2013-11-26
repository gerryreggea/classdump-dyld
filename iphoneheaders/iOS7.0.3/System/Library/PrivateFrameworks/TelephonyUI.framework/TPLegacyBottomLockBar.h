/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:04 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/TPLegacyBottomBar.h>

@class NSArray, NSTimer, TPLegacyLockKnobView, UIView, TPLegacyLockTextView, TPLegacyWell, UIImageView;

@interface TPLegacyBottomLockBar : TPLegacyBottomBar {

	NSArray* _labels;
	int _currentLabelIndex;
	NSTimer* _cycleLabelTimer;
	id _delegate;
	id _representedObject;
	TPLegacyLockKnobView* _knobView;
	UIView* _trackArrow;
	TPLegacyLockTextView* _labelView;
	TPLegacyWell* _well;
	float _knobTrackInsetLeft;
	float _fontSize;
	float _deltaFromDefaultLabelWidth;
	UIImageView* _backgroundView;

}
+(CGSize)defaultSize;
+(float)defaultLabelFontSize;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_canDrawContent;
-(void)unlock;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setLabel:(id)arg1 ;
-(void)setFontSize:(float)arg1 ;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(float)fontSize;
-(void)setLabels:(id)arg1 ;
-(id)labelView;
-(void)_setLabel:(id)arg1 ;
-(void)setWellAlpha:(float)arg1 ;
-(void)setSuppressDrawingBackground:(BOOL)arg1 ;
-(id)initForIncomingCallWithFrame:(CGRect)arg1 ;
-(BOOL)allowsTouchTrackingBeyondVerticalThreshold;
-(BOOL)usesBackgroundImage;
-(id)wellImageName;
-(float)defaultWellWidth;
-(id)_knobImageForColor:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 knobImage:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 knobColor:(int)arg2 ;
-(void)startCyclingLabels;
-(void)stopCyclingLabels;
-(BOOL)_shouldStopLabelAnimationForGrab;
-(void)_adjustLabelOrigin;
-(void)cycleToNextLabel;
-(void)cycleToLabelAtIndex:(int)arg1 ;
-(void)finishedCyclingLabelOut;
-(void)downInKnob;
-(void)upInKnob;
-(int)currentLabelIndex;
-(void)knobDragged:(float)arg1 ;
-(void)slideBack:(BOOL)arg1 ;
-(void)relock;
-(void)freezeKnobInUnlockedPosition;
-(void)setTextAlpha:(float)arg1 ;
-(id)knob;
-(float)knobTrackInsetLeft;
-(float)knobTrackInsetRight;
-(id)well;
-(void)setKnobWellWidth:(float)arg1 ;
-(void)setKnobWellWidthToDefault;
-(void)setKnobColor:(int)arg1 ;
-(void)setKnobImage:(id)arg1 ;
-(void)_adjustKnobOrigin;
-(float)_calcKnobYOffset;
-(id)labels;
@end
