/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference, NSObject<OS_dispatch_queue>, NSString;

@interface AVWeakReferencingDelegateStorage : NSObject <AVDelegateStorage> {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_delegateReadWriteQueue;
    AVWeakReference *_weakReferenceToDelegate;
}

@property(copy,readonly) NSString * debugDescription;
@property(readonly) id delegate;
@property(readonly) NSObject<OS_dispatch_queue> * delegateQueue;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (void)initialize;

- (void)_collectUncollectables;
- (id)_delegate;
- (void)_setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)finalize;
- (void)getRetainedDelegate:(id*)arg1 retainedDelegateQueue:(id*)arg2;
- (id)init;
- (void)invokeDelegateCallbackWithBlock:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;

@end