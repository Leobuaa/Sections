//
//  SearchResultsController.h
//  Sections
//
//  Created by Leo Peng on 5/26/16.
//  Copyright © 2016 Leo Peng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SearchResultsController : UITableViewController <UISearchResultsUpdating>
- (instancetype)initWithNames:(NSDictionary *)names keys:(NSArray *)keys;
@end
