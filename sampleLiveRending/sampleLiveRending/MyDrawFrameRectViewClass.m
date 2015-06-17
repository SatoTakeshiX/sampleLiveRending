//
//  MyDrawFrameRectViewClass.m
//  sampleLiveRending
//
//  Created by satoutakeshi on 2015/06/17.
//  Copyright (c) 2015年 satoutakeshi. All rights reserved.
//

#import "MyDrawFrameRectViewClass.h"

@implementation MyDrawFrameRectViewClass


// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGRect      myFrame = self.bounds;
    CGContextSetLineWidth(context, _lineWidth);
    CGRectInset(myFrame, _lineWidth, _lineWidth);//CGRectを中心(center point)を変えずに領域を変更する。
    [_fillColor set];
    
    #if TARGET_INTERFACE_BUILDER
    // IBで作業時に描画させたいもの
    #endif
    
    
    UIRectFrame(myFrame);
}

//IB上のみで実行させたい処理
- (void)prepareForInterfaceBuilder
{

}


@end
