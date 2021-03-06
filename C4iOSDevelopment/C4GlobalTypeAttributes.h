//
//  C4GlobalTypeAttributes.h
//  C4iOSDevelopment
//
//  Created by Travis Kirton on 11-10-09.
//  Copyright (c) 2011 mediart. All rights reserved.
//

#import "C4Object.h"

@interface C4GlobalTypeAttributes : C4Object {
@private
	NSMutableDictionary	*attributes;
}

+(C4GlobalTypeAttributes *)sharedManager;

-(void)setObject:(id)object forKey:(NSString *)key;
-(void)setValue:(id)object forKey:(NSString *)key;
-(void)removeObjectForKey:(NSString *)key;
-(id)objectForKey:(NSString *)key;

@property(readwrite, retain) NSMutableDictionary *attributes;

@end