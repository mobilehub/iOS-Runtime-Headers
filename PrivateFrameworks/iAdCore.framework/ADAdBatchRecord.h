/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSString;

@interface ADAdBatchRecord : NSObject  {
    NSString *_batchId;
    int _sequenceNum;
    BOOL _supplyMetrics;
}

@property BOOL supplyMetrics;
@property int sequenceNum;
@property(retain) NSString * batchId;


- (void)setSupplyMetrics:(BOOL)arg1;
- (int)sequenceNum;
- (void)setSequenceNum:(int)arg1;
- (BOOL)supplyMetrics;
- (id)batchId;
- (void)setBatchId:(id)arg1;
- (void)dealloc;

@end
