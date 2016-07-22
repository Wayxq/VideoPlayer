//
//  PlayViewController.h
//  VideoPlayer
//
//  Created by way on 16/7/22.
//  Copyright © 2016年 way. All rights reserved.
//

@import MediaPlayer;

@interface PlayViewController : MPMoviePlayerController

@property (copy,nonatomic) void(^dismissCompleteBlock)(void);
@property (assign,nonatomic) CGRect frame;

-(instancetype)initWithFrame:(CGRect)frame;

-(void)showInWindow;
-(void)dismiss;

@end
