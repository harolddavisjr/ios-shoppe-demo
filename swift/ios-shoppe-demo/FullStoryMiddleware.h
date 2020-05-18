//
//  FullStoryMiddleware.h
//  ios-shoppe-demo
//
//  Created on 5/15/20.
//  Copyright © 2020 FullStory All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Analytics/SEGMiddleware.h>

@interface FullStoryMiddleware : NSObject<SEGMiddleware>

@property (strong, nonatomic) NSArray* whitelistEvents;
@property (nonatomic) BOOL sendScreenAsEvents;
@property (nonatomic) BOOL enableGroupTraitsToUserVars;
@property (nonatomic) BOOL enableFSSessionURLInEvent;

//- (instancetype)init;
- (id)initWithWhitelistEvents:(NSArray<NSString *> *) whitelistEvents;
//- (instancetype)initWithWhitelistEvents:(NSArray<NSString *> *) whitelistEvents
//                        sendScreenAsEvents:(BOOL) sendScreenAsEvents
//                        enableGroupTraitsToUserVars:(BOOL) enableGroupTraitsToUserVars
//                        enableFSSessionURLInEvent:(BOOL) enableFSSessionURLInEvent;
    
- (void) whitelistEvents: (NSArray *) eventNames;
- (void) sendScreenAsEvents: (BOOL) enable;
- (void) enableGroupTraitsToUserVars: (BOOL) enable;
- (void) enableFSSessionURLInEvent: (BOOL) enable;
@end
