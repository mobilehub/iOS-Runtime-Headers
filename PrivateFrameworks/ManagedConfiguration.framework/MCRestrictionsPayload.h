/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSMutableDictionary, NSDictionary;

@interface MCRestrictionsPayload : MCPayload  {
    NSMutableDictionary *_restrictions;
}

@property(readonly) NSDictionary * restrictions;

+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;

- (void)dealloc;
- (id)description;
- (id)restrictions;
- (id)_invalidFieldErrorWithFieldName:(id)arg1;
- (id)_localizedStrings;
- (id)_defaultMediaSettings;
- (void)_insertRestrictedBoolForKey:(id)arg1 value:(id)arg2 preferenc:(BOOL)arg3;
- (id)subtitle1Description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;

@end
