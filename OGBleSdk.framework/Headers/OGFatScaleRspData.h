//
//  OGFatScaleRspData.h
//  OGDeviceSdk
//  体脂解析返回数据
//  Created by jerry on 2018/4/26.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OGBaseModel.h"
#import "OGBaseSModel.h"

@class OGFatScaleData;
@interface OGFatScaleRspData : OGBaseSModel

@property(nonatomic,strong) OGFatScaleData *data;


@end

@interface OGFatScaleData : OGBaseSModel

@property(nonatomic,assign) double weight;    //体重(kg)
@property(nonatomic,assign)   int impedance;  //体阻(Ω)

@end
