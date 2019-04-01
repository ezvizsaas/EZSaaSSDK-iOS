//
//  EZSaaSDeviceStatus.h
//  EZSaaSCommonPlugin
//
//  Created by jinke5 on 2018/11/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSDeviceStatus : NSObject

@property (nonatomic , assign) NSInteger              diskNum;
@property (nonatomic , copy) NSString              * diskState;
@property (nonatomic , assign) NSInteger              cloudStatus;
@property (nonatomic , assign) NSInteger              privacyStatus;
@property (nonatomic , assign) NSInteger              battryStatus;
@property (nonatomic , assign) NSInteger              nvrDiskNum;
@property (nonatomic , assign) NSInteger              alarmSoundMode;
@property (nonatomic , copy) NSString              * nvrDiskState;
@property (nonatomic , assign) NSInteger              pirStatus;
@property (nonatomic , assign) NSInteger              lockSignal;

@end

NS_ASSUME_NONNULL_END
