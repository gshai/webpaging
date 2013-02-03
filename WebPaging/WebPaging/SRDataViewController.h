//
//  SRDataViewController.h
//  WebPaging
//
//  Created by Gilad Shai on 2/3/13.
//  Copyright (c) 2013 Spotted Rhino. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SRDataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end
