//
//  SOWebViewVC_Pad.h
//  gregory
//
//  Created by G on 2014. 9. 6..
//  Copyright (c) 2014년 JDLab. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SOWebViewVC_Pad : UIViewController<UIWebViewDelegate>{
    IBOutlet UIWebView *webView;
}

@property (nonatomic, assign) BOOL homeButtonInNav;

- (IBAction)pressSafari:(id)sender;
- (IBAction)pressWebBack:(id)sender;
- (IBAction)pressWebFoward:(id)sender;
- (IBAction)pressWebReload:(id)sender;
- (BOOL)request:(NSURLRequest *)request;
-(IBAction)pressBack;

@end
