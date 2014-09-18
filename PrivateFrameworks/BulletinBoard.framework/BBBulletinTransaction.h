/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSString;

@interface BBBulletinTransaction : NSObject {
    NSString *_bulletinID;
    unsigned long long _transactionID;
}

@property(copy,readonly) NSString * bulletinID;
@property(readonly) unsigned long long transactionID;

+ (id)transactionWithBulletinID:(id)arg1;

- (id)bulletinID;
- (void)dealloc;
- (id)description;
- (unsigned long long)incrementTransactionID;
- (id)initWithBulletinID:(id)arg1;
- (unsigned long long)transactionID;

@end