//
//  OGBloodPressureManager.h
//  OGDeviceSdk
//  血压设备管理
//  Created by jerry on 2018/4/26.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "OgDeviceInfo.h"
#import "OGBLEManger.h"
#import "OGBloodPressureResData.h"

//读取历史记录数据
typedef void(^HistoryDataBlock)(NSArray<OGBloodPressureData*> * datas);

@protocol OGBloodPressureManagerDelegate <NSObject>

@required

//时时获取解析回来的数据
- (void)fetchValue:(OGBloodPressureData *)data;

@optional

@end

@interface OGBloodPressureManager : NSObject<CBPeripheralDelegate>

@property (nonatomic, strong) OgDeviceInfo * device;
@property (nonatomic, weak) id<OGBloodPressureManagerDelegate>delegate;

//获取单例
+ (instancetype)sharedManager;

-(void)initWithDevice:(OgDeviceInfo *)device;

-(void)startDiscoverServices;

//读取历史记录
-(void)getHistoryDataWithBlock:(HistoryDataBlock)block;

//开始测量
-(void)startMeasure;
//结束测量
-(void)endMeasure;

//关机
-(void)offMeasure;


@end
