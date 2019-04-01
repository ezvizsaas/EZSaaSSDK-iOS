//  代码地址: https://github.com/CoderEZSaaSLee/EZSaaSRefresh
//  代码地址: http://code4app.com/ios/%E5%BF%AB%E9%80%9F%E9%9B%86%E6%88%90%E4%B8%8B%E6%8B%89%E4%B8%8A%E6%8B%89%E5%88%B7%E6%96%B0/52326ce26803fabc46000000
//  UIScrollView+Extension.h
//  EZSaaSRefreshExample
//
//  Created by EZSaaS Lee on 14-5-28.
//  Copyright (c) 2014年 小码哥. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScrollView (EZSaaSExtension)
@property (readonly, nonatomic) UIEdgeInsets ezsaas_inset;

@property (assign, nonatomic) CGFloat ezsaas_insetT;
@property (assign, nonatomic) CGFloat ezsaas_insetB;
@property (assign, nonatomic) CGFloat ezsaas_insetL;
@property (assign, nonatomic) CGFloat ezsaas_insetR;

@property (assign, nonatomic) CGFloat ezsaas_offsetX;
@property (assign, nonatomic) CGFloat ezsaas_offsetY;

@property (assign, nonatomic) CGFloat ezsaas_contentW;
@property (assign, nonatomic) CGFloat ezsaas_contentH;
@end
