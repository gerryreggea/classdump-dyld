/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:18 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@class NSString, ABUIPerson;

@interface ABActionsController : NSObject {

	int _property;
	int _multiValueIdentifier;
	id _value;
	NSString* _stringValue;
	void* _context;
	int _lastPropertyForActions;
	CFArrayRef _actionsForProperty;
	ABUIPerson* _person;

}

@property (nonatomic,retain) ABUIPerson * person;              //@synthesize person=_person - In the implementation block
+(int)defaultActionForProperty:(int)arg1 ;
+(id)newActionsControllerForProperty:(int)arg1 ;
-(CFArrayRef)_actionsForProperty:(int)arg1 ;
-(int)_actionAtIndex:(int)arg1 forProperty:(int)arg2 ;
-(id)titleForAction:(int)arg1 ;
-(void)_performAction:(int)arg1 forProperty:(int)arg2 ;
-(void)performAction:(int)arg1 ;
-(id)urlForAction:(int)arg1 forProperty:(int)arg2 ;
-(int)actionsCountForProperty:(int)arg1 ;
-(id)titleAtIndex:(int)arg1 forProperty:(int)arg2 ;
-(void)resetPrimaryPropertyActions;
-(void)performDefaultAction;
-(void)performActionAtIndex:(int)arg1 forProperty:(int)arg2 ;
-(void)setMultiValueIdentifier:(int)arg1 ;
-(id)initWithProperty:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setValue:(id)arg1 ;
-(void*)context;
-(id)value;
-(void)setContext:(void*)arg1 ;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(id)person;
-(void)setPerson:(id)arg1 ;
-(int)defaultAction;
@end
