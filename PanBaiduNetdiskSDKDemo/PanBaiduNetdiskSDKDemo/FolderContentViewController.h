//
//  FolderContentViewController.h
//  PanBaiduNetdiskSDKDemo
//
//  Created by Artem on 08.06.2020.
//  Copyright © 2020 Everappz. All rights reserved.
//

#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@class PanBaiduNetdiskAPIClient;
@class LSOnlineFile;

@interface FolderContentViewController : UITableViewController

@property (nonatomic,strong)PanBaiduNetdiskAPIClient *client;

@property (nonatomic,strong)LSOnlineFile *rootDirectory;

@property (nonatomic,strong)NSString *userID;

@end

NS_ASSUME_NONNULL_END
