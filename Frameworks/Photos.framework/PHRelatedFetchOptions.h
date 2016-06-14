/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHRelatedFetchOptions : NSObject {
    bool  _debugInfoEnabled;
    bool  _enableDiversity;
    NSArray * _excludedAssetCollections;
    unsigned long long  _fetchLimit;
}

@property (getter=isDebugInfoEnabled, nonatomic) bool debugInfoEnabled;
@property (nonatomic) bool enableDiversity;
@property (nonatomic, retain) NSArray *excludedAssetCollections;
@property (nonatomic) unsigned long long fetchLimit;

- (void).cxx_destruct;
- (bool)enableDiversity;
- (id)excludedAssetCollections;
- (unsigned long long)fetchLimit;
- (bool)isDebugInfoEnabled;
- (void)setDebugInfoEnabled:(bool)arg1;
- (void)setEnableDiversity:(bool)arg1;
- (void)setExcludedAssetCollections:(id)arg1;
- (void)setFetchLimit:(unsigned long long)arg1;

@end