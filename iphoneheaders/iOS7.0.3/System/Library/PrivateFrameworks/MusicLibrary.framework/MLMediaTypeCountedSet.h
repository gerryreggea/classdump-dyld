/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface MLMediaTypeCountedSet : NSObject {

	map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int> > >* _map;
	unsigned _count;

}

@property (assign,nonatomic) unsigned count;              //@synthesize count=_count - In the implementation block
-(unsigned)count;
-(id)description;
-(void)setCount:(unsigned)arg1 ;
-(id).cxx_construct;
-(void)addMediaType:(unsigned long)arg1 count:(unsigned)arg2 ;
-(void)enumerateMediaTypesWithBlock:(/*^block*/ id)arg1 ;
-(void).cxx_destruct;
@end

