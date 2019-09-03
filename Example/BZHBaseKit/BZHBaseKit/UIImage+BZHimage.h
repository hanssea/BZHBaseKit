//
//  UIImage+BZHimage.h
//  BZHBaseKit_Example
//
//  Created by JinYang on 2019/8/30.
//  Copyright © 2019 hanssea. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (BZHimage)
/**
 图片拉伸
 */
+(UIImage *)resizableImage:(NSString *)imageName;
@end

NS_ASSUME_NONNULL_END
