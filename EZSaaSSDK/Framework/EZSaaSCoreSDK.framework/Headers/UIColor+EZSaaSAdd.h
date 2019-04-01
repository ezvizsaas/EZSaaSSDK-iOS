//
//  UIColor+EZSaaSAdd.h
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

/*
 Create UIColor with a hex string.
 Example: EZSaaSUIColorHex(0xF0F), EZSaaSUIColorHex(66ccff), EZSaaSUIColorHex(#66CCFF88)
 
 Valid format: #RGB #RGBA #RRGGBB #RRGGBBAA 0xRGB ...
 The `#` or "0x" sign is not required.
 */
#ifndef EZSaaSUIColorHex
#define EZSaaSUIColorHex(_hex_)   [UIColor ezsaas_colorWithHexString:((__bridge NSString *)CFSTR(#_hex_))]
#endif


@interface UIColor (EZSaaSAdd)
/**
 Creates and returns a color object from hex string.
 
 @discussion:
 Valid format: #RGB #RGBA #RRGGBB #RRGGBBAA 0xRGB ...
 The `#` or "0x" sign is not required.
 The alpha will be set to 1.0 if there is no alpha component.
 It will return nil when an error occurs in parsing.
 
 Example: @"0xF0F", @"66ccff", @"#66CCFF88"
 
 @param hexStr  The hex string value for the new color.
 
 @return        An UIColor object from string, or nil if an error occurs.
 */
+ (nullable UIColor *)ezsaas_colorWithHexString:(NSString *)hexStr;

@end

NS_ASSUME_NONNULL_END
