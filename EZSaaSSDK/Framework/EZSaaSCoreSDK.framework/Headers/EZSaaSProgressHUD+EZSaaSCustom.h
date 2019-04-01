//
//  EZSaaSProgressHUD+EZSaaSCustom.h
//  Pods
//
//  Created by jinke5 on 2018/9/14.
//

#import "EZSaaSProgressHUD.h"

@interface EZSaaSProgressHUD (EZSaaSCustom)

+(void)showWithClearMaskAndNoDismiss:(NSString*)info;

+(void)resetDefaultSettings;

@end

