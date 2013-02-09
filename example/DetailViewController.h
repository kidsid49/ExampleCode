//
//  DetailViewController.h
//  example
//
//  Created by siddarth chaturvedi on 09/02/13.
//  Copyright (c) 2013 siddarth chaturvedi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
