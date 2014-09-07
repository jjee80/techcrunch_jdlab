//
//  SetupVC.h
//  gregory
//
//  Created by G on 2014. 9. 6..
//  Copyright (c) 2014년 JDLab. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SetupVC : UIViewController{
    __weak IBOutlet UITextField *ageTF;
    __weak IBOutlet UITextField *heightTF;
    __weak IBOutlet UITextField *weighTF;
    __weak IBOutlet UITextField *tempratureTF;
    __weak IBOutlet UITextField *bmiTF;
    __weak IBOutlet UITextField *systolicBP;
    __weak IBOutlet UITextField *diastolicBP;

    __weak IBOutlet UITextField *respTF;
    __weak IBOutlet UISegmentedControl *isFemaleSW;
    __weak IBOutlet UISegmentedControl *isSmokeSW;
}
@end
