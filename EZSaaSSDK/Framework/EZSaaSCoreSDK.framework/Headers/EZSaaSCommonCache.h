//
//  EZSaaSCommonCache.h
//  EZSaaS_enterprise
//
//  Created by jinke5 on 2018/7/3.
//  Copyright © 2018 EZSaaS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EZSaaSCache.h"

typedef NS_ENUM(NSInteger,EZSaaSCommonCacheKey) {
    EZSaaSCommonCacheKeyToken = 1,
    EZSaaSCommonCacheKeyAppKey,
    EZSaaSCommonCacheKeyAccessToken,
    EZSaaSCommonCacheKeySecretKey,
    EZSaaSCommonCacheKeyBaseURL,
    EZSaaSCommonCacheKeyAllURL,
    EZSaaSCommonCacheKeyH5URL,
    EZSaaSCommonCacheKeyHomeCellType,
    EZSaaSCommonCacheKeyRefreshToken,
    EZSaaSCommonCacheKeyPhoneNo,
    EZSaaSCommonCacheKeyLoginName,
    EZSaaSCommonCacheKeyLoginType,
    EZSaaSCommonCacheKeyUserId,
    EZSaaSCommonCacheKeyUserType,
    EZSaaSCommonCacheKeyEzvizEnv,
};

//常用字符串缓存
@interface EZSaaSCommonCache : EZSaaSCache

+(instancetype)sharedCommonCache;

+(void)setObject:(id<NSCoding>)object forCacheKey:(EZSaaSCommonCacheKey)cacheKey;

+(id)objectForCacheKey:(EZSaaSCommonCacheKey)cacheKey;

@end
