//
//  OGElectrocardiogramManager.h
//  OGDeviceSdk
//  心电设备管理
//  Created by jerry on 2018/4/27.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "OgDeviceInfo.h"
#import "OGBLEManger.h"
#import "OGElectrocardiogramRspData.h"

//探查设备回调
typedef void(^SearchBlock)(BOOL isready);

@protocol OGElectrocardiogramManagerDelegate <NSObject>

@required

//时时获取解析回来的数据
- (void)fetchValue:(OGElectrocardiogramData *)data;

@optional

@end

@interface OGElectrocardiogramManager : NSObject<CBPeripheralDelegate>

@property (nonatomic, strong) OgDeviceInfo * device;
@property (nonatomic, weak) id<OGElectrocardiogramManagerDelegate>delegate;

//获取单例
+ (instancetype)sharedManager;

-(void)initWithDevice:(OgDeviceInfo *)device;

-(void)startDiscoverServices;

//探查设备
-(void)searchDeviceWithBlock:(SearchBlock)searcgBlock;

//开始接收数据
-(void)receiveEcgResultDatas;

@end
