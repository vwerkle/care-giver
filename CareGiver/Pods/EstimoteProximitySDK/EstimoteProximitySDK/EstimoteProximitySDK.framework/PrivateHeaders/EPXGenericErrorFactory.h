//
//    ____                _           _ _           ____  ____  _  __
//   |  _ \ _ __ _____  _(_)_ __ ___ (_) |_ _   _  / ___||  _ \| |/ /
//   | |_) | '__/ _ \ \/ / | '_ ` _ \| | __| | | | \___ \| | | | ' /
//   |  __/| | | (_) >  <| | | | | | | | |_| |_| |  ___) | |_| | . \
//   |_|   |_|  \___/_/\_\_|_| |_| |_|_|\__|\__, | |____/|____/|_|\_\
//                                          |___/
//
//  Copyright © 2017 Estimote. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/*
 Simplifies creation of NSErrors.
 */
@interface EPXGenericErrorFactory : NSObject

/*
 Constructs NSError object with domain, code and user info with proper keys.
 */
+ (NSError *)makeErrorWithDomain:(NSString *)domain
                            code:(NSInteger)code
                     description:(nullable NSString *)description
                        recovery:(nullable NSString *)recovery
                 underlyingError:(nullable NSError *)underlyingError;

@end

NS_ASSUME_NONNULL_END
