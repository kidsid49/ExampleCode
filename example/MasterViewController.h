//
//  MasterViewController.h
//  example
//
//  Created by siddarth chaturvedi on 09/02/13.
//  Copyright (c) 2013 siddarth chaturvedi. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
