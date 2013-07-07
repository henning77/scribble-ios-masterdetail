//
//  DetailViewController.h
//  DummyMasterDetailiOsApp
//
//  Created by Henning Böger on 13.01.13.
//  Copyright (c) 2013 Henning Böger. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
