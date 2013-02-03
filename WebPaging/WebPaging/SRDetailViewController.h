//
//  SRDetailViewController.h
//  WebPaging
//
//  Created by Gilad Shai on 2/3/13.
//  Copyright (c) 2013 Gilad Shai. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SRDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
