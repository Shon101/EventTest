//
//  DetailViewController.h
//  EventTest
//
//  Created by Sudarshon Malla on 12/13/12.
//  Copyright (c) 2012 Sudarshon Malla. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
