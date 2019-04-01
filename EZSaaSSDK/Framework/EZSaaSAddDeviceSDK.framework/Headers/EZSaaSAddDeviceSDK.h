//
//  EZSaaSAddDeviceSDK.h
//  EZSaaSAddDeviceSDK
//
//  Created by jinke5 on 2019/1/21.
//  Copyright © 2019 jinke5. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for EZSaaSAddDeviceSDK.
FOUNDATION_EXPORT double EZSaaSAddDeviceSDKVersionNumber;

//! Project version string for EZSaaSAddDeviceSDK.
FOUNDATION_EXPORT const unsigned char EZSaaSAddDeviceSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <EZSaaSAddDeviceSDK/PublicHeader.h>

@interface EZSaaSAddDeviceSDK : NSObject

+(UIViewController*)getAddDeviceByQRVCWithOrgId:(NSString*)orgId;

@end
