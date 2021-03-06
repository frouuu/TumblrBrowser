//
//  TableViewController.h
//  TumblrBrowser
//
//  Created by Magdalena Łazarecka on 3/7/16.
//  Copyright © 2016 Magdalena Łazarecka. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Post;

@interface TableViewController : UITableViewController <UISearchBarDelegate>

@property (nonatomic, strong) NSArray* posts;
@property (nonatomic, strong) NSString* blogName;

@property (weak, nonatomic) IBOutlet UISearchBar *searchBar;

@end
