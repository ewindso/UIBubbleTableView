//
//  UIBubbleTableViewDelegate.h
//  Hippoverse-iOS
//
//  Created by Elijah Windsor on 9/12/13.
//  Copyright (c) 2013 Hippoverse. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UIBubbleTableView;
@protocol UIBubbleTableViewDelegate <NSObject>

@optional

-(void)willBeginDragging:(UIScrollView *)scrollView;
-(void)didScroll:(UIScrollView *)scrollView;

@required

@end
