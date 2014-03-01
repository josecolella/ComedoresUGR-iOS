//
//  MasterViewController.h
//  comedoresUGR
//
//  Created by Jose Colella on 02/03/2014.
//  Copyright (c) 2014 Jose Colella. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
