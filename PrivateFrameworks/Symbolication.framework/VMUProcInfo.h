/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSString, NSArray;

@interface VMUProcInfo : NSObject <SafeVMUProcInfoProtocol> {
    unsigned int _task;
    BOOL _needTaskPortDealloc;
    NSString *_name;
    int _cpuType;
    NSArray *_arguments;
    NSArray *_envVars;
    NSString *_procTableName;
    NSString *_realAppName;
    NSString *_requestedAppName;
    NSString *_firstArg;
    int _pid;
    int _ppid;
    struct timeval { 
        int tv_sec; 
        int tv_usec; 
    } _startTime;
}

+ (id)getProcessIds;
+ (BOOL)isProcessRunning:(int)arg1;
+ (int)processParentId:(int)arg1;

- (id)initWithTask:(unsigned int)arg1;
- (BOOL)isNative;
- (id)initWithPid:(int)arg1;
- (id)procTableName;
- (id)_infoFromCommandLine:(int)arg1;
- (id)realAppName;
- (id)requestedAppName;
- (id)firstArgument;
- (id)envVars;
- (id)userAppName;
- (int)ppid;
- (BOOL)isApp;
- (BOOL)isCFM;
- (BOOL)signal:(int)arg1;
- (int)compareByName:(id)arg1;
- (int)compareByUserAppName:(id)arg1;
- (BOOL)isMachO;
- (int)cpuType;
- (int)pid;
- (struct timeval { int x1; int x2; })startTime;
- (int)compare:(id)arg1;
- (void)update;
- (void)finalize;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)arguments;
- (BOOL)terminate;
- (BOOL)isRunning;
- (unsigned int)task;

@end
