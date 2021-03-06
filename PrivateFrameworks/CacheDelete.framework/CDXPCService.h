/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

@interface CDXPCService : CDService {
    BOOL  _isConnected;
    BOOL  _isInterrupted;
    BOOL  _isInvalidated;
    NSObject<OS_dispatch_source> * _watchdog_timer;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) BOOL isConnected;
@property (nonatomic) BOOL isInterrupted;
@property (nonatomic) BOOL isInvalidated;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *watchdog_timer;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)_serviceCallback:(id)arg1 replyBlock:(id /* block */)arg2;
- (void)_serviceCancelPurge:(id /* block */)arg1;
- (void)_serviceNotify:(id)arg1 replyBlock:(id /* block */)arg2;
- (void)_servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(id /* block */)arg3;
- (void)_servicePurge:(int)arg1 info:(id)arg2 replyBlock:(id /* block */)arg3;
- (void)_servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(id /* block */)arg3;
- (void)connectionWasInterrupted;
- (void)connectionWasInvalidated;
- (void)dealloc;
- (void)doWithProxy:(id /* block */)arg1 failure:(id /* block */)arg2;
- (id)initWithInfo:(id)arg1;
- (void)invalidateConnection;
- (BOOL)isConnected;
- (BOOL)isInterrupted;
- (BOOL)isInvalidated;
- (void)obtainXPCConnection:(id /* block */)arg1;
- (void)resetConnectionHandlers;
- (void)resumeConnection;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setInterruptionBlock:(id /* block */)arg1;
- (void)setInvalidationBlock:(id /* block */)arg1;
- (void)setIsConnected:(BOOL)arg1;
- (void)setIsInterrupted:(BOOL)arg1;
- (void)setIsInvalidated:(BOOL)arg1;
- (void)setWatchdog_timer:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)watchdog_timer;
- (id)xpcConnection;

@end
