//
//  BZHViewModelProtocol.h
//  BZHBaseKit_Example
//
//  Created by JinYang on 2019/8/30.
//  Copyright © 2019 hanssea. All rights reserved.
//  服务viewModel的协议

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  请求成功block
 */
typedef void (^BZHSuccessBlock)(id result);
/**
 *  请求失败block
 */
typedef void (^BZHFailureBlock) (NSError *error);


@protocol BZHViewModelProtocol <NSObject>

@optional
/**
 * viewModel 初始化属性
 */
- (void)bzh_initializeForViewModel;

/**
 * 配置tableView
 
 */
- (void)bzh_configTableView:(UITableView *)tableView;

/**
 * 加载数据 逻辑放在viewModel 赋值放在 view  bzh_configureViewWithModel 控制器不关注细节 多个数据请求不建议使用该方法
 */

- (void)bzh_viewModelWithFeeds:(NSDictionary *)feeds  success:(BZHSuccessBlock)success  failure:(BZHFailureBlock)failure;



@end

NS_ASSUME_NONNULL_END
