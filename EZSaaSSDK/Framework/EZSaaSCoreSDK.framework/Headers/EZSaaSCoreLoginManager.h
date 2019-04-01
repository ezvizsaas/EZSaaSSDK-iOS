//
//  EZSaaSLoginUtil.h
//  EZSaaSLoginPlugin
//
//  Created by jinke5 on 2018/11/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class EZSaaSLoginInfo;

@interface EZSaaSCoreLoginManager : NSObject

+(void)setupLoginInfo:(EZSaaSLoginInfo*)info;

+(void)setupLogOutBlock:(void(^ _Nullable)(void))logoutBlock;

+(void)logout;

@end

NS_ASSUME_NONNULL_END
