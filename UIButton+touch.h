//
//  UIButton+touch.h
//  Master
//
//  Created by ConnorJ on 16/2/29.
//  Copyright © 2016年 PutiBaby. All rights reserved.
//


#import <UIKit/UIKit.h>
#define defaultInterval .5  //默认时间间隔
@interface UIButton (touch)
/**设置点击时间间隔*/
@property (nonatomic, assign) NSTimeInterval timeInterval;
@end
