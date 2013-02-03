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
    
    _mainWB.scalesPageToFit = YES;
    NSString *urlStr = [self.dataObject description];
    NSURL *url = [NSURL URLWithString:urlStr];
    NSURLRequest *request = [[NSURLRequest alloc] initWithURL:url];
    [_mainWB loadRequest:request];
}

#pragma mark - webview protocol
- (void)webViewDidStartLoad:(UIWebView *)webView {
    NSLog(@"webViewDidStartLoad: %@", webView.request.URL.description);
    
}
- (void)webViewDidFinishLoad:(UIWebView *)webView {
    NSLog(@"webViewDidFinishLoad: %@", webView.request.URL.description);
    
}
- (void)webView:(UIWebView *)webView didFailLoadWithError:(NSError *)error {
    NSLog(@"webView didFailLoadWithError: %@", error.description);
    
}

@end
