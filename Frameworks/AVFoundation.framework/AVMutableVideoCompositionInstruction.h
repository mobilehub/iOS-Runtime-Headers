/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMutableVideoCompositionInstructionInternal, NSArray;

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction  {
    AVMutableVideoCompositionInstructionInternal *_mutableInstruction;
}

@property struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property(retain) struct CGColor { }* backgroundColor;
@property(copy) NSArray * layerInstructions;
@property BOOL enablePostProcessing;

+ (id)videoCompositionInstruction;

- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (struct CGColor { }*)backgroundColor;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)layerInstructions;
- (void)setLayerInstructions:(id)arg1;
- (BOOL)enablePostProcessing;
- (void)setEnablePostProcessing:(BOOL)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
