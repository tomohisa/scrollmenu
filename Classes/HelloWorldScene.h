//
//  HelloWorldLayer.h
//  scrollmenu
//
//  Created by Tomohisa Takaoka on 11/9/10.
//  Copyright Systom 2010. All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
#import "ScrollLayer.h"
// HelloWorld Layer
@interface HelloWorld : CCLayer
{
	ScrollLayer* scrollLayer;
	
}

@property (nonatomic, retain) ScrollLayer* scrollLayer;

// returns a Scene that contains the HelloWorld as the only child
+(id) scene;

@end
