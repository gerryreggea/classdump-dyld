/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSMutableDictionary, NSString, RedirectHandler;

@interface RedirectDestination : NSObject {

	NSMutableDictionary* originals;
	NSString* URLRef;
	bool disregard;
	unsigned long long disregardUntil;
	RedirectHandler* handler;
	SCD_Struct_Re0* originalsByTime;
	unsigned numEntries;

}

@property (nonatomic,retain) NSMutableDictionary * originals; 
@property (nonatomic,retain) NSString * URLRef; 
@property (assign,nonatomic) bool disregard; 
@property (assign,nonatomic) unsigned long long disregardUntil; 
@property (nonatomic,retain) RedirectHandler * handler; 
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(BOOL)checkConsistency;
-(void)setURLRef:(id)arg1 ;
-(id)URLRef;
-(void)addElemToQueue:(queueElement*)arg1 ;
-(void)removeElemFromQueue:(queueElement*)arg1 ;
-(id)getOrigin:(id)arg1 ;
-(void)insertOrigin:(id)arg1 forTime:(unsigned)arg2 destInstance:(unsigned)arg3 ;
-(void)removeOrigin:(id)arg1 ;
-(id)originals;
-(void)setOriginals:(id)arg1 ;
-(bool)disregard;
-(void)setDisregard:(bool)arg1 ;
-(unsigned long long)disregardUntil;
-(void)setDisregardUntil:(unsigned long long)arg1 ;
-(void).cxx_destruct;
@end
