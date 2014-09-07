//
//  SOWebViewVC_Pad.m
//  gregory
//
//  Created by G on 2014. 9. 6..
//  Copyright (c) 2014년 JDLab. All rights reserved.
//

#import "SOWebViewVC_Pad.h"

@implementation SOWebViewVC_Pad
@synthesize homeButtonInNav;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    [self loadView];
    return self;
}
-(void)viewDidLoad{
    if (self.homeButtonInNav) {
		UIBarButtonItem	*backB=[[UIBarButtonItem alloc] initWithTitle:@"Home"
																style:UIBarButtonItemStyleBordered
															   target:self
															   action:@selector(homeAction)];
		self.navigationItem.rightBarButtonItem=backB;
    }
}

-(void)homeAction{
    [self.navigationController  popToRootViewControllerAnimated:YES];
}

- (IBAction)pressSafari:(id)sender {
    [[UIApplication sharedApplication] openURL:webView.request.URL];
}

- (IBAction)pressWebBack:(id)sender {
    [webView goBack];
}

- (IBAction)pressWebFoward:(id)sender {
    [webView goForward];
}

- (IBAction)pressWebReload:(id)sender {
    [webView reload];
}

-(void)pressBack{
    [self.navigationController popViewControllerAnimated:YES];
}

- (BOOL)request:(NSURLRequest *)request{
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [webView loadRequest:request];
    });
    return YES;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return YES;
}

@end
