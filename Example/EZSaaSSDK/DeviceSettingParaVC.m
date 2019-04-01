//
//  DeviceSettingParaVC.m
//  EZSaaS_Enterprise_Demo
//
//  Created by jinke5 on 2019/3/19.
//  Copyright © 2019 jinke5. All rights reserved.
//

#import "DeviceSettingParaVC.h"
#import <EZSaaSSDK/EZSaaSSDK.h>

@interface DeviceSettingParaVC ()

@property (weak, nonatomic) IBOutlet UITextField *serialTF;
@property (weak, nonatomic) IBOutlet UITextField *channelNoTF;
@property (weak, nonatomic) IBOutlet UITextField *codeTF;
@property (weak, nonatomic) IBOutlet UIButton *goBtn;

@end

@implementation DeviceSettingParaVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    
}
- (IBAction)goBtnClicked:(id)sender {
    
    UIViewController *settingVC = [EZSaaSSDK getDeviceSettingViewControllerWithDeviceSerial:self.serialTF.text channelNo:self.channelNoTF.text.integerValue verifyCode:self.codeTF.text];
    
    [self presentViewController:settingVC animated:YES completion:nil];
}

@end
