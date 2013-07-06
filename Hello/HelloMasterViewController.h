//
//  HelloMasterViewController.h
//  Hello
//
//  Created by Kate on 7/7/13.
//  Copyright (c) 2013 Kate. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HelloDetailViewController;

@interface HelloMasterViewController : UITableViewController

@property (strong, nonatomic) HelloDetailViewController *detailViewController;

@end
