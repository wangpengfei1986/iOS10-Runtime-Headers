/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATProperty : NSObject {
    long long  _association;
    SEL  _customGetterSelector;
    SEL  _customSetterSelector;
    NSString * _instanceVariableName;
    NSString * _name;
    bool  _nonAtomic;
    Class  _objectClass;
    bool  _readOnly;
    long long  _type;
    bool  _weakReference;
}

@property (readonly) long long association;
@property (readonly) SEL customGetterSelector;
@property (readonly) SEL customSetterSelector;
@property (readonly, copy) NSString *instanceVariableName;
@property (readonly, copy) NSString *name;
@property (getter=isNonAtomic, readonly) bool nonAtomic;
@property (readonly) Class objectClass;
@property (getter=isReadOnly, readonly) bool readOnly;
@property (readonly) long long type;
@property (getter=isWeakReference, readonly) bool weakReference;

+ (void)initialize;
+ (id)propertiesForClass:(Class)arg1;
+ (id)propertiesForProtocol:(id)arg1;

- (void).cxx_destruct;
- (long long)association;
- (SEL)customGetterSelector;
- (SEL)customSetterSelector;
- (id)init;
- (id)initWithName:(const char *)arg1 attributes:(const char *)arg2;
- (id)instanceVariableName;
- (bool)isNonAtomic;
- (bool)isReadOnly;
- (bool)isWeakReference;
- (id)name;
- (Class)objectClass;
- (long long)type;

@end
