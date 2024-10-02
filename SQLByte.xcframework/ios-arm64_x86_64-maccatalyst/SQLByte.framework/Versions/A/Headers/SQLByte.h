//
//  SQLByte.h
//  SQLByte
//
//  Created by John Blaine on 10/2/24.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT double SQLByteVersionNumber;
FOUNDATION_EXPORT const unsigned char SQLByteVersionString[];

NS_ASSUME_NONNULL_BEGIN

@interface SQLByte : NSObject

- (instancetype)initWithDb:(NSString*)db;

- (NSString*)helpWithCommand:(NSString*)cmd;


- (void) query:(NSString*)q response:(void(^)(NSMutableArray *result))callback;
- (void) select:(nullable NSString*)q response:(void(^)(NSMutableArray *result))callback;

@end

NS_ASSUME_NONNULL_END
