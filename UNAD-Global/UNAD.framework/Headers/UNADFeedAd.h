//
//  UNADFeedAd.h
//  UNAD
//
//  Created by xiezuan on 2021/02/10.
//  Copyright © 2021 UNAD. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UNADFeedAdView.h"
#import "UGADTTemplateView.h"


@class GADNativeAdView;
@class GADNativeAd;
@class UNADFeedAd;
@class UNADFeedAdView;


NS_ASSUME_NONNULL_BEGIN


@protocol UNADFeedAdDelegate <NSObject>

@optional
  

/**
 * 拉取信息流广告成功
 */
- (void)feedAdSuccessToLoad:(UNADFeedAd *)feedAd views:(NSArray<__kindof UNADFeedAdView *> *)views;
/**
 * 拉取信息流广告失败
 */
- (void)feedAdFailToLoad:(UNADFeedAd *)feedAd error:(NSError *)error;

/**
 * 信息流广告渲染成功, 此时的 feedAdView.size.height 根据 size.width 完成了动态更新。
 */
- (void)feedAdViewRenderSuccess:(UNADFeedAdView *)feedAdView;

/**
 * 信息流广告渲染失败
 */
- (void)feedAdViewRenderFail:(UNADFeedAdView *)feedAdView;

/**
 * 信息流广告展示
 */
- (void)feedAdViewDidShow:(UNADFeedAdView *)feedAdView;

/**
 * 信息流广告点击回调
 */
- (void)feedAdViewClicked:(UNADFeedAdView *)feedAdView;

/**
 * 信息流广告被关闭
 */
- (void)feedAdViewClosed:(UNADFeedAdView *)feedAdView;



#pragma mark - 自定义模版

//Admob
- (GADNativeAdView *)setupAdmobTemplate:(GADNativeAd *)nativeAd;


@end


@interface UNADFeedAd : NSObject



/** 显示当前广告的ViewController */
@property(nonatomic, weak) UIViewController *rootViewController;
/**委托对象*/
@property (nonatomic, weak) id<UNADFeedAdDelegate> delegate;
/**非 WiFi 网络，是否自动播放。默认 NO。loadAd 前设置。*/
@property (nonatomic, assign) BOOL videoAutoPlayOnWWAN;


/** 播放视频开启声音，插屏默认关闭 */
@property (nonatomic, assign) BOOL enableAudio;
/**点击详情页播放视频开启声音，信息流默认关闭 */
@property (nonatomic, assign) BOOL enableDetailPageAudio;


/**
 请求视频的时长下限。
 以下两种情况会使用 0，1:不设置  2:minVideoDuration大于maxVideoDuration
*/
@property (nonatomic) NSInteger minVideoDuration;

/**
 请求视频的时长上限，视频时长有效值范围为[5,180]。
 */
@property (nonatomic) NSInteger maxVideoDuration;

@property (nonatomic, readonly) NSString *unitId;

/**海外显示关闭按钮*/
@property (nonatomic, assign) BOOL needCloseButton;

/**
 *  构造方法
 *  详解：unitId - 广告位 ID
 *       adSize - 广告展示的宽高
 */

- (instancetype)initWithUnitId:(NSString *)unitID adSize:(CGSize)size;


/**
 *  拉取广告
 *  @param count 请求广告数量，区间为[1，3]，若大于3默认设置为3
 */
- (void)loadAd:(NSInteger)count;





@end

NS_ASSUME_NONNULL_END
