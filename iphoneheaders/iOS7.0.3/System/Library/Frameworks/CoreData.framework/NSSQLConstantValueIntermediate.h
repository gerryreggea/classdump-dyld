/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLIntermediate.h>

@interface NSSQLConstantValueIntermediate : NSSQLIntermediate {

	unsigned _type;
	id _constantValue;

}
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)initWithConstantValue:(id)arg1 inScope:(id)arg2 ;
-(id)propertyAtEndOfKeyPathExpression:(id)arg1 ;
-(unsigned)sqlTypeForProperty:(id)arg1 ;
-(BOOL)_addBindVarForConstId:(id)arg1 ofType:(unsigned)arg2 inContext:(id)arg3 ;
-(BOOL)_addBindVarForConstVal1:(id)arg1 inContext:(id)arg2 ;
-(id)initWithConstantValue:(id)arg1 ofType:(unsigned)arg2 inScope:(id)arg3 ;
-(void)dealloc;
@end

