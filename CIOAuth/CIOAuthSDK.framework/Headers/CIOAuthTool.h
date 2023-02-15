//
//  CIOAuthTool.h
//  CIOAuth
//
//  Created by daben on 2022/10/31.
//

#import <Foundation/Foundation.h>
#import "CIOAuthConst.h"

NS_ASSUME_NONNULL_BEGIN

// 持续向外回调消息
typedef void(^OAuthResultCallback)(NSInteger callbackType, NSString * _Nullable callbackName, id _Nullable callbackParams, NSString * _Nullable errorString);

typedef NSDictionary<CIOAuthResKey, id> CIOAuthRes;

@interface CIOAuthTool : NSObject

+ (instancetype)tool;

/// 验证命令是否有效
/// @param command 命令
- (BOOL)canIUse:(NSString *)command;

/**
 OAuth消息分发
 
 @param message JS消息体
 @param callback 消息回调
 @discussion 该方法属于CIOAuthTool消息分发器，所有和OAuth相关的消息都通过该方法进行转发
 */
- (void)dispatchJSMessage:(NSDictionary *)message callback:(OAuthResultCallback)callback;

@end

NS_ASSUME_NONNULL_END
