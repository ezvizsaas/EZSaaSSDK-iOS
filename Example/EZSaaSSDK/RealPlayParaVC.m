//
//  RealPlayParaVC.m
//  EZSaaS_Enterprise_Demo
//
//  Created by jinke5 on 2019/3/18.
//  Copyright © 2019 jinke5. All rights reserved.
//

#import "RealPlayParaVC.h"
#import <EZSaaSCoreSDK/EZSaaSCoreSDK.h>
#import <EZSaaSSDK/EZSaaSSDK.h>

@interface RealPlayParaVC () <UITableViewDelegate,UITableViewDataSource>
@property (weak, nonatomic) IBOutlet UITableView *cameraListV;
@property (weak, nonatomic) IBOutlet UITextField *serialTF;
@property (weak, nonatomic) IBOutlet UITextField *channelNoTF;
@property (weak, nonatomic) IBOutlet UITextField *codeTF;
@property (weak, nonatomic) IBOutlet UIButton *addBtn;
@property (nonatomic,strong) NSMutableArray *cameraList;
@property (weak, nonatomic) IBOutlet UITextField *indexTF;
@property (weak, nonatomic) IBOutlet UIButton *goBtn;


@end

@implementation RealPlayParaVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.cameraListV.delegate = self;
    self.cameraListV.dataSource = self;
    [self.cameraListV registerClass:[UITableViewCell class] forCellReuseIdentifier:@"cameraList"];
}

- (NSMutableArray *)cameraList
{
    if (!_cameraList) {
        _cameraList = [NSMutableArray arrayWithCapacity:10];
    }
    return _cameraList;
}

-(NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}

-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.cameraList.count;
}

-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"cameraList" forIndexPath:indexPath];
    
    EZSaaSCameraInfo *info = self.cameraList[indexPath.row];
    
    cell.textLabel.text = [NSString stringWithFormat:@"%@-%ld(%@)",info.deviceSerial,(long)info.channelNo,info.ipcValidateCode];
    
    return cell;
}

- (IBAction)addBtnClicked:(id)sender {
    
    if (self.serialTF.text.length && self.channelNoTF.text.length) {
        EZSaaSCameraInfo *cameraInfo = [[EZSaaSCameraInfo alloc]initWithSerialNo:self.serialTF.text channelNo:self.channelNoTF.text.integerValue andPassword:self.codeTF.text];
        [self.cameraList addObject:cameraInfo];
        [self.cameraListV reloadData];
    }
}

- (IBAction)jumpToRealPlay:(id)sender {
    
    UIViewController *realPlayVC = [EZSaaSSDK getRealPlayViewControllerWithCameraList:self.cameraList andIndex:self.indexTF.text.integerValue];
    
    [self presentViewController:realPlayVC animated:YES completion:nil];
}


@end
