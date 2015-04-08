/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@class NSString;

@interface _NMRNowPlayingApplicationStateProtobuf : PBCodable <NSCopying> {
    NSString *_companionBundleIdentifier;
    struct { 
        unsigned int playbackState : 1; 
    } _has;
    NSString *_localizedDisplayName;
    unsigned int _playbackState;
    NSString *_watchBundleIdentifier;
}

@property(retain) NSString * companionBundleIdentifier;
@property(readonly) BOOL hasCompanionBundleIdentifier;
@property(readonly) BOOL hasLocalizedDisplayName;
@property BOOL hasPlaybackState;
@property(readonly) BOOL hasWatchBundleIdentifier;
@property(retain) NSString * localizedDisplayName;
@property unsigned int playbackState;
@property(retain) NSString * watchBundleIdentifier;

- (void).cxx_destruct;
- (id)companionBundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCompanionBundleIdentifier;
- (BOOL)hasLocalizedDisplayName;
- (BOOL)hasPlaybackState;
- (BOOL)hasWatchBundleIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)localizedDisplayName;
- (void)mergeFrom:(id)arg1;
- (unsigned int)playbackState;
- (BOOL)readFrom:(id)arg1;
- (void)setCompanionBundleIdentifier:(id)arg1;
- (void)setHasPlaybackState:(BOOL)arg1;
- (void)setLocalizedDisplayName:(id)arg1;
- (void)setPlaybackState:(unsigned int)arg1;
- (void)setWatchBundleIdentifier:(id)arg1;
- (id)watchBundleIdentifier;
- (void)writeTo:(id)arg1;

@end