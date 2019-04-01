//
//  EZSaaSCalendarHeader.h
//  Pods
//
//  Created by Wenchao Ding on 29/1/15.
//
//

#import <UIKit/UIKit.h>


@class EZSaaSCalendar, EZSaaSCalendarAppearance, EZSaaSCalendarHeaderLayout, EZSaaSCalendarCollectionView;

@interface EZSaaSCalendarHeaderView : UIView

@property (weak, nonatomic) EZSaaSCalendarCollectionView *collectionView;
@property (weak, nonatomic) EZSaaSCalendarHeaderLayout *collectionViewLayout;
@property (weak, nonatomic) EZSaaSCalendar *calendar;

@property (assign, nonatomic) CGFloat scrollOffset;
@property (assign, nonatomic) UICollectionViewScrollDirection scrollDirection;
@property (assign, nonatomic) BOOL scrollEnabled;
@property (assign, nonatomic) BOOL needsAdjustingViewFrame;
@property (assign, nonatomic) BOOL needsAdjustingMonthPosition;

- (void)setScrollOffset:(CGFloat)scrollOffset animated:(BOOL)animated;
- (void)reloadData;
- (void)configureAppearance;

@end


@interface EZSaaSCalendarHeaderCell : UICollectionViewCell

@property (weak, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) EZSaaSCalendarHeaderView *header;

@end

@interface EZSaaSCalendarHeaderLayout : UICollectionViewFlowLayout

@end

@interface EZSaaSCalendarHeaderTouchDeliver : UIView

@property (weak, nonatomic) EZSaaSCalendar *calendar;
@property (weak, nonatomic) EZSaaSCalendarHeaderView *header;

@end
