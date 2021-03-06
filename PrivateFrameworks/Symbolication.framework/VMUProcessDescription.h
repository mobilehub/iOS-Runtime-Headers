/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSArray, NSString, NSDictionary, NSMutableArray, NSCalendarDate;

@interface VMUProcessDescription : NSObject  {
    unsigned int _task;
    int _pid;
    struct _CSTypeRef { 
        unsigned int _opaque_1; 
        unsigned int _opaque_2; 
    } _symbolicator;
    NSString *_processName;
    BOOL _processNameNeedsCorrection;
    NSString *_executablePath;
    BOOL _executablePathNeedsCorrection;
    unsigned long long _executableLoadAddress;
    int _cpuType;
    BOOL _isNative;
    BOOL _is64Bit;
    NSDictionary *_lsApplicationInformation;
    NSMutableArray *_binaryImages;
    NSArray *_sortedBinaryImages;
    NSDictionary *_binaryImageHints;
    NSArray *_unreadableBinaryImagePaths;
    BOOL _binaryImagePostProcessingComplete;
    NSDictionary *_buildVersionDictionary;
    NSDictionary *_osVersionDictionary;
    NSString *_parentProcessName;
    NSString *_parentExecutablePath;
    int _ppid;
    NSCalendarDate *_date;
    NSString *_internalError;
}


- (double)_extractDyldInfoFromSymbolOwner:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg1 withNonContiguousMemory:(id)arg2;
- (id)_readDataFromMemory:(id)arg1 atAddress:(unsigned long long)arg2 size:(unsigned long)arg3;
- (id)_extractInfoPlistFromSymbolOwner:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg1 withNonContiguousMemory:(id)arg2;
- (void)_extractBinaryImageInfoFromSymbolOwner:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg1;
- (id)parentProcessName;
- (id)processVersionDictionary;
- (id)_sanitizeVersion:(id)arg1;
- (id)processVersion;
- (BOOL)isAppleApplication;
- (id)_bundleLock;
- (id)binaryImages;
- (id)binaryImageDictionaryForAddress:(unsigned int)arg1;
- (id)_cpuTypeDescription;
- (id)_binaryImagesDescriptionForRanges:(id)arg1;
- (id)_rangesOfBinaryImages:(id)arg1 forBacktraces:(id)arg2;
- (id)binaryImagesDescriptionForBacktraces:(id)arg1;
- (id)binaryImagesDescription;
- (id)_buildInfoDescription;
- (id)_systemVersionDescription;
- (id)processDescriptionHeader;
- (id)dateAndVersionDescription;
- (id)_osVersionDictionary;
- (id)_buildVersionDictionary;
- (id)initWithPid:(int)arg1 orTask:(unsigned int)arg2;
- (int)cpuType;
- (int)pid;
- (id)displayName;
- (id)date;
- (id)executablePath;
- (id)processName;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)description;
- (id)processIdentifier;
- (BOOL)isTranslated;
- (unsigned int)task;

@end
