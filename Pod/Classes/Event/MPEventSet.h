//
//  MPEventSet.h
//
//  Copyright 2015 mParticle, Inc.
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

@class MPEvent;

@interface MPEventSet : NSObject

@property (nonatomic, unsafe_unretained, readonly) NSUInteger count;

- (nonnull instancetype)initWithCapacity:(NSUInteger)capacity __attribute__((objc_designated_initializer));
- (void)addEvent:(nonnull MPEvent *)event;
- (BOOL)containsEvent:(nonnull MPEvent *)event;
- (BOOL)containsEventWithName:(nonnull NSString *)eventName;
- (nullable MPEvent *)eventWithName:(nonnull NSString *)eventName;
- (void)removeEvent:(nonnull MPEvent *)event;
- (void)removeEventWithName:(nonnull NSString *)eventName;

@end