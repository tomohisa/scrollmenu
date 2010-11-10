//
//  scrollmenuAppDelegate.h
//  scrollmenu
//
//  Created by Tomohisa Takaoka on 11/9/10.
//  Copyright Systom 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface scrollmenuAppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
