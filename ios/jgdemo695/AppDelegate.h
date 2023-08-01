#import <React/RCTBridgeDelegate.h>
#import <UIKit/UIKit.h>
#import <RCTJPushModule.h>
#import <UserNotifications/UserNotifications.h>


//@interface AppDelegate : UIResponder <UIApplicationDelegate, RCTBridgeDelegate>


@interface AppDelegate : UIResponder <UIApplicationDelegate, RCTBridgeDelegate, JPUSHRegisterDelegate>
@property (nonatomic, strong) UIWindow *window;


@end
