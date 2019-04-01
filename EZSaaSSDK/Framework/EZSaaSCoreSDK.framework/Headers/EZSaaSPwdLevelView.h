//
//  EZSaaSPwdLevelView.h
//  EZSaaSCoreSDK
//
//  Created by jinke5 on 2019/1/29.
//  Copyright © 2019 jinke5. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,EZSaaSPwdLevel) {
    EZSaaSPwdLevelNone = 0,
    EZSaaSPwdLevelLow,
    EZSaaSPwdLevelMedium,
    EZSaaSPwdLevelHigh
};

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSPwdLevelView : UIView

@property (nonatomic,assign) EZSaaSPwdLevel  level;

@end

NS_ASSUME_NONNULL_END
