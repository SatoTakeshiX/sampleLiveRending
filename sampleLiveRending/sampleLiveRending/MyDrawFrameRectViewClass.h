//
//  MyDrawFrameRectViewClass.h
//  sampleLiveRending
//
//  Created by satoutakeshi on 2015/06/17.
//  Copyright (c) 2015年 satoutakeshi. All rights reserved.
//

#import <UIKit/UIKit.h>
IB_DESIGNABLE
@interface MyDrawFrameRectViewClass : UIView
@property (nonatomic) IBInspectable NSInteger lineWidth;
@property (nonatomic, strong) IBInspectable UIColor *fillColor;
@property (nonatomic, assign) IBInspectable int sampleInt;
@property (nonatomic, assign) IBInspectable CGFloat sampleFloat;
@property (nonatomic, assign) IBInspectable BOOL sampleBool;
@property (nonatomic, strong) IBInspectable NSString *sampleString;
@property (nonatomic, assign) IBInspectable CGRect sampleRect;
@property (nonatomic, assign) IBInspectable CGSize sampleSize;
@property (nonatomic, assign) IBInspectable CGPoint samplePoint ;
@property (nonatomic, strong) IBInspectable UIImage *sampleImage ;
@property (nonatomic, strong) IBInspectable double *sampleDouble ;
@end
