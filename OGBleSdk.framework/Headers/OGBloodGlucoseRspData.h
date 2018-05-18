//
//  OGBloodGlucoseRspData.h
//  OGBleSdk
//  血糖仪
//  Created by jerry on 2018/5/2.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OGBaseModel.h"
#import "OGBaseSModel.h"

@class OGBloodGlucoseData;
@interface OGBloodGlucoseRspData : OGBaseSModel

@property(nonatomic,strong) OGBloodGlucoseData *data;

@end

@interface OGBloodGlucoseData : OGBaseSModel

@property(nonatomic,assign) double mmo;  //血糖值(毫摩尔/升) 例:12.4mmol/L

@end
