//
//  CAudioInstrument+CMIDI.m
//  CAudioMIDI
//
//  Created by CHARLES GILLINGHAM on 9/20/15.
//  Copyright (c) 2015 CharlesGillingham. All rights reserved.
//

#import "CAudioInstrument+CMIDI.h"

@implementation CAudioInstrument (CMIDI)
- (void) respondToMIDI:(CMIDIMessage *)message
{
    [self respondToMIDI:(Byte *)message.data.bytes ofSize:message.data.length];
}

@end
