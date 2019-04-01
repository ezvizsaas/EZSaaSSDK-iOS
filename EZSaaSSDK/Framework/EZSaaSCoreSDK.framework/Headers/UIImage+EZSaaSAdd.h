//
//  UIImage+EZSaaSAdd.h
//  EZSaaSCategories <https://github.com/ibireme/EZSaaSCategories>
//
//  Created by ibireme on 13/4/4.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Provide some commen method for `UIImage`.
 Image process is based on CoreGraphic and vImage.
 */
@interface UIImage (EZSaaSAdd)

#pragma mark - Create image
///=============================================================================
/// @name Create image
///=============================================================================

/**
 Create an animated image with GIF data. After created, you can access
 the images via property '.images'. If the data is not animated gif, this
 function is same as [UIImage imageWithData:data scale:scale];
 
 @discussion     It has a better display performance, but costs more memory
                 (width * height * frames Bytes). It only suited to display small 
                 gif such as animated emoji. If you want to display large gif, 
                 see `YYImage`.
 
 @param data     GIF data.
 
 @param scale    The scale factor
 
 @return A new image created from GIF, or nil when an error occurs.
 */
+ (nullable UIImage *)ezsaas_imageWithSmallGIFData:(NSData *)data scale:(CGFloat)scale;


/**
 Create and return a 1x1 point size image with the given color.
 
 @param color  The color.
 */
+ (nullable UIImage *)ezsaas_imageWithColor:(UIColor *)color;


@end

NS_ASSUME_NONNULL_END
