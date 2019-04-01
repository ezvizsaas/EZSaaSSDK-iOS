//
//  EZSaaSBaseNavigationController.h
//  EZSaaS_enterprise
//
//  Created by jinke5 on 18/05/2018.
//  Copyright © 2018 EZSaaS. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^naviBackBlock)(void);

@interface EZSaaSBaseNaviController : UINavigationController <UIGestureRecognizerDelegate>
@property (nonatomic,copy) naviBackBlock backBlock;

-(instancetype)initWithRootViewController:(UIViewController *)rootViewController enableCloseBtn:(BOOL)enableClose;

@end
