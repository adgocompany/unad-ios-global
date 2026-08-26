//
//  UNADRequestError.h
//  UNADSDK
//
//  Created by UNAD on 2020/10/01
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN



// UNADSDK Ads error domain.
//extern NSString *const kUNADErrorDomain;

// NSError codes for UNAD error domain.
typedef NS_ENUM(NSInteger, UNADErrorCode) {
    kUNADErrorUnknown                              = -10000,
    
    // unitID不能为空
    kUNADErrorUnitIDNULL                          = -10001,
    
    // 无效的URL，不能为空
    kUNADErrorURLNULL                              = -10002,
    
    // 在请求广告数据过程中请求超时
    kUNADErrorTimeout                              = -10003,
    
    // 在请求广告数据过程中出现了网络错误
    kUNADErrorNetworkError                         = -10004,
    
    // 广告ID出现错误
    kUNADErrorIDNotFound                           = -10005,
    
    // 广告ID使用错误，类型不匹配
    kUNADErrorIDUseError                           = -10006,
    
    // 广告请求成功，但没有返回广告内容
    kUNADErrorNoFill                               = -10007,
    
    // 广告请求成功，加载素材失败
    kUNADErrorLoadAdError                          = -10008,
    
    // 广告请求成功，获取到不支持的广告类型
    kUNADErrorDoesNotSupport                       = -10009,
    
    // 广告请求成功，激励视频存在错误
    kUNADErrorRewardedIsHotVideo                   = -10010,
    
    // 广告请求时长过短
    kUNADErrorLittleTime                           = -10011,
    
    // 广告请求成功，但没有返回广告内容
    kUNADErrorChannelNoFill                        = -10012,
    
    // 广告View未添加到页面
    kUNADErrorAdNotAddView                         = -11001,
    
    // 未发现上层控制器
    kUNADErrorDoesNotCurrentViewController        = -11002,
    
    // 未发现布局广告View
    kUNADErrorDoesNotCurrentView                  = -11003,
    
    // 广告还未加载完毕被切换到后台
    kUNADErrorEnterForeground                     = -11004,
    
    //原生广告上报时，页面没有添加到视图上
    kUNADErrorDoesNotDisplayedInScreen            = -11005,
    
    // 广告被移除屏幕
    kUNADErrorRemoveFromWindow                    = -11006,
    
    // 第三方渠道错误
    kThirdPartyChannelError                         = -12001,
    
    // 第三方渠道为空
    kUNADErrorChannelParameterNULL                = -12002,
    
};


@interface UNADRequestError : NSObject

@property(nonatomic,assign) UNADErrorCode code;
 
+ (UNADRequestError *)errorWithCode:(UNADErrorCode)code;

@end

NS_ASSUME_NONNULL_END
