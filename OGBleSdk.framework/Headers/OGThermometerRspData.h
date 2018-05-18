//
//  OGThermometerRspData.h
//  OGDeviceSdk
//  温度计解析返回数据
//  Created by jerry on 2018/4/26.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OGBaseModel.h"
#import "OGBaseSModel.h"

@class OGThermometerData;
@interface OGThermometerRspData : OGBaseSModel

@property(nonatomic,strong) OGThermometerData *data;

@end

@interface OGThermometerData : OGBaseModel

@property(nonatomic,copy)   NSString * type; //温度类型 55:物温 22:耳温 33:额温
@property(nonatomic,assign) double value;    //温度值(摄氏度)

@end
