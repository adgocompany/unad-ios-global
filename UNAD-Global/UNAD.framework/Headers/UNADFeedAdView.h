//
//  UNADFeedAdView.h
//  UNAD
//
//  Created by xiezuan on 2021/10/10.
//  Copyright © 2021 UNAD. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UNADFeedAdView : UIView

/**
 * 是否渲染完毕
 */
@property (nonatomic, assign, readonly) BOOL isReady;

/**
 * 是否是视频模板广告
 */
@property (nonatomic, assign, readonly) BOOL isVideoAd;

/*
 *  viewControllerForPresentingModalView
 *  详解：[必选]开发者需传入用来弹出目标页的ViewController，一般为当前ViewController
 */
@property (nonatomic, weak) UIViewController *controller;


@property (nonatomic, assign) NSInteger quantity_request_valid;
@property (nonatomic, assign) NSInteger quantity_show;
@property (nonatomic, assign) NSInteger quantity_click;
@property (nonatomic, assign) BOOL didShow;
@property (nonatomic, copy) NSString *hashKey ;

@property (nonatomic, assign)  NSObject *kuaiShouAD;//专门用来保存快手的Ad,防止被释放


//关闭回调block
@property (nonatomic, copy) void(^customCloseBlock)(UNADFeedAdView *feedView);

- (void)showCustomCloseButton:(BOOL)show;


/**
 *广告渲染
 */
- (void)render;

/**
 * 视频模板广告时长，单位 ms
 */
- (CGFloat)videoDuration;

/**
 * 视频模板广告已播放时长，单位 ms
 */
- (CGFloat)videoPlayTime;







@end

NS_ASSUME_NONNULL_END
