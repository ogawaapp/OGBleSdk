//
//  OGHandringManager.h
//  OGBleSdk
//  手环
//  Created by jerry on 2018/5/2.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "OgDeviceInfo.h"
#import "OGBLEManger.h"
#import "OGHandringRspData.h"

@protocol OGHandringManagerDelegate <NSObject>

@required

- (void)fetchValue:(OGHandringData *)data;

@optional

@end

@interface OGHandringManager : NSObject<CBPeripheralDelegate>

@property (nonatomic, strong) OgDeviceInfo * device;
@property (nonatomic, weak) id<OGHandringManagerDelegate>delegate;

//获取单例
+ (instancetype)sharedManager;

-(void)initWithDevice:(OgDeviceInfo *)device;

-(void)startDiscoverServices;

//设置为当前时间
-(void)setCurrentTime;

//获取当前时间
-(void)fetCurrentTime;

//开始同步获取心率数据
-(void)startGetDatas;


@end
