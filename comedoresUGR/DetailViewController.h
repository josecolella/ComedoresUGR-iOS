//
//  DetailViewController.h
//  comedoresUGR
//
//  Created by Jose Colella on 02/03/2014.
//  Copyright (c) 2014 Jose Colella. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
