/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTMessageStatus : NSObject  {
    unsigned int _messageId;
    int _messageType;
    int _result;
}

@property(readonly) int result;
@property(readonly) int messageType;
@property(readonly) unsigned int messageId;


- (int)result;
- (unsigned int)messageId;
- (id)initWithMessageId:(unsigned int)arg1 messageType:(int)arg2 result:(int)arg3;
- (int)messageType;

@end
