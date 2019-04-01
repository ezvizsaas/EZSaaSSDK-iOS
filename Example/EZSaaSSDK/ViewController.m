//
//  ViewController.m
//  EZSaaS_Enterprise_Demo
//
//  Created by jinke5 on 2019/3/5.
//  Copyright © 2019 jinke5. All rights reserved.
//

#import "ViewController.h"
#import <EZSaaSSDK/EZSaaSSDK.h>
#import <EZSaaSLoginSDK/EZSaaSLoginSDK.h>
#import <EZSaaSRealPlaySDK/EZSaaSRealPlaySDK.h>
#import <EZSaaSDeviceSettingSDK/EZSaaSDeviceSettingSDK.h>
#import <EZSaaSCoreSDK/EZSaaSCoreSDK.h>
#import <EZSaaSAddDeviceSDK/EZSaaSAddDeviceSDK.h>

@interface ViewController ()

@property (weak, nonatomic) IBOutlet UITextView *tokenTV;
@property (weak, nonatomic) IBOutlet UIButton *confirmTokenBtn;
@property (weak, nonatomic) IBOutlet UIButton *jumpToLoginBtn;
@property (weak, nonatomic) IBOutlet UIButton *jumpToRealPlayBtn;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
}

- (IBAction)jumpToLoginViewController:(id)sender {
    
    UIViewController *loginVC = [EZSaaSSDK getLoginVCwithSuccessBlock:^(EZSaaSLoginInfo * _Nullable info) {
        self.tokenTV.text = info.token;
        [self dismissViewControllerAnimated:YES completion:nil];
    }];
    
    [self presentViewController:loginVC animated:YES completion:nil];
}

- (IBAction)confirmTokenBtnClicked:(UIButton *)sender {
    [EZSaaSSDK setToken:self.tokenTV.text withExpireBlock:^{
        [EZSaaSProgressHUD showInfoWithStatus:@"token过期回调执行"];
    }];
}

- (IBAction)jumpToAddDeviceVC:(id)sender {
    
    UIViewController *addDeviceVC = [EZSaaSSDK getAddDeviceVCWithOrgTreeModel:nil];
    
    [self presentViewController:addDeviceVC animated:YES completion:nil];
}


- (IBAction)jumpToAlbumListVC:(id)sender {
    UIViewController *albumVC = [EZSaaSSDK getAlbumListVC];
    [self presentViewController:albumVC animated:YES completion:nil];
}
- (IBAction)pasteBtnClicked:(id)sender {
    self.tokenTV.text =  [UIPasteboard generalPasteboard].string;
}
- (IBAction)clearTokenBtnClicked:(id)sender {
    self.tokenTV.text = nil;
    [EZSaaSSDK logout];
}

@end
