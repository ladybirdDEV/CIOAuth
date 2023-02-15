//
//  CIOAuthConst.h
//  CIOAuth
//
//  Created by daben on 2022/10/31.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 回调类型
typedef NS_ENUM(NSUInteger, CIOAuthJSCallbackType) {
    CIOAuthJSCallbackTypeNormal, // 普通回调
    CIOAuthJSCallbackTypeSubscribe // 订阅回调
};

/// 错误码
typedef NS_ENUM(NSInteger, CIOAuthError) {
    /// 未知
    CIOAuthErrorUnknown = 400,
    /// 成功
    CIOAuthErrorSuccess = 0,
    /// 失败
    CIOAuthErrorFailure = -1,
    /// 取消
    CIOAuthErrorCancel = 1,
    /// 缺少appid
    CIOAuthErrorNoAPPId = 2,
    /// 缺少token
    CIOAuthErrorNoToken = 3,
    /// 参数无效
    CIOAuthErrorInvalidParameters = 4
};

/// 参数名
typedef NSString * CIOAuthParamName;

/// api
FOUNDATION_EXPORT CIOAuthParamName const CIOAuthParamAPIName;
/// platform
FOUNDATION_EXPORT CIOAuthParamName const CIOAuthParamPlatformName;
/// callbackId
FOUNDATION_EXPORT CIOAuthParamName const CIOAuthParamCallbackIdName;
/// type
FOUNDATION_EXPORT CIOAuthParamName const CIOAuthParamTypeName;
/// accessToken
FOUNDATION_EXPORT CIOAuthParamName const CIOAuthParamAccessTokenName;

/// 响应：Native回调给小程序（网页）
typedef NSString * CIOAuthResKey;
/// 错误码（小程序框架设计如此：errMsg=ok代表成功，errMsg=fail代表失败）
/// 使用示例：@{CIOAuthResStatusKey : CIOAuthResStatusSuccess, CIOAuthResStatusMessageKey : @"This response is success"}
FOUNDATION_EXPORT CIOAuthResKey const CIOAuthResStatusKey;
FOUNDATION_EXPORT CIOAuthResKey const CIOAuthResStatusSuccess;
FOUNDATION_EXPORT CIOAuthResKey const CIOAuthResStatusFailure;
FOUNDATION_EXPORT CIOAuthResKey const CIOAuthResStatusMessageKey;

@interface CIOAuthConst : NSObject

@end

NS_ASSUME_NONNULL_END
