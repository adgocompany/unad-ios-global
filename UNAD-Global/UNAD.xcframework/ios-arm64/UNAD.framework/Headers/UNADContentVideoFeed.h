//
//  UNADContentVideoFeed.h
//  UNAD
//
//  Created by xiezuan on 2022/8/21.
//  Copyright © 2022 UNAD. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UNADContentDelegate.h"


NS_ASSUME_NONNULL_BEGIN


@protocol UNADContentVideoFeedDelegate <NSObject>

@optional
  

/// 拉取信息流广告失败
/// @param error 失败错误
- (void)failToLoad:(NSError *)error;




@end



@interface UNADContentVideoFeed : NSObject

@property (nonatomic, weak) id<UNADVideoStateDelegate> videoStateDelegate;
@property (nonatomic, weak) id<UNADContentStateDelegate> contentStateDelegate;

@property (nonatomic, readonly) UIViewController *feedViewController;


- (instancetype)initWithUnitId:(NSString *)unitID;

/**
 设置夜间模式和非夜间模式
 themeMode：0：原样式， 1：夜间模式，如果设置了夜间模式，但是未创建夜间模式配置的plist，默认使用联盟的夜间页面
 */
- (void)setThemeMode:(NSInteger)themeMode;



@end

NS_ASSUME_NONNULL_END
