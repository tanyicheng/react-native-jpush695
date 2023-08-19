#import <React/RCTBridgeDelegate.h>
#import <UIKit/UIKit.h>
//jpush-start
#import <RCTJPushModule.h>
#import <UserNotifications/UserNotifications.h>


//@interface AppDelegate : UIResponder <UIApplicationDelegate, RCTBridgeDelegate>
@interface AppDelegate : UIResponder <UIApplicationDelegate, RCTBridgeDelegate, JPUSHRegisterDelegate>
//jpush-end

@property (nonatomic, strong) UIWindow *window;


@end
