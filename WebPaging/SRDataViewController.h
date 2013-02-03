//
//  SRDataViewController.h
//  WebPaging
//
//  Created by Gilad Shai on 2/3/13.
//  Copyright (c) 2013 Spotted Rhino. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SRDataViewController : UIViewController <UIWebViewDelegate>

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;
@property (strong, nonatomic) IBOutlet UIWebView *mainWB;

@end
