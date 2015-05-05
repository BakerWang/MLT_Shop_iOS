//
//  GoodsTwoTableViewCell.m
//  mltshop
//
//  Created by mactive.meng on 14/12/14.
//  Copyright (c) 2014 manluotuo. All rights reserved.
//

#import "GoodsTwoTableViewCell.h"
#import <SDWebImage/UIImageView+WebCache.h>
#import "NSString+Size.h"
@interface GoodsTwoTableViewCell(){
    GoodsHalfCell *leftCell;
    GoodsHalfCell *rightCell;
}

@property(nonatomic, strong)UITapGestureRecognizer *leftTap;
@property(nonatomic, strong)UITapGestureRecognizer *rightTap;
@property(nonatomic, strong)GoodsModel *leftData;
@property(nonatomic, strong)GoodsModel *rightData;


@end

@implementation GoodsTwoTableViewCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
        self.selectionStyle = UITableViewCellSelectionStyleNone;
        [self initCellView];
    }
    return self;
}

- (void)initCellView
{
//    leftCell = [[GoodsHalfCell alloc]initWithFrame:CGRectMake(0, 0, TOTAL_WIDTH/2, GOODS_CELL_HEIGHT)];
//    rightCell = [[GoodsHalfCell alloc]initWithFrame:CGRectMake(TOTAL_WIDTH/2, 0, TOTAL_WIDTH/2, GOODS_CELL_HEIGHT)];

    leftCell = [[GoodsHalfCell alloc] initWithFrame:CGRectMake(0, 0, TOTAL_WIDTH, TOTAL_WIDTH + 55)];
    rightCell  = [[GoodsHalfCell alloc] initWithFrame:CGRectMake(0, leftCell.height - 10, TOTAL_WIDTH, TOTAL_HEIGHT - 108)];
    
    
    self.leftTap = [[UITapGestureRecognizer alloc]
                      initWithTarget:self
                      action:@selector(tapLeftAction:)];
    self.leftTap.numberOfTapsRequired = 1;
    [leftCell addGestureRecognizer:self.leftTap];

    self.rightTap = [[UITapGestureRecognizer alloc]
                    initWithTarget:self
                    action:@selector(tapRightAction:)];
    self.rightTap.numberOfTapsRequired = 1;
    [rightCell addGestureRecognizer:self.rightTap];
    
    [self addSubview:leftCell];
    [self addSubview:rightCell];
    
    self.backgroundColor = [UIColor colorWithRed:111/225.0 green:111/225.0 blue:111/225.0 alpha:0.08];
    
}

- (void)setNewData:(NSDictionary *)_newDataDict
{
    self.leftData = _newDataDict[@"left"];
    self.rightData = _newDataDict[@"right"];
    
    [leftCell setup:self.leftData];
    [rightCell setup:self.rightData];
    
}

-(void)tapLeftAction:(id)sender
{
    [self.passDelegate passSignalValue:SIGNAL_TAP_VEHICLE andData:self.leftData];
}

-(void)tapRightAction:(id)sender
{
    [self.passDelegate passSignalValue:SIGNAL_TAP_VEHICLE andData:self.rightData];
}



- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end


@interface GoodsHalfCell()
{
    UIImageView *goodsImg;
    UILabel *titleLabel;
    UILabel *priceLabel;
    UILabel *nameLabel;
}

@end

@implementation GoodsHalfCell

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    
    if(self){
        UIView *containView = [[UIView alloc] initWithFrame:CGRectMake(H_5, H_15, TOTAL_WIDTH - H_10, TOTAL_WIDTH + H_30)];
        
        
        //[containView setBackgroundColor:GRAYLIGHTCOLOR];
        containView.layer.borderColor = [UIColor whiteColor].CGColor;
        containView.layer.borderWidth = 2.0;
        containView.layer.cornerRadius = 5;
        containView.layer.masksToBounds = YES;
        //containView.backgroundColor = [UIColor colorWithRed:251/255.0 green:247/255.0 blue:237/255.0 alpha:1];
        containView.backgroundColor = WHITECOLOR;
        
        // right
        goodsImg = [[UIImageView alloc]initWithFrame:CGRectMake(2, 0, containView.width - H_4, containView.width - 20)];
        goodsImg.layer.cornerRadius = 2;
        goodsImg.layer.masksToBounds = YES;

        nameLabel = [[UILabel alloc]initWithFrame:CGRectMake(H_10, CGRectGetMaxY(goodsImg.frame) + H_10, H_130, H_20)];
        [nameLabel setFont:[UIFont systemFontOfSize:15]];
        [nameLabel setTextColor:DARKCOLOR];
        //[titleLabel setTextAlignment:NSTextAlignmentCenter];
        nameLabel.numberOfLines = 0;
        
        titleLabel = [[UILabel alloc] initWithFrame:CGRectMake(nameLabel.x + H_5, CGRectGetMaxY(nameLabel.frame), containView.width, 50)];
        //titleLabel.backgroundColor = GREENCOLOR;
        titleLabel.font = [UIFont systemFontOfSize:12];
        titleLabel.textColor = GRAYLIGHTCOLOR;
        
        
        priceLabel = [[UILabel alloc]initWithFrame:CGRectMake(H_10, H_110, H_130, H_20)];
        priceLabel.x = CGRectGetMaxX(containView.frame) - H_150;
        [priceLabel setFont:CUSTOMFONT_17];
        [priceLabel setTextColor:ORANGECOLOR];
        [priceLabel setTextAlignment:NSTextAlignmentRight];
    
        
        [containView addSubview:priceLabel];
        [containView addSubview:titleLabel];
        [containView addSubview:goodsImg];
        [containView addSubview:nameLabel];
        [self addSubview:containView];
        
//        [self addSubview:line];
//        [self addSubview:goodsImg];
//        [self addSubview:titleLabel];
//        [self addSubview:priceLabel];
    }
    return self;
}

- (void)setup:(GoodsModel *)theGoods
{
    CGSize titleSize = [[DataTrans getSepString:theGoods.goodsName] sizeWithWidth:H_130 andFont:FONT_12];
    titleLabel.height = titleSize.height;
    priceLabel.y = nameLabel.y;
    
    [goodsImg sd_setImageWithURL:[NSURL URLWithString:theGoods.cover.thumb] placeholderImage:PLACEHOLDERIMAGE];
    [titleLabel setText:[DataTrans getSepLastString:theGoods.goodsName]];
    [nameLabel setText:[DataTrans getSepString:theGoods.goodsName]];

//    显示特价
    if (theGoods.promotePrice.integerValue > 0) {
        [priceLabel setText:[[theGoods.promotePrice stringValue] stringByAppendingString:@"元"]];
    }else{
        [priceLabel setText:[[theGoods.shopPrice stringValue] stringByAppendingString:@"元"]];
    }

}
@end

