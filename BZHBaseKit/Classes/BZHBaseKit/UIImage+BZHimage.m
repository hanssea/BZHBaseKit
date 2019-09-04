//
//  UIImage+BZHimage.m
//  BZHBaseKit_Example
//
//  Created by JinYang on 2019/8/30.
//  Copyright © 2019 hanssea. All rights reserved.
//

#import "UIImage+BZHimage.h"

@implementation UIImage (BZHimage)
+(UIImage *)resizableImage:(NSString *)imageName {
    UIImage *image = [UIImage imageNamed:imageName];
    CGFloat w = image.size.width * 0.5;
    CGFloat h = image.size.height * 0.5;
    return [image resizableImageWithCapInsets:UIEdgeInsetsMake(w, h, w, h)];
}
@end
