/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKTokenService_Subsystem : NSObject <PKModularService> {
    id  _driverObject;
    NSDictionary * _extensionAttributes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) id driverObject;
@property (readonly, copy) NSDictionary *extensionAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)initForPlugInKit;
+ (id)sharedSubsystem;

- (void).cxx_destruct;
- (void)beginUsing:(id)arg1 withBundle:(id)arg2;
- (id)driverObject;
- (void)endUsing:(id)arg1;
- (id)extensionAttributes;

@end
