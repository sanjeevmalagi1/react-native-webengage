//
//  webengageBridge.h
//  testReact1
//
//  Created by Uzma Sayyed on 10/16/17.
//  Copyright © 2017 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <React/RCTBridgeModule.h>
#import <WebEngage/WebEngage.h>
#import <React/RCTEventEmitter.h>
#import <UserNotifications/UserNotifications.h>
#import <React/RCTBridgeDelegate.h>

@interface WEGWebEngageBridge : RCTEventEmitter<RCTBridgeModule, WEGInAppNotificationProtocol, UNUserNotificationCenterDelegate, RCTBridgeDelegate>

@property WEGWebEngageBridge* wegBridge;

@end
