/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicate.h>

@class NSPredicateOperator, NSExpression;

@interface NSComparisonPredicate : NSPredicate {

	void* _reserved2;
	NSPredicateOperator* _predicateOperator;
	NSExpression* _lhs;
	NSExpression* _rhs;

}
+(id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned)arg3 type:(unsigned)arg4 options:(unsigned)arg5 ;
+(id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3 ;
+(id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3 ;
+(id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3 ;
+(id)predicateWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3 ;
+(BOOL)supportsSecureCoding;
-(id)minimalFormInContext:(id)arg1 ;
-(BOOL)_isForeignObjectExpression:(id)arg1 givenContext:(id)arg2 ;
-(id)rightExpression;
-(id)leftExpression;
-(unsigned)comparisonPredicateModifier;
-(unsigned)predicateOperatorType;
-(void)allowEvaluation;
-(id)predicateOperator;
-(id)initWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3 ;
-(void)acceptVisitor:(id)arg1 flags:(unsigned)arg2 ;
-(void)setPredicateOperator:(id)arg1 ;
-(id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned)arg3 type:(unsigned)arg4 options:(unsigned)arg5 ;
-(id)predicateWithSubstitutionVariables:(id)arg1 ;
-(id)predicateFormat;
-(id)generateMetadataDescription;
-(id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3 ;
-(id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3 ;
-(id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3 ;
-(id)keyPathExpressionForString:(id)arg1 ;
-(void)_acceptOperator:(id)arg1 flags:(unsigned)arg2 ;
-(void)_acceptExpressions:(id)arg1 flags:(unsigned)arg2 ;
-(SEL)customSelector;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(unsigned)options;
@end

