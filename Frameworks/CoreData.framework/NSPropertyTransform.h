/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSPropertyTransform, NSString, NSExpression;

@interface NSPropertyTransform : NSObject  {
    NSExpression *_valueExpression;
    NSString *_propertyName;
    NSPropertyTransform *_prerequisiteTransform;
    BOOL _replaceMissingValueOnly;
}

@property BOOL replaceMissingValueOnly;
@property(retain) NSPropertyTransform * prerequisiteTransform;
@property(retain) NSExpression * valueExpression;
@property(retain) NSString * propertyName;


- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)valueExpression;
- (id)prerequisiteTransform;
- (BOOL)replaceMissingValueOnly;
- (void)setPropertyName:(id)arg1;
- (void)setValueExpression:(id)arg1;
- (id)initWithPropertyName:(id)arg1 valueExpression:(id)arg2;
- (void)setPrerequisiteTransform:(id)arg1;
- (void)setReplaceMissingValueOnly:(BOOL)arg1;
- (id)propertyName;

@end
