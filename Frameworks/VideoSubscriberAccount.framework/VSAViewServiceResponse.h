/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAViewServiceResponse : NSObject <NSCopying, NSSecureCoding> {
    VSAccountMetadata * _accountMetadata;
    VSResourceAuthorization * _authorization;
}

@property (nonatomic, copy) VSAccountMetadata *accountMetadata;
@property (nonatomic, copy) VSResourceAuthorization *authorization;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountMetadata;
- (id)authorization;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAccountMetadata:(id)arg1;
- (void)setAuthorization:(id)arg1;

@end
