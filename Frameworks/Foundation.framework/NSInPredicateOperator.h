/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSSubstringPredicateOperator;

@interface NSInPredicateOperator : NSPredicateOperator  {
    unsigned int _flags;
    NSSubstringPredicateOperator *_stringVersion;
}


- (unsigned int)flags;
- (unsigned int)options;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)_setOptions:(unsigned int)arg1;
- (id)initWithOperatorType:(unsigned int)arg1 modifier:(unsigned int)arg2 options:(unsigned int)arg3;
- (id)stringVersion;
- (id)symbol;
- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (id)minimalFormInContext:(id)arg1 ofPredicate:(id)arg2;

@end
