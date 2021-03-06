/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, NSMutableArray;

@interface MPAudioDeviceController : NSObject {

	NSString* _category;
	id _delegate;
	BOOL _determiningPickableRoutes;
	BOOL _fakeRouteAvailable;
	NSArray* _pickableRoutes;
	NSDictionary* _pickedRoute;
	BOOL _pickedRouteHasVolumeControl;
	BOOL _pickedRouteHasVolumeControlIsValid;
	NSMutableArray* _pickableRoutesCompletionHandlers;
	BOOL _scheduledSendAudioRoutesDidChange;

}

@property (assign,nonatomic,__weak) id delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL routeDiscoveryEnabled; 
+(void)setRouteDiscoveryEnabled:(BOOL)arg1 ;
+(BOOL)routeDiscoveryEnabled;
-(BOOL)pickBestDeviceRoute;
-(BOOL)volumeControlIsAvailable;
-(id)nameOfPickedRoute;
-(BOOL)isPickedRouteDistinctFromRoute:(id)arg1 ;
-(void)clearCachedRoutes;
-(id)pickedRouteDescription;
-(id)routeTypeAtIndex:(unsigned)arg1 ;
-(BOOL)airtunesRouteIsPicked;
-(BOOL)wirelessRouteIsPicked;
-(void)_activeAudioRouteDidChange:(id)arg1 ;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(BOOL)routeOtherThanHandsetIsAvailable;
-(void)determinePickableRoutesWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setRouteDiscoveryEnabled:(BOOL)arg1 ;
-(BOOL)routeOtherThanHandsetAndSpeakerIsAvailable;
-(int)indexOfPickedRoute;
-(BOOL)pickRouteAtIndex:(unsigned)arg1 withPassword:(id)arg2 ;
-(id)_pickedRoute;
-(BOOL)_routeIsSpeaker:(id)arg1 ;
-(BOOL)_routeIsDisplayPort:(id)arg1 ;
-(BOOL)_routeIsHandset:(id)arg1 ;
-(id)_pickableRoutes;
-(id)routeNameAtIndex:(unsigned)arg1 isPicked:(BOOL*)arg2 ;
-(BOOL)_routeIsHeadphones:(id)arg1 ;
-(BOOL)pickRoute:(id)arg1 ;
-(BOOL)pickRoute:(id)arg1 withPassword:(id)arg2 ;
-(BOOL)_routeIsReceiver:(id)arg1 ;
-(BOOL)_routeIsWireless:(id)arg1 ;
-(BOOL)routeDiscoveryEnabled;
-(void)_scheduleSendDelegateAudioRoutesChanged;
-(void)_pickableRoutesChangedNotification:(id)arg1 ;
-(void)_portStatusDidChangeNotification:(id)arg1 ;
-(void)_mediaServerDiedNotification:(id)arg1 ;
-(void)_routeDiscoveryDidEndNotification:(id)arg1 ;
-(BOOL)handsetRouteIsPicked;
-(int)indexOfRouteWithName:(id)arg1 ;
-(void)logCurrentRoutes;
-(unsigned)numberOfAudioRoutes;
-(BOOL)pickHandsetRoute;
-(BOOL)pickRouteAtIndex:(unsigned)arg1 ;
-(BOOL)pickSpeakerRoute;
-(BOOL)receiverRouteIsPicked;
-(void)restorePickedRoute;
-(id)routeDescriptionAtIndex:(unsigned)arg1 ;
-(BOOL)routeRequiresPasswordAtIndex:(unsigned)arg1 ;
-(BOOL)speakerRouteIsPicked;
-(void)_sendFakeRouteChange;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)setCategory:(id)arg1 ;
-(void).cxx_destruct;
@end

