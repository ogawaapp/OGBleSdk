//
//  OGEctManager.h
//  OGBleSdk
//  心电
//  Created by jerry on 2018/5/15.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OGElectrocardiogramRspData.h"

@protocol OGEctManagerDelegate <NSObject>

@required
//获取解析回来的数据
- (void)fetchValue:(OGElectrocardiogramData *)data;

@optional

@end

@interface OGEctManager : NSObject

@property (nonatomic, weak) id<OGEctManagerDelegate>delegate;

/**设置蓝牙开始扫描多少时间，没收到设备后断开扫描*/
@property (nonatomic, unsafe_unretained)float scanBlueTime;

/**设置蓝牙已经打开后，扫描继续多少时间，没收到设备后断开*/
@property (nonatomic, unsafe_unretained)float didUpdateTime;

/**设置蓝牙已经发现设备并尝试连接设备，多少时间没连接设备，断开*/
@property (nonatomic, unsafe_unretained)float didDiscoverTime;

/**设置蓝牙已连接到设备，多少时间没收到设备数据，断开*/
@property (nonatomic, unsafe_unretained)float didConnectTime;

/**设置蓝牙在接收数据的时间范围，超过时间范围，断开*/
@property (nonatomic, unsafe_unretained)float didUpdateNotificationStateTime;

/**设置蓝牙给设备写入数据后,多少时间没收到数据，就断开*/
@property (nonatomic, unsafe_unretained)float writeCharTime;

//获取单例
+ (instancetype)sharedManager;

//开始扫描心电设备
-(void)startScanDevice;

//断开心电设备
- (void)stopScanBluetoothDevice;

@end
