/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, ABStyleProvider, ABUIPerson;

@interface ABMemberNameView : UIView {

	UILabel* _nameLabel;
	UILabel* _meLabel;
	BOOL _highlighted;
	BOOL _isMeCard;
	ABStyleProvider* _styleProvider;
	ABUIPerson* _person;

}

@property (nonatomic,retain) ABStyleProvider * styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) ABUIPerson * person;                          //@synthesize person=_person - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                             //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL isMeCard;                                //@synthesize isMeCard=_isMeCard - In the implementation block
@property (nonatomic,readonly) UILabel * meLabel; 
@property (nonatomic,readonly) UILabel * nameLabel; 
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)setIsMeCard:(BOOL)arg1 ;
-(BOOL)isMeCard;
-(id)_cachedMemberNameRegularFont;
-(id)meLabel;
-(bool)_hasCachedNameLabelFrame;
-(CGRect)_cachedNameLabelFrame;
-(float)_cachedNameLabelBaselineOffsetFromBottom;
-(id)_attributedNameWithNameComponents:(id)arg1 delimiter:(id)arg2 highlightedIndex:(int)arg3 ;
-(id)_cachedMemberNameBoldFont;
-(id)_cachedMemberNamePlaceholderFont;
-(id)_cachedBoldTextAttributes;
-(id)_cachedRegularTextAttributes;
-(id)nameLabel;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)highlighted;
-(id)person;
-(void)setPerson:(id)arg1 ;
@end
