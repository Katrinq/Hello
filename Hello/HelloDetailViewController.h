//
//  HelloDetailViewController.h
//  Hello
//
//  Created by Kate on 7/7/13.
//  Copyright (c) 2013 Kate. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
