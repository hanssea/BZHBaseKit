//
//  NSString+BZHString.m
//  BZHBaseKit_Example
//
//  Created by JinYang on 2019/8/30.
//  Copyright © 2019 hanssea. All rights reserved.
//

#import "NSString+BZHString.h"

@implementation NSString (BZHString)
- (CGSize)sizeWithFont:(UIFont *)font messageSize:(CGSize)size{
    NSDictionary *dict = @{NSFontAttributeName:font};
    CGSize textSize = [self boundingRectWithSize:size options:NSStringDrawingUsesLineFragmentOrigin attributes:dict context:nil].size;
    return textSize;
}
@end
