//
//  OGFatScaleManager.h
//  OGDeviceSdk
//  体脂称设备管理
//  Created by jerry on 2018/4/26.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "OgDeviceInfo.h"
#import "OGBLEManger.h"
#import "OGFatScaleRspData.h"

@protocol OGFatScaleManagerDelegate <NSObject>

@required

//时时获取解析回来的数据
- (void)fetchValue:(OGFatScaleData *)data;

@optional

@end

@interface OGFatScaleManager : NSObject<CBPeripheralDelegate>

@property (nonatomic, strong) OgDeviceInfo * device;
@property (nonatomic, weak) id<OGFatScaleManagerDelegate>delegate;

//获取单例
+ (instancetype)sharedManager;

-(void)initWithDevice:(OgDeviceInfo *)device;

-(void)startDiscoverServices;

@end
