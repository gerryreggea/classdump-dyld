/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextBaseCommand.h>

@class TSWPStorage, TSWPSelection;

@interface TSWPTextCommand : TSWPTextBaseCommand {

	TSWPStorage* _storage;
	TSWPSelection* _selection;
	TSWPStorageTransaction* _undoRedoTransaction;
	NSRange _restoreRange;
	NSRange _redoRestoreRange;
	NSRange _performRange;

}

@property (nonatomic,readonly) TSWPStorage * storage; 
@property (nonatomic,readonly) TSWPSelection * selection;              //@synthesize selection=_selection - In the implementation block
@property (assign,nonatomic) NSRange redoRestoreRange;                 //@synthesize redoRestoreRange=_redoRestoreRange - In the implementation block
@property (assign,nonatomic) NSRange performRange;                     //@synthesize performRange=_performRange - In the implementation block
@property (assign,nonatomic) NSRange restoreRange;                     //@synthesize restoreRange=_restoreRange - In the implementation block
@property (nonatomic,readonly) int persistenceKind; 
+(id)newObjectForUnarchiver:(id)arg1 ;
-(id)storage;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(TextCommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const TextCommandArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)shouldRunSynchronously;
-(id)initWithStorage:(id)arg1 selection:(id)arg2 ;
-(void)p_invalidateRange:(NSRange)arg1 ;
-(void)doCommit;
-(int)persistenceKind;
-(void)setRestoreRangeWithSelection:(id)arg1 ;
-(TSWPStorageTransaction*)undoRedoTransaction;
-(NSRange)redoRestoreRange;
-(void)p_invalidateSelection:(id)arg1 ;
-(void)setRestoreRange:(NSRange)arg1 ;
-(const TextCommandArchive*)textCommandArchiveFromUnarchiver:(id)arg1 ;
-(void)doUndoRedo;
-(void)p_setSelectionToRange:(NSRange)arg1 isVisual:(BOOL)arg2 leadingEdge:(BOOL)arg3 ;
-(void)p_setSelectionToRange:(NSRange)arg1 ;
-(void)setRedoRestoreRange:(NSRange)arg1 ;
-(NSRange)performRange;
-(void)setPerformRange:(NSRange)arg1 ;
-(NSRange)restoreRange;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(id)selection;
-(void)commit;
-(id).cxx_construct;
-(NSRange)undoRedo;
-(BOOL)process;
-(id)actionString;
@end

