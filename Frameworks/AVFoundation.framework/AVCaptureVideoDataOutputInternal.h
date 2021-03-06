/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVCaptureVideoDataOutputSampleBufferDelegate>, NSDictionary;

@interface AVCaptureVideoDataOutputInternal : NSObject  {
    <AVCaptureVideoDataOutputSampleBufferDelegate> *delegate;
    struct dispatch_queue_s { } *clientQueue;
    unsigned int pixelFormatType;
    NSDictionary *videoSettings;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } minFrameDuration;
    BOOL alwaysDiscardsLateVideoFrames;
}


- (id)init;
- (void)dealloc;

@end
