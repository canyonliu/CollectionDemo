//
//  CollectionViewCell.h
//  CollectionViewDemo
//
//  Created by WayneLiu on 15/10/30.
//  Copyright (c) 2015年 lqc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *cellImage;
@property (weak, nonatomic) IBOutlet UIButton *cellButton;

@end
