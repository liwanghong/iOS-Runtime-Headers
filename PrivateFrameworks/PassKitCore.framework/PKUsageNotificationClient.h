/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableSet, NSString, NSXPCListener;

@interface PKUsageNotificationClient : NSObject <NSXPCListenerDelegate, PKUsageNotificationClientInterface> {
    NSMutableSet *_connections;
    id _handler;
    NSXPCListener *_listener;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void)dealloc;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)passUsedFromSource:(long long)arg1 withTypeIdentifier:(id)arg2 info:(id)arg3;
- (void)setPassUsageHandler:(id)arg1;

@end