/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecSearchSession : NSObject <WBSParsecFeedbackDispatcher, WBSParsecSearchSession> {
    WBSParsecSearchClient * _client;
    NSString * _connectionType;
    WBSCompletionQuery * _currentQuery;
    <WBSParsecSearchSessionDelegate> * _delegate;
    NSMutableArray * _feedbackActions;
    bool  _hasRespondedToCurrentQuery;
    WBSParsecHiddenResultInfo * _lastHiddenResultInfo;
    WBSParsecSearchResultCache * _searchResultCache;
    NSMutableDictionary * _searchResultIdentifierToCardFetchDispatchGroupDictionary;
    NSMutableDictionary * _searchResultIdentifierToCardFetchErrorDictionary;
    struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { 
        struct duration<long long, std::__1::ratio<1, 1000000000> > { 
            long long __rep_; 
        } __d_; 
    }  _sessionStartTimestamp;
    double  _uiScale;
    bool  _valid;
}

@property (nonatomic, readonly) NSURLSession *_urlSession;
@property (nonatomic, retain) WBSParsecSearchClient *client;
@property (nonatomic, copy) NSString *connectionType;
@property (nonatomic, retain) WBSCompletionQuery *currentQuery;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WBSParsecSearchSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <WBSParsecFeedbackDispatcher> *feedbackDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (setter=setUIScale:, nonatomic) double uiScale;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)_addFeedbackAction:(id)arg1;
- (void)_addParsecAndSearchSuggestionDeltaForQuery:(id)arg1 toFeedbackDictionary:(id)arg2;
- (void)_addSubscriptionInformationToRequest:(id)arg1;
- (bool)_canSendQuery;
- (void)_determineConnectionType;
- (void)_endSession;
- (void)_generateCachedSearchFeedbackForQuery:(id)arg1;
- (void)_generateSearchFeedbackForResponse:(id)arg1 forQuery:(id)arg2 timeToFirstByte:(double)arg3 error:(id)arg4;
- (void)_invalidate;
- (id)_parsecRequestForURL:(id)arg1;
- (void)_processBestResultSetOnMainThread:(id)arg1 forQuery:(id)arg2;
- (void)_processSearchResponseOnMainThread:(id)arg1 forQuery:(id)arg2 timeToFirstByte:(double)arg3;
- (id)_queryItemForInputMode;
- (id)_queryItemForUnitPreference;
- (void)_respondToCurrentQueryIfNeededWithResults:(id)arg1;
- (void)_scheduleCardDetailPreFetchIfNecessary:(id)arg1;
- (void)_searchRequestFailedForQuery:(id)arg1;
- (id)_searchRequestForQuery:(id)arg1;
- (id)_searchURLForQuery:(id)arg1;
- (id)_searchURLForQuery:(id)arg1 baseURL:(id)arg2;
- (void)_sendGeneratedFeedback;
- (void)_sendWarmupRequest;
- (double)_timeToFirstByteForDataTask:(id)arg1;
- (id)_urlSession;
- (id)client;
- (id)connectionType;
- (id)currentQuery;
- (void)dealloc;
- (id)delegate;
- (void)didDisplayCompletionListItems:(id)arg1 forQuery:(id)arg2;
- (void)didGenerateCompletionListItemsWithRankingObserver:(id)arg1;
- (void)didReceiveLocalResultsForQuery:(id)arg1;
- (void)didReceiveWebSuggestionsForQuery:(id)arg1 fromSearchProvider:(id)arg2;
- (id)feedbackDispatcher;
- (void)fetchCardDetailsForResult:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithClient:(id)arg1;
- (bool)isValid;
- (void)setClient:(id)arg1;
- (void)setConnectionType:(id)arg1;
- (void)setCurrentQuery:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUIScale:(double)arg1;
- (double)uiScale;
- (void)userDidCancelSession;
- (void)userDidCancelSession:(long long)arg1;
- (void)userDidEngageWithCardShowingResult:(id)arg1 onCardOfType:(id)arg2 actionType:(id)arg3 actionTarget:(id)arg4 destination:(id)arg5;
- (void)userDidEngageWithCompletionListItem:(id)arg1 atPosition:(unsigned long long)arg2 withEngagementActionDictionary:(id)arg3;
- (void)userDidEngageWithCompletionListItem:(id)arg1 withCardActionDictionary:(id)arg2;
- (void)userDidSelectCompletionListItem:(id)arg1;
- (void)userDidSelectCompletionListItem:(id)arg1 atPosition:(unsigned long long)arg2;

@end