
#import <Foundation/Foundation.h>
#import "UNADContentDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@protocol UNADHorizontalFeedCallBackProtocol <UNADVideoStateDelegate, UNADContentStateDelegate>

@optional
/// 进入横版视频详情页
/// @param viewController 详情页VC
/// @param contentInfo 视频信息
- (void)unad_horizontalFeedDetailDidEnter:(UIViewController *)viewController contentInfo:(UNADContentInfo*)contentInfo;

/// 离开横版视频详情页
/// @param viewController 详情页VC
- (void)unad_horizontalFeedDetailDidLeave:(UIViewController *)viewController;

/// 视频详情页appear
/// @param viewController 详情页VC
- (void)unad_horizontalFeedDetailDidAppear:(UIViewController *)viewController;

/// 详情页disappear
/// @param viewController 详情页VC
- (void)unad_horizontalFeedDetailDidDisappear:(UIViewController *)viewController;

@end

NS_ASSUME_NONNULL_END
