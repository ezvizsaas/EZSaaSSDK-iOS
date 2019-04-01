//
//  EZSaaSMessCoverCache.h
//  EZSaaSCommonPlugin
//
//  Created by jinke5 on 2018/11/28.
//


#import <UIKit/UIKit.h>
#import "EZSaaSCache.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSMessCoverCache : EZSaaSCache

+(instancetype)sharedMessCoverCache;

+(void)setCover:(UIImage*)image forMessId:(NSString*)messId;

+(void)setCoverData:(NSData*)imageData forMessId:(NSString*)messId;

+(UIImage*)coverForMessageId:(NSString*)messId;

+(NSData*)coverDataForMessageId:(NSString*)messId;

@end

NS_ASSUME_NONNULL_END
