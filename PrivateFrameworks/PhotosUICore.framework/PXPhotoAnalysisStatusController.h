/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoAnalysisStatusController : PXObservable {
    BOOL  __didReceiveGraphFractionCompleted;
    NSError * __graphError;
    BOOL  __graphReady;
    NSDate * __initialUpdateDate;
    NSDate * __lastGraphBecameReadyDate;
    BOOL  __requestingGraphFractionCompleted;
    NSMutableArray * __retryBlocks;
    double  _graphFractionCompleted;
    int  _graphStatus;
    BOOL  _hasBeenReadyForSomeTime;
    struct { 
        BOOL graphStatus; 
    }  _needsUpdateFlags;
}

@property (setter=_setDidReceiveGraphFractionCompleted:, nonatomic) BOOL _didReceiveGraphFractionCompleted;
@property (setter=_setGraphError:, nonatomic, retain) NSError *_graphError;
@property (getter=_isGraphReady, setter=_setGraphReady:, nonatomic) BOOL _graphReady;
@property (setter=_setInitialUpdateDate:, nonatomic, retain) NSDate *_initialUpdateDate;
@property (setter=_setLastGraphBecameReadyDate:, nonatomic, retain) NSDate *_lastGraphBecameReadyDate;
@property (getter=_isRequestingGraphFractionCompleted, setter=_setRequestingGraphFractionCompleted:, nonatomic) BOOL _requestingGraphFractionCompleted;
@property (nonatomic, readonly) NSMutableArray *_retryBlocks;
@property (setter=_setGraphFractionCompleted:, nonatomic) double graphFractionCompleted;
@property (setter=_setGraphStatus:, nonatomic) int graphStatus;
@property (setter=_setHasBeenReadyForSomeTime:, nonatomic) BOOL hasBeenReadyForSomeTime;
@property (nonatomic, readonly) NSString *stateDescription;

+ (id)sharedStatusController;

- (void).cxx_destruct;
- (void)_dequeueAndPerformBlocks:(id)arg1;
- (BOOL)_didReceiveGraphFractionCompleted;
- (id)_graphError;
- (void)_handleGraphFractionCompletedReply:(id)arg1 error:(id)arg2;
- (void)_handleGraphReadyForSomeTimeForDate:(id)arg1;
- (void)_handleGraphReadyReplyWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)_handleInitialGraceDelay;
- (id)_initialUpdateDate;
- (void)_invalidateGraphStatus;
- (BOOL)_isGraphReady;
- (BOOL)_isRequestingGraphFractionCompleted;
- (BOOL)_isWithinGracePeriod;
- (id)_lastGraphBecameReadyDate;
- (BOOL)_needsUpdate;
- (void)_requestGraphFractionCompleted;
- (void)_requestGraphReady;
- (id)_retryBlocks;
- (void)_setDidReceiveGraphFractionCompleted:(BOOL)arg1;
- (void)_setGraphError:(id)arg1;
- (void)_setGraphFractionCompleted:(double)arg1;
- (void)_setGraphReady:(BOOL)arg1;
- (void)_setGraphStatus:(int)arg1;
- (void)_setHasBeenReadyForSomeTime:(BOOL)arg1;
- (void)_setInitialUpdateDate:(id)arg1;
- (void)_setLastGraphBecameReadyDate:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setRequestingGraphFractionCompleted:(BOOL)arg1;
- (void)_updateGraphStatusIfNeeded;
- (void)_updateIfNeeded;
- (void)didPerformChanges;
- (double)graphFractionCompleted;
- (int)graphStatus;
- (BOOL)hasBeenReadyForSomeTime;
- (id)init;
- (id)mutableChangeObject;
- (void)registerRetryBlock:(id /* block */)arg1;
- (id)stateDescription;
- (void)update;

@end
