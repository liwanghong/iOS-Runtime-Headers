/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class PFUbiquityKnowledgeVector, PFUbiquityLocation;

@interface PFUbiquityPeerReceipt : PFUbiquitySafeSaveFile {
    PFUbiquityKnowledgeVector *_kv;
}

@property(readonly) PFUbiquityKnowledgeVector * kv;
@property(readonly) PFUbiquityLocation * receiptFileLocation;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 andKnowledgeVector:(id)arg2 forPeerID:(id)arg3 storeName:(id)arg4 modelVersionHash:(id)arg5 andUbiquityRootLocation:(id)arg6;
- (id)initWithLocalPeerID:(id)arg1 andReceiptFileLocation:(id)arg2;
- (id)initWithLocalPeerID:(id)arg1 receiptPeerID:(id)arg2 storeName:(id)arg3 modelVersionHash:(id)arg4 andUbiquityRootLocation:(id)arg5;
- (id)kv;
- (BOOL)loadFileFromLocation:(id)arg1 error:(id*)arg2;
- (id)receiptFileLocation;
- (BOOL)writeFileToLocation:(id)arg1 error:(id*)arg2;

@end