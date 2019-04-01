//
//	EZSaaSTreeModel.h
//
//	Create by jinke5 on 27/7/2018
//	Copyright © 2018. All rights reserved.
//

//	Model file Generated using JSONExport: https://github.com/Ahmed-Ali/JSONExport

#import <UIKit/UIKit.h>

@interface EZSaaSTreeModel : NSObject

@property (nonatomic, strong) NSObject * code;
@property (nonatomic, assign) NSInteger createBy;
@property (nonatomic, copy) NSString * createDate;
@property (nonatomic, copy) NSString* idField;
@property (nonatomic, assign) NSInteger isParent;
@property (nonatomic, copy) NSString * name;
@property (nonatomic, assign) NSInteger parentId;
@property (nonatomic, copy) NSString * parentIds;
@property (nonatomic, strong) NSObject * remarks;
@property (nonatomic, assign) NSInteger saasUserId;
@property (nonatomic, strong) NSObject * sort;
@property (nonatomic, assign) NSInteger updateBy;
@property (nonatomic, copy) NSString * updateDate;
@property (nonatomic, assign) BOOL  isSelected;
@property (nonatomic, assign) BOOL  isOpen;
@property (nonatomic, assign) NSInteger  level;
@property (nonatomic, copy) NSArray <EZSaaSTreeModel*>*subModel;

@property (nonatomic, assign) NSInteger dvcCnt;
@property (nonatomic, assign) NSInteger onlineDvcCnt;
@property (nonatomic, assign) NSInteger offLineDvcCnt;

@end
