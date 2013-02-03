//
//  SRDataViewController.m
//  WebPaging
//
//  Created by Gilad Shai on 2/3/13.
//  Copyright (c) 2013 Spotted Rhino. All rights reserved.
//

#import "SRDataViewController.h"

@interface SRDataViewController ()

@end

@implementation SRDataViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    self.dataLabel.text = [self.dataObject description];
}

@end
