/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPSerializer : NSObject <SYChangeSerializer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)changeFromData:(id)arg1 ofType:(int)arg2;
- (id)dataFromChange:(id)arg1;
- (id)decodeChangeData:(id)arg1 fromProtocolVersion:(int)arg2 ofType:(int)arg3;
- (id)encodeSYChangeForBackwardCompatibility:(id)arg1 protocolVersion:(int)arg2;

@end
