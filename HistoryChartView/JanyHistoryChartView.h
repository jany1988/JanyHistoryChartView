//
//  JanyHistoryChartView.h
//  HistoryChartView
//
//  Created by Jany on 16/3/10.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JanyHistoryChartView : UIView
@property (nonatomic, strong) NSArray *dataValue;
@property (nonatomic, strong) NSArray *dateValue;

- (void)refreshChartScrollView;
@end
