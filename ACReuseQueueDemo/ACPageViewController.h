//
//  ACPageViewController.h
//  ACReuseQueue
//
//  Created by Arnaud Coomans on 24/01/14.
//  Copyright (c) 2014 Arnaud Coomans. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ACPageViewController : UIPageViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate>
@property (assign, nonatomic) BOOL useReuseQueue;
@end
