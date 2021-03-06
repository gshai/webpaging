//
//  SRModelController.h
//  WebPaging
//
//  Created by Gilad Shai on 2/3/13.
//  Copyright (c) 2013 Spotted Rhino. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SRDataViewController;

@interface SRModelController : NSObject <UIPageViewControllerDataSource>

- (SRDataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(SRDataViewController *)viewController;

@end
