/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSCoding.h>

@class NSString, UIViewController;

@interface UIStoryboardSegueTemplate : NSObject <NSCoding> {

	NSString* _identifier;
	NSString* _segueClassName;
	UIViewController* _viewController;
	NSString* _destinationViewControllerIdentifier;
	BOOL _performOnViewLoad;

}

@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) BOOL performOnViewLoad;                         //@synthesize performOnViewLoad=_performOnViewLoad - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)perform:(id)arg1 ;
-(void)setViewController:(id)arg1 ;
-(id)viewController;
-(BOOL)performOnViewLoad;
-(id)identifier;
-(void)_perform:(id)arg1 ;
-(id)defaultSegueClassName;
-(Class)effectiveSegueClass;
-(id)segueWithDestinationViewController:(id)arg1 ;
-(void)setPerformOnViewLoad:(BOOL)arg1 ;
@end
