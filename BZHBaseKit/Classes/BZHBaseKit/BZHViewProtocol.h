//
//  BZHViewProtocol.h
//  BZHBaseKit_Example
//
//  Created by JinYang on 2019/8/30.
//  Copyright © 2019 hanssea. All rights reserved.
//  服务view的协议

#import <Foundation/Foundation.h>
#import "BZHViewModelProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@protocol BZHViewProtocol <NSObject>

@optional

/**
 * 创建cell方法
 */
+ (instancetype)cellWithTableView:(UITableView *)tableView;


/**
 初始化视图
 */
- (void)bzh_createViewForView;


/**
 为视图绑定 viewModel
 
 @param viewModel 要绑定的ViewModel
 @param params 额外参数
 */
- (void)bzh_bindViewModel:(id <BZHViewModelProtocol>)viewModel withParams:(id)params;


/**
 *  根据model配置UIView，设置UIView内容
 */
- (void)bzh_configureViewWithModel:(id)model;

@end

NS_ASSUME_NONNULL_END
