//
//  EZSaaSOrgTreeSDK.h
//  EZSaaSOrgTreeSDK
//
//  Created by jinke5 on 2019/1/21.
//  Copyright © 2019 jinke5. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for EZSaaSOrgTreeSDK.
FOUNDATION_EXPORT double EZSaaSOrgTreeSDKVersionNumber;

//! Project version string for EZSaaSOrgTreeSDK.
FOUNDATION_EXPORT const unsigned char EZSaaSOrgTreeSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <EZSaaSOrgTreeSDK/PublicHeader.h>

@class EZSaaSTreeModel;

@interface EZSaaSOrgTreeSDK : NSObject

+(void)showOrgTreeVCWithSelectedModel:(EZSaaSTreeModel *)selectedModel confirmBlock:(void(^)(EZSaaSTreeModel* model))confirmBlock;

+(UIViewController *)getOrgTreeViewControllerWithSelectedModel:(EZSaaSTreeModel *)selectedModel confirmBlock:(void(^)(EZSaaSTreeModel* model))confirmBlock;

@end
