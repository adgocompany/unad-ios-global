//
//  UNADConfig.h
//  UNAD
//
//  Created by xiezuan on 2021/11/24.
//  Copyright © 2021 UNAD. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UNADConfig : NSObject



//设置是否关闭个性化推荐 默认为NO,
//此配置只对国内广告有效，对国外广告无效，是否个性推广告主要还是要App能获取到IDFA权限，
//国内广告可以在用户同意获取了IDFA之后选择关闭。
//获取IDFA要App主动配置和调用请求
@property(nonatomic, assign) BOOL disablePersonalRecommend;



@end

NS_ASSUME_NONNULL_END
