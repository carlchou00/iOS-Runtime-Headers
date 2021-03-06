/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPTunnelTuscanyLoopback : NPTunnelTuscany {
    unsigned long  _blobSizes;
    BOOL  _connected;
    unsigned int  _currentBlobSizeIndex;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _currentRange;
    NSData * _dayPassBytes;
    NSData * _doneMarker;
    NPTunnelFlow * _flow;
    NSMutableData * _sendBuffer;
    void * _window;
}

@property BOOL connected;
@property unsigned int currentBlobSizeIndex;
@property (readonly) NSData *dayPassBytes;
@property (retain) NSData *doneMarker;
@property (retain) NPTunnelFlow *flow;
@property (retain) NSMutableData *sendBuffer;
@property void*window;

- (void).cxx_destruct;
- (BOOL)addNewFlow:(id)arg1;
- (BOOL)canHandleMoreData;
- (void)cancelConnectionTimer;
- (BOOL)connected;
- (BOOL)createConnectionWithInitialData:(id)arg1;
- (void)createTuscanyClient;
- (unsigned int)currentBlobSizeIndex;
- (int)currentMTU;
- (id)dayPass;
- (id)dayPassBytes;
- (void)dealloc;
- (id)doneMarker;
- (id)flow;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2;
- (unsigned int)initialWindowSize;
- (BOOL)isConnectionAlive;
- (unsigned int)maxFrameSize;
- (void)readMinimumBytes:(unsigned int)arg1 maximumBytes:(unsigned int)arg2;
- (void)removeFlow:(unsigned long long)arg1;
- (BOOL)selectBestEdge;
- (id)sendBuffer;
- (void)setConnected:(BOOL)arg1;
- (void)setCurrentBlobSizeIndex:(unsigned int)arg1;
- (void)setDayPass:(id)arg1;
- (void)setDoneMarker:(id)arg1;
- (void)setFlow:(id)arg1;
- (void)setSendBuffer:(id)arg1;
- (void)setWindow:(void*)arg1;
- (void)startConnectionTimer;
- (void*)window;
- (void)writeDataToConnection:(id)arg1;

@end
