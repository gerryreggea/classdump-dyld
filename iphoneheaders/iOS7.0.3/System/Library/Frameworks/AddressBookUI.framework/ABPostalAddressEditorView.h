/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <AddressBookUI/ABCountryPickerControllerDelegate.h>

@protocol ABPresenterDelegate;
@class CNPostalAddress, NSDictionary, UITableView, NSArray, NSMutableDictionary;

@interface ABPostalAddressEditorView : UIControl <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, ABCountryPickerControllerDelegate> {

	CNPostalAddress* _address;
	<ABPresenterDelegate>* _delegate;
	NSDictionary* _valueTextAttributes;
	UITableView* _tableView;
	NSDictionary* _addressFormats;
	NSArray* _cellsLayout;
	NSMutableDictionary* _textFields;

}

@property (nonatomic,copy) CNPostalAddress * address; 
@property (assign,nonatomic) <ABPresenterDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * valueTextAttributes;              //@synthesize valueTextAttributes=_valueTextAttributes - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSDictionary * addressFormats;                   //@synthesize addressFormats=_addressFormats - In the implementation block
@property (nonatomic,copy) NSArray * cellsLayout;                           //@synthesize cellsLayout=_cellsLayout - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * textFields;                //@synthesize textFields=_textFields - In the implementation block
-(id)valueTextAttributes;
-(void)setValueTextAttributes:(id)arg1 ;
-(id)_countryCode;
-(void)countryPickerDidCancel:(id)arg1 ;
-(void)countryPicker:(id)arg1 didPickCountryCode:(id)arg2 ;
-(id)cellsLayout;
-(void)setCellsLayout:(id)arg1 ;
-(id)_cellsLayoutForCountryCode:(id)arg1 ;
-(void)_setAddressValue:(id)arg1 forKey:(id)arg2 ;
-(id)_addressValueForKey:(id)arg1 ;
-(id)_addressPlaceholderForKey:(id)arg1 ;
-(void)textFieldChanged:(id)arg1 ;
-(void)_setupCountryPickerOnLine:(id)arg1 ;
-(void)_setupCoutryPickerOnTextField:(id)arg1 ;
-(id)_normalizeCountryCodeToISO:(id)arg1 ;
-(id)addressFormats;
-(void)setAddressFormats:(id)arg1 ;
-(void)setAddress:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTableView:(id)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(id)tableView;
-(id)address;
-(void)setTextFields:(id)arg1 ;
-(id)textFields;
@end

