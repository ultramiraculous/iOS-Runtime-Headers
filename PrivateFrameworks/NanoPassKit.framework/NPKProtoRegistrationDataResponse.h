/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@class NSData, NSString;

@interface NPKProtoRegistrationDataResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int pending : 1; 
    } _has;
    BOOL _pending;
    NSString *_pushToken;
    NSData *_registrationDataBytes;
}

@property BOOL hasPending;
@property(readonly) BOOL hasPushToken;
@property(readonly) BOOL hasRegistrationDataBytes;
@property BOOL pending;
@property(retain) NSString * pushToken;
@property(retain) NSData * registrationDataBytes;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPending;
- (BOOL)hasPushToken;
- (BOOL)hasRegistrationDataBytes;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)pending;
- (id)pushToken;
- (BOOL)readFrom:(id)arg1;
- (id)registrationDataBytes;
- (void)setHasPending:(BOOL)arg1;
- (void)setPending:(BOOL)arg1;
- (void)setPushToken:(id)arg1;
- (void)setRegistrationDataBytes:(id)arg1;
- (void)writeTo:(id)arg1;

@end