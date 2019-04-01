//
//  PureColorBtn.h
//  EZSaaSCommonPlugin
//
//  Created by jinke5 on 21/05/2018.
//

#import <UIKit/UIKit.h>

@interface EZSaaSPureColorBtn : UIButton

+(instancetype)buttonWithText:(NSString*)text andColor:(UIColor*)color;

+(instancetype)defaultButtonWithText:(NSString*)text;

+(instancetype)defaultClearButtonWithText:(NSString*)text;

-(void)setBackgroundColor:(UIColor *)color forState:(UIControlState)state;

@end
