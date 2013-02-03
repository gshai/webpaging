//
//  SRRootViewController.h
//  WebPaging
//
//  Created by Gilad Shai on 2/3/13.
//  Copyright (c) 2013 Spotted Rhino. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SRRootViewController : UIViewController <UIPageViewControllerDelegate>

@property (strong, nonatomic) UIPageViewController *pageViewController;

@end
