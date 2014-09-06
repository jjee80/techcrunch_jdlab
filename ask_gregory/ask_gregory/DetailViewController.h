//
//  DetailViewController.h
//  ask_gregory
//
//  Created by jw on 9/6/14.
//  Copyright (c) 2014 JDLab. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
