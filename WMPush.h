//
//  WMPush.h
//  WaymarkSDK
//
//  Created by Администратор on 02/12/16.
//  Copyright © 2016 Navigine. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WMPush : NSObject
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *targetting;
@property (nonatomic, strong) NSString *key;
//@property (nonatomic, strong) NSString *type;
@end
