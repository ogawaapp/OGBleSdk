//
//  OGOximeterManager.h
//  OGDeviceSdk
//  血氧仪设备管理
//  Created by jerry on 2018/4/26.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "OgDeviceInfo.h"
#import "OGBLEManger.h"
#import "OGOximeterRspData.h"

@protocol OGOximeterManagerDelegate <NSObject>

@required

//实时获取解析回来的数据
- (void)fetchValue:(OGOximeterData *)data;

@optional

@end

@interface OGOximeterManager : NSObject<CBPeripheralDelegate>

@property (nonatomic, strong) OgDeviceInfo * device;
@property (nonatomic, weak) id<OGOximeterManagerDelegate>delegate;

//获取单例
+ (instancetype)sharedManager;

-(void)initWithDevice:(OgDeviceInfo *)device;

-(void)startDiscoverServices;

@end
