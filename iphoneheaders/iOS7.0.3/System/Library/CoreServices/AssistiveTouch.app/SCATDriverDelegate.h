/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol SCATDriverDelegate <NSObject>
@optional
-(void)driver:(id)arg1 willFocusOnContext:(id)arg2;
-(void)driver:(id)arg1 willUnfocusFromContext:(id)arg2;
-(void)driver:(id)arg1 didFocusOnContext:(id)arg2;
-(void)driverDidPause:(id)arg1;
-(void)driverDidBecomeInactive:(id)arg1;
-(void)driverDidBecomeActive:(id)arg1;

@required
-(id)activeElementManagerForDriver:(id)arg1;
-(id)activeScannerDriver;
@end

