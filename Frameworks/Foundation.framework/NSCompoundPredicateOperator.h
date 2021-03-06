/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCompoundPredicateOperator : NSPredicateOperator  {
}

+ (id)andPredicateOperator;
+ (id)orPredicateOperator;
+ (id)notPredicateOperator;

- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)symbol;
- (BOOL)evaluatePredicates:(id)arg1 withObject:(id)arg2;
- (id)predicateFormat;
- (BOOL)evaluatePredicates:(id)arg1 withObject:(id)arg2 substitutionVariables:(id)arg3;
- (id)minimalFormInContext:(id)arg1 ofPredicates:(id)arg2;

@end
