//
//  PanBaiduNetdiskScopeUtilities.h
//  PanBaiduNetdiskSDKObjc
//
//  Created by Artem on 3/10/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PanBaiduNetdiskScopeUtilities : NSObject

+ (NSCharacterSet *)disallowedScopeCharacters;

+ (NSString *)scopesWithArray:(NSArray<NSString *> *)scopes;

+ (NSArray<NSString *> *)scopesArrayWithString:(NSString *)scopes;

@end

NS_ASSUME_NONNULL_END
