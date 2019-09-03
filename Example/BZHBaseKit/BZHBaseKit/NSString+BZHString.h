//
//  NSString+BZHString.h
//  BZHBaseKit_Example
//
//  Created by JinYang on 2019/8/30.
//  Copyright © 2019 hanssea. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (BZHString)
/**
 *  计算文本占用的宽高
 *
 *  @param font    显示的字体
 *  @param size 最大的显示范围
 *
 *  @return 占用的宽高
 */
- (CGSize)sizeWithFont:(UIFont *)font messageSize:(CGSize)size;

@end

NS_ASSUME_NONNULL_END
