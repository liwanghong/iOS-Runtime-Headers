/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface MDAgent : NSObject {
    <NSXPCProxyCreating> *_clientLink;
    MDAgentDelegate *_delegate;
}

@property (retain) <NSXPCProxyCreating> *clientLink;
@property MDAgentDelegate *delegate;

+ (id)clientBundleIDForConnection:(id)arg1;
+ (id)clientXPCInterface;
+ (id)machServiceName;
+ (id)xpcInterface;

- (void).cxx_destruct;
- (id)_clientForBundleID:(id)arg1;
- (id)clientLink;
- (id)delegate;
- (id)initWithClientConnection:(id)arg1 clientLink:(id)arg2 indexer:(id)arg3;
- (void)setClientLink:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
