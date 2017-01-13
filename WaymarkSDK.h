//
//  WaymarkSDK.h
//  WaymarkSDK
//
//  Created by Администратор on 29/11/16.
//  Copyright © 2016 Navigine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WMPush.h"

@protocol WaymarkSDKDelegate;

@interface WaymarkSDK : NSObject

+ (WaymarkSDK *) sharedInstance;

@property (nonatomic, weak) NSObject <WaymarkSDKDelegate> *delegate;

@property (nonatomic, strong) NSString *apiKey;

- (void) start;
- (void) stop;

- (void) registerDeviceToken:(NSData *)deviceToken;

@end

@protocol WaymarkSDKDelegate <NSObject>

- (void) waymarkSDK:(WaymarkSDK *)waymarkSDK authentificationFailedWithError:(NSError *)error;
- (void) waymarkSDK:(WaymarkSDK *)waymarkSDK recievedPush:(WMPush *)push;

@end
