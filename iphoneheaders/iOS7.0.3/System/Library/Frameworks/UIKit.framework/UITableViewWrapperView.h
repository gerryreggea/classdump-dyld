/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:52 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSArray;

@interface UITableViewWrapperView : UIView {

	NSMutableArray* _stuckToBackViews;

}

@property (nonatomic,readonly) NSArray * stuckToBackViews;              //@synthesize stuckToBackViews=_stuckToBackViews - In the implementation block
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)_stickViewToBack:(id)arg1 ;
-(void)_unstickView:(id)arg1 ;
-(id)stuckToBackViews;
@end
