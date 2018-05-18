//
//  OGBaseSModel.h
//  OGDeviceSdk
//
//  Created by jerry on 2018/4/26.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface OGBaseSModel : NSObject

@property(nonatomic,assign) int status;
@property(nonatomic,copy) NSString * errCode; //成功返回时 0
@property(nonatomic,copy) NSString * errMsg;  //错误时返回错误说明，errCode 非 0 时有效

@end
