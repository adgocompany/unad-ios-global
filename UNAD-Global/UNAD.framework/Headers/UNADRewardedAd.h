//
//  UNADRewardedAd.h
//  UNAD
//
//  Created by xiezuan on 2020/2/23.
//  Copyright © 2021 UNAD. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN


@protocol UNADRewardedAdDelegate;



@interface UNADRewardedReward : NSObject

/// Type of the reward.
@property(nonatomic, copy) NSString *type;
/// Amount rewarded to the user.
@property(nonatomic, strong) NSDecimalNumber *amount;

@end

@interface UNADRewardedAd : NSObject

@property (nonatomic, weak, nullable) id<UNADRewardedAdDelegate> delegate;

/** 播放视频开启声音，激励默认开启 */
@property (nonatomic, assign) BOOL enableAudio;


- (instancetype)initWithUnitID:(NSString *)unitID;
/**
 加载广告
 */
- (void)loadAd;

/**
 显示广告
 */
- (void)showAdFromRootViewController:(nonnull UIViewController *)rootViewController;



@end


@protocol UNADRewardedAdDelegate <NSObject>
@optional
/**
 广告加载成功
 */
- (void)rewardedAdLoaded:(UNADRewardedAd *)rewardedAd;
/**
 广告加载失败
 */
- (void)rewardedAd:(UNADRewardedAd *)rewardedAd didFailWithError:(NSError *)error;
/**
 广告显示
 */
- (void)rewardedAdShown:(UNADRewardedAd *)rewardedAd;
/**
 广告点击
 */
- (void)rewardedAdClicked:(UNADRewardedAd *)rewardedAd;
/**
 弹出广告被关闭
 */
- (void)rewardedAdDismissed:(UNADRewardedAd *)rewardedAd;
/**
 广告完成收看任务，可收到奖励
 */
- (void)rewardedAdShouldRewardAd:(UNADRewardedAd *)rewardedAd;


@end


NS_ASSUME_NONNULL_END
