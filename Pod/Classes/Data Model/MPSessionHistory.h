//
//  MPSessionHistory.h
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

#import "MPDataModelProtocol.h"

@class MPSession;

@interface MPSessionHistory : NSObject <MPDataModelProtocol>

@property (nonatomic, strong, nullable) NSDictionary *userAttributes;
@property (nonatomic, strong, nullable) NSArray *userIdentities;
@property (nonatomic, strong, nonnull) MPSession *session;
@property (nonatomic, strong, nullable) NSArray *uploads;
@property (nonatomic, strong, readonly, nullable) NSArray *uploadIds;

- (nonnull instancetype)initWithSession:(nonnull MPSession *)session uploads:(nonnull NSArray *)uploads;

@end