//
//  ABNetworkManager.h
//  ABroad
//
//  Created by gaojun on 16/8/17.
//  Copyright © 2016年 jesus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFHTTPSessionManager.h>

typedef void (^serverSuccessFn)(id response);
typedef void (^serverFailureFn)(NSError *error);

@interface EZSaaSBaseNetworkManager : AFHTTPSessionManager

+(EZSaaSBaseNetworkManager *)sharedManager;

+(void)resetShardManager;

+(void)AFPOSTNetworkWithUrl:(NSString *)url andBody:(NSMutableDictionary *)body andSuccess:(serverSuccessFn)successFn andFailer:(serverFailureFn)failerFn;

+(void)AFGETNetworkWithUrl:(NSString *)url andBody:(NSMutableDictionary *)body andSuccess:(serverSuccessFn)successFn andFailer:(serverFailureFn)failerFn;

+(void)AFPOSTOpenSDKWithUrl:(NSString *)url andBody:(NSMutableDictionary *)body andSuccess:(serverSuccessFn)successFn andFailer:(serverFailureFn)failerFn;

+(void)AFUploadImageWithData:(NSData*)data fileName:(NSString*)fileName andSuccess:(serverSuccessFn)successFn andFailer:(serverFailureFn)failerFn;

+(void)AFPOSTOpenAuthSDKWithUrl:(NSString *)url andBody:(NSMutableDictionary *)body andSuccess:(serverSuccessFn)successFn andFailer:(serverFailureFn)failerFn;

+(void)AFGETOpenAuthSDKImageWithUrl:(NSString *)url andBody:(NSMutableDictionary *)body andSuccess:(serverSuccessFn)successFn andFailer:(serverFailureFn)failerFn;

@end
