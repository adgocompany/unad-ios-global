//
//  UNADOrientationManager.h
//  UNAD
//
//  Created by xiezuan on 2025/11/17.
//  Copyright © 2025 UNAD. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UNADOrientationManager : NSObject

@property (nonatomic, assign, readonly) BOOL lockPortrait;

+ (instancetype)sharedManager;

/// 开始锁定，只允许竖屏（不设时长）
- (void)startLockPortrait;

/// 停止锁定，恢复 App 支持的原本方向
- (void)stopLockPortrait;


@end

NS_ASSUME_NONNULL_END
