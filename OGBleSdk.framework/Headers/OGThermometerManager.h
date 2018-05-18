//
//  OGThermometerManager.h
//  OGBleSdk
//
//  Created by jerry on 2018/5/2.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "OgDeviceInfo.h"
#import "OGBLEManger.h"
#import "OGThermometerRspData.h"

@protocol OGThermometerManagerDelegate <NSObject>

@required

//时时获取解析回来的数据
- (void)fetchValue:(OGThermometerData *)data;

@optional

@end

@interface OGThermometerManager : NSObject<CBPeripheralDelegate>

@property (nonatomic, strong) OgDeviceInfo * device;
@property (nonatomic, weak) id<OGThermometerManagerDelegate>delegate;

//获取单例
+ (instancetype)sharedManager;

-(void)initWithDevice:(OgDeviceInfo *)device;

-(void)startDiscoverServices;



@end
