//
//  UITextView+BZHTextView.h
//  BZHBaseKit_Example
//
//  Created by JinYang on 2019/8/30.
//  Copyright © 2019 hanssea. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITextView (BZHTextView)
/**
 *  UITextView+placeholder
 */
@property (nonatomic, copy) NSString *zw_placeHolder;
/**
 *  IQKeyboardManager等第三方框架会读取placeholder属性并创建UIToolbar展示
 */
@property (nonatomic, copy) NSString *placeholder;
/**
 *  placeHolder颜色
 */
@property (nonatomic, strong) UIColor *zw_placeHolderColor;
@end

NS_ASSUME_NONNULL_END
