/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/BTLEServer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccessibilitySettings/CBPeripheralManagerDelegate.h>

@class CBMutableService;

@interface ServerService : NSObject <CBPeripheralManagerDelegate> {

	CBMutableService* _service;

}

@property (nonatomic,readonly) CBMutableService * service;              //@synthesize service=_service - In the implementation block
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3 ;
-(void)respondToRequest:(id)arg1 withResult:(int)arg2 ;
-(void)updateValue:(id)arg1 forCharacteristic:(id)arg2 onSubscribedCentrals:(id)arg3 ;
-(id)service;
-(void)dealloc;
-(id)init;
-(void)start;
-(void)stop;
@end
