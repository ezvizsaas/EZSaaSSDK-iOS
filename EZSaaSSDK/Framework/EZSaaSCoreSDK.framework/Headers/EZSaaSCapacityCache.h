//
//  EZSaaSCapacityCache.h
//  EZSaaSCommonPlugin
//
//  Created by jinke5 on 2018/8/31.
//

#import "EZSaaSCache.h"

@class EZSaaSDeviceCapacity;

//设备能力集缓存
@interface EZSaaSCapacityCache : EZSaaSCache

+ (instancetype)sharedCapacityCache;

+(void)setCapcity:(EZSaaSDeviceCapacity*)capacity forDeivice:(NSString*)deviceSerial;

+(EZSaaSDeviceCapacity*)capcityForDevice:(NSString*)deviceSerial;

+(void)capacityForDevice:(NSString*)deviceSerial withCompletionBlock:(void(^)(EZSaaSDeviceCapacity*capacity))comBlock;

@end
