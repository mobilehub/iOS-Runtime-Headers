/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class RTFTextTable;

@interface RTFTextTableBlock : RTFTextBlock  {
    RTFTextTable *_table;
    int _rowNum;
    int _colNum;
    int _rowSpan;
    int _colSpan;
    void *_tableBlockPrimary;
    void *_tableBlockSecondary;
}


- (id)table;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)rowSpan;
- (int)columnSpan;
- (int)startingRow;
- (void)_setRowSpan:(int)arg1;
- (void)_setColumnSpan:(int)arg1;
- (id)initWithTable:(id)arg1 startingRow:(int)arg2 rowSpan:(int)arg3 startingColumn:(int)arg4 columnSpan:(int)arg5;
- (int)startingColumn;

@end
