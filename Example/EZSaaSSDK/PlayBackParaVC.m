//
//  PlayBackParaVC.m
//  EZSaaS_Enterprise_Demo
//
//  Created by jinke5 on 2019/3/19.
//  Copyright © 2019 jinke5. All rights reserved.
//

#import "PlayBackParaVC.h"
#import <EZSaaSSDK/EZSaaSSDK.h>

@interface PlayBackParaVC ()
@property (weak, nonatomic) IBOutlet UITextField *serialTF;
@property (weak, nonatomic) IBOutlet UITextField *channelNoTF;
@property (weak, nonatomic) IBOutlet UITextField *codeTF;
@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker;
@property (weak, nonatomic) IBOutlet UIButton *goBtn;
@property (weak, nonatomic) IBOutlet UISegmentedControl *playBackSeg;

@end

@implementation PlayBackParaVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (IBAction)goBtnClicked:(id)sender {
    
    if (self.playBackSeg.selectedSegmentIndex == 0) {
        
        UIViewController *playBackVC = [EZSaaSSDK getLocalPlaybackVCWithDeviceSerial:self.serialTF.text channelNo:self.channelNoTF.text.integerValue verifyCode:self.codeTF.text andDefaultDate:self.datePicker.date];
        
        [self presentViewController:playBackVC animated:YES completion:nil];
    }else{
        NSDate *date = self.datePicker.date;
        
        UIViewController *playBackVC = [EZSaaSSDK getCloudPlaybackVCWithDeviceSerial:self.serialTF.text channelNo:self.channelNoTF.text.integerValue verifyCode:self.codeTF.text andDefaultDate:date];
        [self presentViewController:playBackVC animated:YES completion:nil];
    }

}

@end
