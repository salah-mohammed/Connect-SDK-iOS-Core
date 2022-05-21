//
//  KeyControl.h
//  Connect SDK
//
//  Created by Jeremy White on 1/3/14.
//  Copyright (c) 2014 LG Electronics.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>
#import "Capability.h"

#define kKeyControlAny @"KeyControl.Any"

#define kKeyControlUp @"KeyControl.Up"
#define kKeyControlDown @"KeyControl.Down"
#define kKeyControlLeft @"KeyControl.Left"
#define kKeyControlRight @"KeyControl.Right"
#define kKeyControlOK @"KeyControl.OK"
#define kKeyControlBack @"KeyControl.Back"
#define kKeyControlHome @"KeyControl.Home"
#define kKeyControlSendKeyCode @"KeyControl.Send.KeyCode"
//new
#define kKeyControlEnter @"KeyControl.Enter"
#define kKeyControlMenu @"KeyControl.Menu"
#define kKeyControlInfo @"KeyControl.Info"
#define kKeyControlExit @"KeyControl.Exit"
#define kKeyControlRed @"KeyControl.Red"
#define kKeyControlGreen @"KeyControl.Green"
#define kKeyControlYellow @"KeyControl.Yellow"
#define kKeyControlBlue @"KeyControl.Blue"
#define kKeyControlList @"KeyControl.List"
#define kKeyControlAD @"KeyControl.AD"
#define kKeyControl0 @"KeyControl.0"
#define kKeyControl1 @"KeyControl.1"
#define kKeyControl2 @"KeyControl.2"
#define kKeyControl3 @"KeyControl.3"
#define kKeyControl4 @"KeyControl.4"
#define kKeyControl5 @"KeyControl.5"
#define kKeyControl6 @"KeyControl.6"
#define kKeyControl7 @"KeyControl.7"
#define kKeyControl8 @"KeyControl.8"
#define kKeyControl9 @"KeyControl.9"
#define kKeyControlSearch @"KeyControl.Search"
#define kKeyControlScreenRemote @"kKeyControl.ScreenRemote"
#define kKeyControlMute @"kKeyControl.Mute"

#define kKeyControlCapabilities @[\
    kKeyControlUp,\
    kKeyControlDown,\
    kKeyControlLeft,\
    kKeyControlRight,\
    kKeyControlOK,\
    kKeyControlBack,\
    kKeyControlHome,\
    kKeyControlSendKeyCode,\
    kKeyControlEnter,\
    kKeyControlMenu,\
    kKeyControlInfo,\
    kKeyControlExit,\
    kKeyControlRed,\
    kKeyControlGreen,\
    kKeyControlYellow,\
    kKeyControlBlue,\
    kKeyControlList,\
    kKeyControlAD,\
    kKeyControl0,\
    kKeyControl1,\
    kKeyControl2,\
    kKeyControl3,\
    kKeyControl4,\
    kKeyControl5,\
    kKeyControl6,\
    kKeyControl7,\
    kKeyControl8,\
    kKeyControl9,\
    kKeyControlSearch,\
    kKeyControlScreenRemote,\
    kKeyControlMute\
]

@protocol KeyControl <NSObject>

- (id<KeyControl>) keyControl;
- (CapabilityPriorityLevel) keyControlPriority;

- (void) upWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) downWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) leftWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) rightWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) okWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) backWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) homeWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) menuWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) redWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) greenWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) yellowWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) blueWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) listWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) adWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) number0WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) number1WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) number2WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) number3WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) number4WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) number5WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) number6WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) number7WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) number8WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) number9WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) searchWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) screenRemoteSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) muteSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void) sendMouseButton:(NSUInteger)button success:(SuccessBlock)success failure:(FailureBlock)failure;

- (void) sendKeyCode:(NSUInteger)keyCode success:(SuccessBlock)success failure:(FailureBlock)failure;

@end
