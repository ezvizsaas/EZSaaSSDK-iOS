//
//  EZSaaSLoginSDK.h
//  EZSaaSLoginSDK
//
//  Created by jinke5 on 2019/1/21.
//  Copyright © 2019 jinke5. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for EZSaaSLoginSDK.
FOUNDATION_EXPORT double EZSaaSLoginSDKVersionNumber;

//! Project version string for EZSaaSLoginSDK.
FOUNDATION_EXPORT const unsigned char EZSaaSLoginSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <EZSaaSLoginSDK/PublicHeader.h>

@class EZSaaSLoginInfo;

@interface EZSaaSLoginSDK : NSObject

+(UIViewController *)getLoginVCwithSuccessBlock:(void (^_Nullable)(EZSaaSLoginInfo* _Nullable info))successBlock;

@end

