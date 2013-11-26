/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:06:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol AXSettingsVoiceAssetManagerDelegate;
@class ;

@interface AXSettingsVoiceAssetManager : NSObject {

	<AXSettingsVoiceAssetManagerDelegate>* _delegate;

}

@property (assign,nonatomic) <AXSettingsVoiceAssetManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)requestVoiceLanguageIsDownloadingPaused:(id)arg1 ;
-(void)requestVoiceLanguageIsCompact:(id)arg1 ;
-(void)requestVoiceLanguageDownloadProgress:(id)arg1 ;
-(void)requestVoiceLanguageIsDownloading:(id)arg1 ;
-(void)requestVoiceLanguageLanguageDownloadInProgress;
-(void)stopDownloading:(id)arg1 ;
-(void)startDownloading:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)deleteDownload:(id)arg1 ;
@end
