//
//  EZSaaSRefreshAutoGifFooter.h
//  EZSaaSRefreshExample
//
//  Created by EZSaaS Lee on 15/4/24.
//  Copyright (c) 2015年 小码哥. All rights reserved.
//

#import "EZSaaSRefreshAutoStateFooter.h"

@interface EZSaaSRefreshAutoGifFooter : EZSaaSRefreshAutoStateFooter
@property (weak, nonatomic, readonly) UIImageView *gifView;

/** 设置state状态下的动画图片images 动画持续时间duration*/
- (void)setImages:(NSArray *)images duration:(NSTimeInterval)duration forState:(EZSaaSRefreshState)state;
- (void)setImages:(NSArray *)images forState:(EZSaaSRefreshState)state;
@end
