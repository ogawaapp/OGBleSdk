//
//  OGOximeterRspData.h
//  OGDeviceSdk
//  血氧仪解析返回数据
//  Created by jerry on 2018/4/26.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OGBaseModel.h"
#import "OGBaseSModel.h"

@class OGOximeterData;
@interface OGOximeterRspData : OGBaseSModel

@property(nonatomic,strong) OGOximeterData *data;

@end

@interface OGOximeterData : OGBaseSModel

@property(nonatomic,assign) int pulse;           //脉率 (范围:25-250，255 为无效值) 单位 bpm
@property(nonatomic,assign) int saturation;      //血氧飽和度 (35-100，127 为无效值)单位%
@property(nonatomic,assign) int index;           //指数 (0-200， 0 为无效值)
@property(nonatomic,assign) int pulseUpper;      //血氧報警限上限
@property(nonatomic,assign) int pulseLower;      //血氧報警限下限
@property(nonatomic,assign) int saturationUpper; //脉率報警限上限
@property(nonatomic,assign) int saturationLower; //脉率報警限下限

@end
