//
//  EZSaaSCalendarConstane.h
//  EZSaaSCalendar
//
//  Created by dingwenchao on 8/28/15.
//  Copyright © 2016 Wenchao Ding. All rights reserved.
//
//  https://github.com/WenchaoD
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#pragma mark - Constants

CG_EXTERN CGFloat const EZSaaSCalendarStandardHeaderHeight;
CG_EXTERN CGFloat const EZSaaSCalendarStandardWeekdayHeight;
CG_EXTERN CGFloat const EZSaaSCalendarStandardMonthlyPageHeight;
CG_EXTERN CGFloat const EZSaaSCalendarStandardWeeklyPageHeight;
CG_EXTERN CGFloat const EZSaaSCalendarStandardCellDiameter;
CG_EXTERN CGFloat const EZSaaSCalendarStandardSeparatorThickness;
CG_EXTERN CGFloat const EZSaaSCalendarAutomaticDimension;
CG_EXTERN CGFloat const EZSaaSCalendarDefaultBounceAnimationDuration;
CG_EXTERN CGFloat const EZSaaSCalendarStandardRowHeight;
CG_EXTERN CGFloat const EZSaaSCalendarStandardTitleTextSize;
CG_EXTERN CGFloat const EZSaaSCalendarStandardSubtitleTextSize;
CG_EXTERN CGFloat const EZSaaSCalendarStandardWeekdayTextSize;
CG_EXTERN CGFloat const EZSaaSCalendarStandardHeaderTextSize;
CG_EXTERN CGFloat const EZSaaSCalendarMaximumEventDotDiameter;
CG_EXTERN CGFloat const EZSaaSCalendarStandardScopeHandleHeight;

UIKIT_EXTERN NSInteger const EZSaaSCalendarDefaultHourComponent;

UIKIT_EXTERN NSString * const EZSaaSCalendarDefaultCellReuseIdentifier;
UIKIT_EXTERN NSString * const EZSaaSCalendarBlankCellReuseIdentifier;
UIKIT_EXTERN NSString * const EZSaaSCalendarInvalidArgumentsExceptionName;

CG_EXTERN CGPoint const CGPointInfinity;
CG_EXTERN CGSize const CGSizeAutomatic;

#if TARGET_INTERFACE_BUILDER
#define EZSaaSCalendarDeviceIsIPad NO
#else
#define EZSaaSCalendarDeviceIsIPad [[UIDevice currentDevice].model hasPrefix:@"iPad"]
#endif

#define EZSaaSCalendarStandardSelectionColor   EZSaaSColorRGBA(31,119,219,1.0)
#define EZSaaSCalendarStandardTodayColor       EZSaaSColorRGBA(198,51,42 ,1.0)
#define EZSaaSCalendarStandardTitleTextColor   EZSaaSColorRGBA(14,69,221 ,1.0)
#define EZSaaSCalendarStandardEventDotColor    EZSaaSColorRGBA(31,119,219,0.75)

#define EZSaaSCalendarStandardLineColor        [[UIColor lightGrayColor] colorWithAlphaComponent:0.30]
#define EZSaaSCalendarStandardSeparatorColor   [[UIColor lightGrayColor] colorWithAlphaComponent:0.60]
#define EZSaaSCalendarStandardScopeHandleColor [[UIColor lightGrayColor] colorWithAlphaComponent:0.50]

#define EZSaaSColorRGBA(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define EZSaaSCalendarInAppExtension [[[NSBundle mainBundle] bundlePath] hasSuffix:@".appex"]

#if CGFLOAT_IS_DOUBLE
#define EZSaaSCalendarFloor(c) floor(c)
#define EZSaaSCalendarRound(c) round(c)
#define EZSaaSCalendarCeil(c) ceil(c)
#define EZSaaSCalendarMod(c1,c2) fmod(c1,c2)
#else
#define EZSaaSCalendarFloor(c) floorf(c)
#define EZSaaSCalendarRound(c) roundf(c)
#define EZSaaSCalendarCeil(c) ceilf(c)
#define EZSaaSCalendarMod(c1,c2) fmodf(c1,c2)
#endif

#define EZSaaSCalendarUseWeakSelf __weak __typeof__(self) EZSaaSCalendarWeakSelf = self;
#define EZSaaSCalendarUseStrongSelf __strong __typeof__(self) self = EZSaaSCalendarWeakSelf;


#pragma mark - Deprecated

#define EZSaaSCalendarDeprecated(instead) DEPRECATED_MSG_ATTRIBUTE(" Use " # instead " instead")

EZSaaSCalendarDeprecated('borderRadius')
typedef NS_ENUM(NSUInteger, EZSaaSCalendarCellShape) {
    EZSaaSCalendarCellShapeCircle    = 0,
    EZSaaSCalendarCellShapeRectangle = 1
};

typedef NS_ENUM(NSUInteger, EZSaaSCalendarUnit) {
    EZSaaSCalendarUnitMonth = NSCalendarUnitMonth,
    EZSaaSCalendarUnitWeekOfYear = NSCalendarUnitWeekOfYear,
    EZSaaSCalendarUnitDay = NSCalendarUnitDay
};

static inline void EZSaaSCalendarSliceCake(CGFloat cake, NSInteger count, CGFloat *pieces) {
    CGFloat total = cake;
    for (int i = 0; i < count; i++) {
        NSInteger remains = count - i;
        CGFloat piece = EZSaaSCalendarRound(total/remains*2)*0.5;
        total -= piece;
        pieces[i] = piece;
    }
}



