/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:04 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol UIMovieScrubberTrackViewDataSource <NSObject>
@required
-(void)movieScrubberTrackView:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(BOOL)arg3;
-(float)movieScrubberTrackViewThumbnailAspectRatio:(id)arg1;
-(double)movieScrubberTrackViewDuration:(id)arg1;
-(id)movieScrubberTrackView:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
@end
