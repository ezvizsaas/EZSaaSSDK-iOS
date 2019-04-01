//
//  UIImage+EZSaaSLoader.h
//  EZSaaSCommonPlugin
//
//  Created by jinke5 on 2018/11/5.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,EZSaaSBundleName) {
    EZSaaSBundleNameHome = 1,
    EZSaaSBundleNameLogin,
    EZSaaSBundleNameAddDevice,
    EZSaaSBundleNameOrgTree,
    EZSaaSBundleNameDeviceSetting,
    EZSaaSBundleNameAlbum,
    EZSaaSBundleNameMessage,
    EZSaaSBundleNameRealPlay,
    EZSaaSBundleNamePlayBack,
    EZSaaSBundleNameMine,
    EZSaaSBundleNameCommon,
    EZSaaSBundleNameModule,
    EZSaaSBundleNameReactNative,
    EZSaaSBundleNameWiFiTest
};

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (EZSaaSLoader)

+(instancetype)imageFromSelfBundle:(id)selfBundle subBundleName:(EZSaaSBundleName)bundleName imageName:(NSString*)imageName;

@end

NS_ASSUME_NONNULL_END
