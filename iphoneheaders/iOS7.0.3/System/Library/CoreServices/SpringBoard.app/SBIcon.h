/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconIndexNode.h>

@class NSHashTable, UIImage;

@interface SBIcon : NSObject <SBIconIndexNode> {

	NSHashTable* _observers;
	id _badgeNumberOrString;
	unsigned _uninstalled : 1;
	UIImage* _cachedIconImages[14];

}

@property (nonatomic,readonly) BOOL shouldWarmUp; 
+(id)memoryMappedIconImageForIconImage:(id)arg1 ;
+(id)memoryMappedIconImageOfSize:(CGSize)arg1 scale:(float)arg2 withDrawing:(/*^block*/ id)arg3 ;
+(id)_iconImagesMemoryPool;
+(id)_iconImageOfSize:(CGSize)arg1 scale:(float)arg2 failGracefully:(BOOL)arg3 drawing:(/*^block*/ id)arg4 ;
-(void)localeChanged;
-(id)webClip;
-(void)launchFromLocation:(int)arg1 ;
-(BOOL)iconAppearsInNewsstand;
-(BOOL)shouldCacheImageForFormat:(int)arg1 ;
-(int)iconFormatForLocation:(int)arg1 ;
-(id)folderTitleOptions;
-(id)applicationBundleID;
-(id)getUnmaskedIconImage:(int)arg1 ;
-(id)automationID;
-(id)folderFallbackTitle;
-(BOOL)isApplicationIcon;
-(id)badgeNumberOrString;
-(void)reloadIconImage;
-(id)leafIdentifier;
-(id)getStandardIconImageForLocation:(int)arg1 ;
-(void)purgeCachedImages;
-(id)getIconImage:(int)arg1 ;
-(BOOL)isDownloadingIcon;
-(BOOL)isEmptyPlaceholder;
-(BOOL)isFolderIcon;
-(BOOL)isGrabbedIconPlaceholder;
-(id)accessoryTextForLocation:(int)arg1 ;
-(BOOL)isBookmarkIcon;
-(BOOL)isLeafIcon;
-(void)completeUninstall;
-(void)setUninstalled;
-(BOOL)hasCachedImageForLocation:(int)arg1 ;
-(BOOL)launchEnabled;
-(BOOL)isUninstalled;
-(id)nodeIdentifier;
-(BOOL)containsNodeIdentifier:(id)arg1 ;
-(BOOL)isNewsstandIcon;
-(void)noteBadgeDidChange;
-(BOOL)matchesRepresentation:(id)arg1 ;
-(BOOL)isWebApplicationIcon;
-(int)localizedCompareDisplayNames:(id)arg1 ;
-(BOOL)isNewsstandApplicationIcon;
-(id)uninstallAlertTitleForAppWithDocumentsInCloud;
-(id)uninstallAlertBodyForAppWithDocumentsInCloud;
-(id)uninstallAlertTitleForAppWithDocumentUpdatesPending;
-(id)uninstallAlertBodyForAppWithDocumentUpdatesPending;
-(id)uninstallAlertTitle;
-(id)uninstallAlertBody;
-(id)uninstallAlertConfirmTitle;
-(id)uninstallAlertCancelTitle;
-(id)gridCellImage;
-(id)getGenericIconImage:(int)arg1 ;
-(id)appPlaceholder;
-(BOOL)isUserInstalledApplicationIcon;
-(void)addNodeObserver:(id)arg1 ;
-(void)removeNodeObserver:(id)arg1 ;
-(void)_notifyAccessoriesDidUpdate;
-(float)progressPercent;
-(BOOL)hasFolderIconView;
-(void)_notifyImageDidUpdate;
-(id)containedNodeIdentifiers;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned)arg2 ;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(BOOL)progressIsPaused;
-(void)_notifyLaunchEnabledDidChange;
-(void)reloadIconImagePurgingImageCache:(BOOL)arg1 ;
-(int)accessoryTypeForLocation:(int)arg1 ;
-(BOOL)isRecentlyUpdated;
-(BOOL)canEllipsizeLabel;
-(Class)iconImageViewClassForLocation:(int)arg1 ;
-(BOOL)canReceiveGrabbedIcon;
-(Class)iconViewClassForLocation:(int)arg1 ;
-(BOOL)shouldWarmUp;
-(BOOL)matchesEntity:(id)arg1 ;
-(id)generateIconImage:(int)arg1 ;
-(BOOL)allowsUninstall;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)representation;
-(void)removeObserver:(id)arg1 ;
-(int)badgeValue;
-(id)displayName;
-(void)addObserver:(id)arg1 ;
-(id)tags;
-(id)folder;
-(void)setBadge:(id)arg1 ;
-(BOOL)isPlaceholder;
-(BOOL)hasObserver:(id)arg1 ;
-(int)progressState;
-(id)application;
@end

