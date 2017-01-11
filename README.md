# Objective-C Waymark SDK  

## Overview
This page contains the formal description of WaymarkSDK API: a list of classes
and their public fields and methods which provide the following functionality:
 * automatically registering your device on the Waymark Platform;
 * automatically authorize on the Waymark Platform;
 * reacting to iBacon signal and receive information from server;
 * sending information about received push;

The following API can be used for building your own iOS apps using our
Waymark library.

## Usage

### Initialize
To be able to use the library you: the first thing you need to do is to get your unique **apiKey**. To do that please contact Waymark support.

First of all you should defile WaymarkSDK object which conforms to <WaymarkSDKDelegate> protocol:

```Objective-C
#import "WaymarkSDK.h"

@interface MyCustomViewController : ViewController <WaymarkSDKDelegate>
@property (strong, nonatomic) WaymarkSDK *waymark;
@end

```

Initialize WaymarkSDK object with your **apiKey**. Set delegate. 

```Objective-C
// kWMAPIKey - your apiKey
_waymark = [[WaymarkSDK alloc] initWithApiKey:kWMAPIKey];
_waymark.delegate = self;
```

### Start/Stop SDK

To start and stop SDK you should call:

```Objective-C
[_waymark start];
// or
[_waymark stop];
```

### WMPush Class

```Objective-C
@interface WMPush : NSObject
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *targetting;
@property (nonatomic, strong) NSString *key;
@end
```

### Delegate

To receive push information from server you should implement `waymarkSDK: recievedPush:` method of WaymarkSDKDelegate protocol.

```Objective-C
- (void) waymarkSDK:(WaymarkSDK *)waymarkSDK recievedPush:(WMPush *)push{
// handle push
}
```

In your `waymarkSDK:authentificationFailedWithError:` method of WaymarkSDKDelegate protocol you can receive error if authorization unavaliable.

```Objective-C
- (void) waymarkSDK:(WaymarkSDK *)waymarkSDK authentificationFailedWithError:(NSError *)error{
  NSLog(@"%@",error);
}
```
