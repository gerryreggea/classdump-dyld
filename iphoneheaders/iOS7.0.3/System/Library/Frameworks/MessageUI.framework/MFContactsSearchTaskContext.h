/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MFContactsSearchConsumer;
@class , NSString, NSMutableSet;

@interface MFContactsSearchTaskContext : NSObject {

	<MFContactsSearchConsumer>* _consumer;
	NSString* _text;
	NSMutableSet* _operations;
	NSMutableSet* _searchQueries;

}

@property (nonatomic,readonly) <MFContactsSearchConsumer> * consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (nonatomic,readonly) NSString * text;                                    //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSMutableSet * operations;                          //@synthesize operations=_operations - In the implementation block
@property (nonatomic,readonly) NSMutableSet * searchQueries;                       //@synthesize searchQueries=_searchQueries - In the implementation block
+(id)contextWithConsumer:(id)arg1 text:(id)arg2 operations:(id)arg3 searchQueries:(id)arg4 ;
-(id)consumer;
-(id)searchQueries;
-(void)dealloc;
-(id)text;
-(BOOL)done;
-(id)operations;
@end
