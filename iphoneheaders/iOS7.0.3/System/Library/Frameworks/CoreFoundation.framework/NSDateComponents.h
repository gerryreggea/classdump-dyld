/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@interface NSDateComponents : NSObject <NSCopying, NSSecureCoding>
+(unsigned)smaller:(BOOL)arg1 componentsRelativeToComponent:(unsigned)arg2 ;
+(unsigned)_ui_smallerComponentsRelativeToComponent:(unsigned)arg1 ;
+(unsigned)_ui_largerComponentsRelativeToComponent:(unsigned)arg1 ;
+(id)_ui_namesForComponents:(unsigned)arg1 ;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isSameMonthAsComponents:(id)arg1 ;
-(BOOL)isSameYearAsComponents:(id)arg1 ;
-(BOOL)isSameDayAsComponents:(id)arg1 ;
-(int)_ui_valueForComponent:(unsigned)arg1 ;
-(void)_ui_setValue:(int)arg1 forComponent:(unsigned)arg2 ;
-(id)_ui_conciseDescription;
-(void)_ui_setComponents:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLeapMonth:(BOOL)arg1 ;
-(void)setNanosecond:(int)arg1 ;
-(BOOL)isLeapMonth;
-(int)nanosecond;
-(BOOL)isLeapMonthSet;
-(int)valueForComponent:(unsigned)arg1 ;
-(void)setValue:(int)arg1 forComponent:(unsigned)arg2 ;
-(BOOL)isValidDate;
-(BOOL)isValidDateInCalendar:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setTimeZone:(id)arg1 ;
-(id)date;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setDay:(int)arg1 ;
-(void)setHour:(int)arg1 ;
-(int)hour;
-(void)setCalendar:(id)arg1 ;
-(id)timeZone;
-(id)calendar;
-(int)minute;
-(int)second;
-(int)era;
-(int)year;
-(int)month;
-(int)day;
-(int)week;
-(int)weekOfMonth;
-(int)weekOfYear;
-(int)yearForWeekOfYear;
-(int)weekday;
-(int)weekdayOrdinal;
-(int)quarter;
-(void)setEra:(int)arg1 ;
-(void)setYear:(int)arg1 ;
-(void)setYearForWeekOfYear:(int)arg1 ;
-(void)setMonth:(int)arg1 ;
-(void)setMinute:(int)arg1 ;
-(void)setSecond:(int)arg1 ;
-(void)setWeek:(int)arg1 ;
-(void)setWeekOfYear:(int)arg1 ;
-(void)setWeekOfMonth:(int)arg1 ;
-(void)setWeekday:(int)arg1 ;
-(void)setWeekdayOrdinal:(int)arg1 ;
-(void)setQuarter:(int)arg1 ;
@end
